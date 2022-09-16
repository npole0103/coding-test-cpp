//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int number = 6;
//int INF = 10000000000;
//
//vector<pair<int, int>> a[7]; //간선 정보
//int d[7]; //최소 비용
//
//void dijkstra(int start) {
//	d[start] = 0; //자기 자신
//	priority_queue<pair<int, int>> pq; //힙 구조
//	pq.push({ start, 0 });
//
//	//가까운 순서대로 처리
//	while (!pq.empty()) {
//		int current = pq.top().first; // 큐의 가장 위는 가장 적은 비용을 가지는 노드의 정보
//
//		//짧은 것이 먼저 오도록 음수화 해준다
//		int distance = -pq.top().second;
//		pq.pop();
//
//		//최단 거리가 아닌 경우 스킵
//		if (d[current] < distance) {
//			continue;
//		}
//
//		for (int i = 0; i < a[current].size(); i++) {
//			int nextNode = a[current][i].first;
//			int nextDistance = distance + a[current][i].second;
//
//			if (nextDistance < d[nextNode]) { //nextDistance가 비용이 더 적다면?
//				d[nextNode] = nextDistance; //갱신
//				pq.push({ nextNode, -nextDistance }); //pq에 push
//			}
//		}
//	}
//}
//
//int main() {
//	for (int i = 1; i <= number; i++) {
//		d[i] = INF;
//	}
//
//	a[1].push_back({ 2, 2 });
//	a[1].push_back({ 3, 5 }); //1번 노드에서 3번 노드로 갈 때 COST 5
//	a[1].push_back({ 4, 1 });
//
//	a[2].push_back({ 1, 2 });
//	a[2].push_back({ 3, 3 });
//	a[2].push_back({ 4, 2 });
//
//	a[3].push_back({ 1, 5 });
//	a[3].push_back({ 2, 3 });
//	a[3].push_back({ 4, 3 });
//	a[3].push_back({ 5, 1 });
//	a[3].push_back({ 6, 5 });
//
//	a[4].push_back({ 1, 1 });
//	a[4].push_back({ 2, 2 });
//	a[4].push_back({ 3, 3 });
//	a[4].push_back({ 5, 1 });
//
//	a[5].push_back({ 3, 1 });
//	a[5].push_back({ 4, 1 });
//	a[5].push_back({ 6, 2 });
//
//	a[6].push_back({ 3, 5 });
//	a[6].push_back({ 5, 2 });
//
//	dijkstra(1);
//
//	//결과 출력
//	for (int i = 1; i <= number; i++) {
//		cout << d[i] << " ";
//	}
//	cout << endl;
//}