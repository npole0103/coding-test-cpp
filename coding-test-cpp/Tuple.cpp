//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//map<int, int> m; //num - cnt
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    return a.second > b.second;
//}
//
//vector<int> solution(string s) {
//    vector<int> answer;
//
//    string temp;
//
//    for (int i = 0; i < s.size(); i++) {
//        if ('0' <= s[i] && s[i] <= '9') {
//            temp += s[i];
//        }
//        else {
//            if (temp != "") {
//                m[stoi(temp)]++;
//                temp = "";
//            }
//        }
//    }
//
//    vector<pair<int, int>> v(m.begin(), m.end());
//    sort(v.begin(), v.end(), cmp);
//
//    for (const auto& e : v) {
//        answer.push_back(e.first);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    solution("{{2},{2,1},{2,1,3},{2,1,3,4}}");
//
//    return 0;
//}