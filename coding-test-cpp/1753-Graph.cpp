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
//	//�ּ� ��� �迭 d (1 ~ n + 1)
//	vector<int> d; //�ּ� ���
//
//	for (int i = 0; i < node + 1; i++) {
//		d.push_back(INF);
//	}
//
//	//���� �迭 a (1 ~ edge + 1)
//	vector<vector<pair<int, int>>> a(20001);
//
//	for (int i = 0; i < edge; i++) {
//		int u, v, w;
//		cin >> u >> v >> w;
//		a[u].push_back({ w, v });
//	}
//
//	//�ڱ� �ڽ��� 0
//	d[start] = 0;
//	//min heap ����: ���� ���� ���� �ֻ��� { node, distance }
//	priority_queue<pair<int, int>> pq;
//	pq.push({ 0, start });
//
//	//����� ������� ó��
//	while (!pq.empty()) {
//		// ť�� ���� ���� ���� ���� ����� ������ ����� ����
//		int current = pq.top().second;
//
//		//���� ª�� ���� ����
//		int distance = -pq.top().first;
//		pq.pop();
//
//		//�ִ� �Ÿ��� �ƴ� ��� ��ŵ
//		if (d[current] < distance) {
//			continue;
//		}
//
//		for (int i = 0; i < a[current].size(); i++) {
//			int nextNode = a[current][i].second;
//			int nextDistance = distance + a[current][i].first;
//
//			if (nextDistance < d[nextNode]) { //nextDistance�� ����� �� ���ٸ�?
//				d[nextNode] = nextDistance; //����
//				pq.push({ -nextDistance, nextNode }); //pq�� push
//			}
//		}
//	}
//
//	//��� ���
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