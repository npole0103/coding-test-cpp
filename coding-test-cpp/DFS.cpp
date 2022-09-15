//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//using namespace std;
//
//int number = 7;
//int visited[7];
//vector<int> v[8];
//
//void dfsRecursion(int x) {
//	if (visited[x]) { // 재귀 탈출 조건
//		return;
//	}
//	//방문 표시
//	visited[x] = true;
//	cout << x << " ";
//	for (int i = 0; i < v[x].size(); i++) {
//		int y = v[x][i];
//		dfsRecursion(y);
//	}
//}
//
//void dfsStack(int start) {
//	stack<int> s;
//
//	int current = start;
//
//	//스택에 넣고 방문 표시 및 출력
//	s.push(current);
//	visited[current] = true;
//	cout << current << " ";
//
//	while (!s.empty()) {
//
//		current = s.top();
//		s.pop();
//
//		for (int i = 0; i < v[current].size(); i++) {
//			int next = v[current][i];
//			if (!visited[next]) { //방문한 적이 없다면
//				cout << next << " ";
//				s.push(current); //기존꺼 pop 했기 때문에 다시 넣어줌
//				s.push(next);
//				visited[next] = true;
//				break; //너비가 아니라 깊이 우선이기 때문에
//			}
//		}
//	}
//	
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
//	dfsStack(1);
//	//dfsRecursion(1);
//
//	return 0;
//}