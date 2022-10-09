//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//map<string, vector<pair<int, int>>> m;
//
//bool cmp(pair<string, vector<pair<int, int>>> a, pair<string, vector<pair<int, int>>> b) {
//    int aSum = 0, bSum = 0;
//    for (const auto& e : a.second) {
//        aSum += e.first;
//    }
//    for (const auto& e : b.second) {
//        bSum += e.first;
//    }
//    return aSum > bSum;
//}
//
//bool cmp2(pair<int, int> a, pair<int, int> b) {
//    return a.first > b.first;
//}
//
//vector<int> solution(vector<string> genres, vector<int> plays) {
//    vector<int> answer;
//
//    for (int i = 0; i < genres.size(); i++) {
//        m[genres[i]].push_back({ plays[i], i });
//    }
//
//    vector<pair<string, vector<pair<int, int>>>> v(m.begin(), m.end());
//    sort(v.begin(), v.end(), cmp);
//
//    for (auto& e : v) {
//        sort(e.second.begin(), e.second.end(), cmp2);
//
//        if (e.second.size() == 1) {
//            answer.push_back(e.second.begin()->second);
//        }
//        else {
//            answer.push_back(e.second.begin()->second);
//            answer.push_back((e.second.begin() + 1)->second);
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}