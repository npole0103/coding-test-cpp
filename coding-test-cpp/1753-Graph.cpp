//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int INF = 1e9;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	int node, edge, start;
//	cin >> node >> edge;
//	cin >> start;
//
//	//최소 비용 배열 d (1 ~ n + 1)
//	vector<int> d; //최소 비용
//
//	for (int i = 0; i < node + 1; i++) {
//		d.push_back(INF);
//	}
//
//	//간선 배열 a (1 ~ edge + 1)
//	vector<vector<pair<int, int>>> a(20001);
//
//	for (int i = 0; i < edge; i++) {
//		int u, v, w;
//		cin >> u >> v >> w;
//		a[u].push_back({ w, v });
//	}
//
//	//자기 자신은 0
//	d[start] = 0;
//	//min heap 구조: 가장 작은 값이 최상위 { node, distance }
//	priority_queue<pair<int, int>> pq;
//	pq.push({ 0, start });
//
//	//가까운 순서대로 처리
//	while (!pq.empty()) {
//		// 큐의 가장 위는 가장 적은 비용을 가지는 노드의 정보
//		int current = pq.top().second;
//
//		//가장 짧은 누적 길이
//		int distance = -pq.top().first;
//		pq.pop();
//
//		//최단 거리가 아닌 경우 스킵
//		if (d[current] < distance) {
//			continue;
//		}
//
//		for (int i = 0; i < a[current].size(); i++) {
//			int nextNode = a[current][i].second;
//			int nextDistance = distance + a[current][i].first;
//
//			if (nextDistance < d[nextNode]) { //nextDistance가 비용이 더 적다면?
//				d[nextNode] = nextDistance; //갱신
//				pq.push({ -nextDistance, nextNode }); //pq에 push
//			}
//		}
//	}
//
//	//결과 출력
//	for (int i = 1; i <= node; i++) {
//		if (d[i] != 1e9) {
//			cout << d[i] << "\n";
//		}
//		else {
//			cout << "INF" << "\n";
//		}
//	}
//
//	return 0;
//}