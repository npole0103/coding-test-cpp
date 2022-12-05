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
//class cmp {
//public:
//    bool operator()(pair<int, int> a, pair<int, int> b) {
//        if (a.second - a.first == b.second - b.first) {
//            return a.first < b.first;
//        }
//
//        return b.second - b.first < a.second - a.first;
//    }
//};
//
//int solution(vector<vector<int>> jobs) {
//    int answer = 0;
//    int nSize = jobs.size();
//    vector<int> v;
//
//    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//    
//    for (const auto& e : jobs) {
//        pq.push({ e[0], e[1] });
//    }
//
//    int nx = pq.top().first;
//    while (!pq.empty()) {
//        pair<int, int> cur = pq.top();
//        pq.pop();
//
//        nx += cur.second;
//        v.push_back(nx);
//        nx -= cur.first;
//    }
//
//    for (const auto& e : v) {
//        answer += e;
//    }
//
//    return answer / nSize;
//}
//
//int main() {
//
//    // 0 + 3 - 0
//    // 3 + 6 - 2
//    // 9 + 9 - 1
//
//    return 0;
//}