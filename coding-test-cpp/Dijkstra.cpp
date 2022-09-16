//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int number = 6;
//int INF = 10000000000;
//
//vector<pair<int, int>> a[7]; //���� ����
//int d[7]; //�ּ� ���
//
//void dijkstra(int start) {
//	d[start] = 0; //�ڱ� �ڽ�
//	priority_queue<pair<int, int>> pq; //�� ����
//	pq.push({ start, 0 });
//
//	//����� ������� ó��
//	while (!pq.empty()) {
//		int current = pq.top().first; // ť�� ���� ���� ���� ���� ����� ������ ����� ����
//
//		//ª�� ���� ���� ������ ����ȭ ���ش�
//		int distance = -pq.top().second;
//		pq.pop();
//
//		//�ִ� �Ÿ��� �ƴ� ��� ��ŵ
//		if (d[current] < distance) {
//			continue;
//		}
//
//		for (int i = 0; i < a[current].size(); i++) {
//			int nextNode = a[current][i].first;
//			int nextDistance = distance + a[current][i].second;
//
//			if (nextDistance < d[nextNode]) { //nextDistance�� ����� �� ���ٸ�?
//				d[nextNode] = nextDistance; //����
//				pq.push({ nextNode, -nextDistance }); //pq�� push
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
//	a[1].push_back({ 3, 5 }); //1�� ��忡�� 3�� ���� �� �� COST 5
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
//	//��� ���
//	for (int i = 1; i <= number; i++) {
//		cout << d[i] << " ";
//	}
//	cout << endl;
//}