//#include <iostream> //Kruskal
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////�θ� ��带 ���� ������ ��������� �ݺ�
//int getParent(int parent[], int x) {
//	if (parent[x] == x) {
//		return x;
//	}
//	return parent[x] = getParent(parent, parent[x]);
//}
//
////�� �θ� ��带 ������
//void unionParent(int parent[], int a, int b) {
//	a = getParent(parent, a);
//	b = getParent(parent, b);
//
//	//���� �� ���� ���� �θ� ��
//	if (a < b) {
//		parent[b] = a;
//	}
//	else {
//		parent[a] = b;
//	}
//}
//
//bool findParent(int parent[], int a, int b) {
//	a = getParent(parent, a);
//	b = getParent(parent, b);
//	if (a == b) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//// ���� Ŭ����
//class Edge { //��� ���� ���� ������ �Ÿ�
//public:
//	int node[2];
//	int distance;
//	Edge(int a, int b, int distance) {
//		this->node[0] = a; //��� 1
//		this->node[1] = b; //��� 2
//		this->distance = distance;
//	}
//	bool operator <(Edge& edge) {
//		return this->distance < edge.distance;
//	}
//};
//
//int main() {
//	const int n = 7; //���� ����
//	const int m = 11; //���� ����
//
//	vector<Edge> v;
//	v.push_back(Edge(1, 7, 12));
//	v.push_back(Edge(1, 4, 28));
//	v.push_back(Edge(1, 2, 67));
//	v.push_back(Edge(1, 5, 17));
//
//	v.push_back(Edge(2, 4, 24));
//	v.push_back(Edge(2, 5, 62));
//
//	v.push_back(Edge(3, 5, 20));
//	v.push_back(Edge(3, 6, 37));
//
//	v.push_back(Edge(4, 7, 13));
//
//	v.push_back(Edge(5, 6, 45));
//	v.push_back(Edge(5, 7, 73));
//
//	//������ ����� �������� �������� ����
//	sort(v.begin(), v.end());
//
//	//�� ������ ���Ե� �׷����� ������� ����
//	int set[n+1];
//	for (int i = 1; i <= n; i++) {
//		set[i] = i;
//	}
//
//	//�Ÿ��� ���� 0���� �ʱ�ȭ
//	int sum = 0;
//	for (int i = 0; i < v.size(); i++) {
//		//������ �θ� ����Ű�� �ʴ� ���, �� ����Ŭ�� �߻����� ���� ���� ����
//		if (!findParent(set, v[i].node[0], v[i].node[1])) {
//			sum += v[i].distance;
//			unionParent(set, v[i].node[0], v[i].node[1]);
//		}
//	}
//
//	cout << sum << endl;
//
//	return 0;
//}