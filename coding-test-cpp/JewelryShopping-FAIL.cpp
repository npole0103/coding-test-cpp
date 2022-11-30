//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//using namespace std;
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    if (a.second - a.first == b.second - b.first) {
//        return a.first < b.first;
//    }
//
//    return a.second - a.first < b.second - b.first;
//}
//
//vector<int> solution(vector<string> gems) {
//    vector<pair<int, int>> answer;
//
//    set<string> s(gems.begin(), gems.end());
//    set<string> temp;
//
//    for (int i = 0; i < gems.size(); i++) {
//        for (int j = i; j < gems.size(); j++) {
//            temp.insert(gems[j]);
//            if (s.size() == temp.size()) {
//                answer.push_back({ i + 1, j + 1 });
//                temp.clear();
//                break;
//            }
//        }
//    }
//
//    sort(answer.begin(), answer.end(), cmp);
//
//    return { answer.begin()->first, answer.begin()->second };
//}
//
//int main() {
//
//    return 0;
//}