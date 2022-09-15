//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int number = 7;
//int visited[7];
//vector<int> v[8]; //각 노드의 인덱스가 1부터 처리할 수 있도록 size + 1
//
//void bfs(int start) {
//	queue<int> q;
//
//	//큐에 넣고 방문처리
//	q.push(start);
//	visited[start] = true;
//
//	//너비 우선 탐색
//	while (!q.empty()) {
//		
//		//큐 현재 노드 꺼냄
//		int current = q.front();
//		q.pop();
//		cout << current << " ";
//
//		//인접한 노드 방문
//		for (int i = 0; i < v[current].size(); i++) {
//			int next = v[current][i];
//			if (!visited[next]) { //방문하지 않았다면
//				q.push(next);
//				visited[next] = true;
//			}
//		}
//	}
//}
//
//int main() {
//
//	v[1].push_back(2);
//	v[2].push_back(1);
//
//	v[1].push_back(3);
//	v[3].push_back(1);
//
//	v[2].push_back(3);
//	v[3].push_back(2);
//
//	v[2].push_back(4);
//	v[4].push_back(2);
//
//	v[2].push_back(5);
//	v[5].push_back(2);
//
//	v[3].push_back(6);
//	v[6].push_back(3);
//
//	v[3].push_back(7);
//	v[7].push_back(3);
//
//	v[4].push_back(5);
//	v[5].push_back(4);
//
//	v[6].push_back(7);
//	v[7].push_back(6);
//
//	bfs(1);
//
//	return 0;
//}