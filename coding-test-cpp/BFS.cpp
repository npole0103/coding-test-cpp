//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int number = 7;
//int visited[7];
//vector<int> v[8]; //�� ����� �ε����� 1���� ó���� �� �ֵ��� size + 1
//
//void bfs(int start) {
//	queue<int> q;
//
//	//ť�� �ְ� �湮ó��
//	q.push(start);
//	visited[start] = true;
//
//	//�ʺ� �켱 Ž��
//	while (!q.empty()) {
//		
//		//ť ���� ��� ����
//		int current = q.front();
//		q.pop();
//		cout << current << " ";
//
//		//������ ��� �湮
//		for (int i = 0; i < v[current].size(); i++) {
//			int next = v[current][i];
//			if (!visited[next]) { //�湮���� �ʾҴٸ�
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