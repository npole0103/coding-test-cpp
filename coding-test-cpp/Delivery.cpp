//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
//vector<pair<int, int>> a[51];
//int d[51];
//int n;
//
//void dijkstra(int start) {
//    d[start] = 0; //자기 자신
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//    pq.push({ 0, start });
//
//    //가까운 순서대로 처리
//	while (!pq.empty()) {
//		// 큐의 가장 위는 가장 적은 비용을 가지는 노드의 정보
//		//first: 거리, second: 노드
//		pair<int, int> cur = pq.top();
//		pq.pop();
//
//		//최단 거리가 아닌 경우 스킵
//		if (d[cur.second] < cur.first) {
//			continue;
//		}
//
//		for (int i = 0; i < a[cur.second].size(); i++) {
//			int nextNode = a[cur.second][i].second;
//			int nextDistance = cur.first + a[cur.second][i].first;
//
//			if (nextDistance < d[nextNode]) { //nextDistance가 비용이 더 적다면?
//				d[nextNode] = nextDistance; //갱신
//				pq.push({ nextDistance, nextNode }); //pq에 push
//			}
//		}
//	}
//}
//
//int solution(int N, vector<vector<int>> road, int K) {
//    int answer = 0;
//    int n = N;
//
//    for (int i = 1; i <= 50; i++) {
//		d[i] = 1e9;
//	}
//
//    for (const auto& e : road) {
//        a[e[0]].push_back({ e[2], e[1] });
//        a[e[1]].push_back({ e[2], e[0] });
//    }
//
//    dijkstra(1);
//
//    for (int i = 1; i <= N; i++) {
//        answer += (d[i] <= K ? 1 : 0);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}