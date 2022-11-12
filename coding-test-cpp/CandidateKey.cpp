//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <sstream>
//using namespace std;
//
//vector<vector<string>> db;
//vector<int> perm;
//int temp[9];
//set<set<int>> minSet;
//
//int answer = 0;
//int row = 0;
//int col = 0;
//
//void dfs(int cnt, int idx, int m) {
//    if (cnt == m) {
//        //조합 검사
//        vector<string> v(row, "");
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < row; j++) {
//                v[j] += db[j][temp[i]];
//            }
//        }
//
//        set<string> s;
//        for (int i = 0; i < row; i++) {
//            s.insert(v[i]);
//        }
//
//        if (s.size() == row) {
//            //최소성 검사
//            set<int> num;
//            for (int i = 0; i < m; i++) {
//                num.insert(temp[i]);
//            }
//
//            for (const auto& e : minSet) {
//                set<int> tempSet;
//
//                set_intersection(e.begin(), e.end(), num.begin(), num.end(), inserter(tempSet, tempSet.begin()));
//
//                if (tempSet == e) {
//                    return;
//                }
//                else {
//                    continue;
//                }
//            }
//
//            minSet.insert(num);
//            answer++;
//        }
//
//        return;
//    }
//
//    for (int i = idx; i < perm.size(); i++) {
//        temp[cnt] = perm[i];
//        dfs(cnt + 1, i + 1, m);
//    }
//}
//
//int solution(vector<vector<string>> relation) {
//    db = relation;
//    row = relation.size();
//    col = relation[0].size();
//
//    set<string> s;
//
//    for (int i = 0; i < col; i++) {
//        for (int j = 0; j < row; j++) {
//            s.insert(relation[j][i]);
//        }
//
//        if (s.size() == row) {
//            answer++; //PK
//        }
//        else {
//            perm.push_back(i);
//        }
//
//        s.clear();
//    }
//
//    for (int i = 1; i <= perm.size(); i++) {
//        dfs(0, 0, i);
//    }
//
//    return answer;
//}
//
//int main() {
//    // 18 19 20 22 25
//    return 0;
//}