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
//vector<pair<int, int>> a[20001];
//vector<int> d(20001, 1e9);
//
//void dijkstra(int start) {
//    d[start] = 0;
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//    pq.push({ 0, start });
//
//    while (!pq.empty()) {
//        pair<int, int> cur = pq.top();
//        pq.pop();
//
//        if (d[cur.second] < cur.first) {
//            continue;
//        }
//
//        for (int i = 0; i < a[cur.second].size(); i++) {
//            int nextNode = a[cur.second][i].second;
//            int nextDist = cur.first + a[cur.second][i].first;
//
//            if (nextDist < d[nextNode]) {
//                d[nextNode] = nextDist;
//                pq.push({ nextDist, nextNode });
//            }
//        }
//    }
//}
//
//int solution(int n, vector<vector<int>> edge) {
//    int answer = 0;
//
//    for (const auto& e : edge) {
//        a[e[0]].push_back({ 1, e[1] });
//        a[e[1]].push_back({ 1, e[0] });
//    }
//
//    dijkstra(1);
//
//    multiset<int> s(next(d.begin()), d.begin() + n + 1);
//    return s.count(*prev(s.end()));
//}
//
//int main() {
//
//
//    return 0;
//}