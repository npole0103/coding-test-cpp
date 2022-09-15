//#include <iostream> //Union Find(a.k.a Disjoint-set)
//#include <algorithm>
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
//
//int main() {
//	//Ư�� ��带 �������� �� ���� �׷����� �����ִ��� Ȯ��
//	int parent[11];
//	for (int i = 1; i <= 10; i++) {
//		parent[i] = i;
//	}
//
//	unionParent(parent, 1, 2);
//	unionParent(parent, 2, 3);
//	unionParent(parent, 3, 4);
//
//	unionParent(parent, 5, 6);
//	unionParent(parent, 6, 7);
//	unionParent(parent, 7, 8);
//
//	cout << "1�� 5�� ����Ǿ��ִ°�? " << findParent(parent, 1, 5) << endl;
//	unionParent(parent, 1, 5);
//	cout << "1�� 5�� ����Ǿ��ִ°�? " << findParent(parent, 1, 5) << endl;
//
//	return 0;
//}