//#include <iostream> //Union Find(a.k.a Disjoint-set)
//#include <algorithm>
//using namespace std;
//
////부모 노드를 얻을 떄까지 재귀적으로 반복
//int getParent(int parent[], int x) {
//	if (parent[x] == x) {
//		return x;
//	}
//	return parent[x] = getParent(parent, parent[x]);
//}
//
////각 부모 노드를 합쳐줌
//void unionParent(int parent[], int a, int b) {
//	a = getParent(parent, a);
//	b = getParent(parent, b);
//
//	//값이 더 작은 쪽이 부모가 됨
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
//	//특정 노드를 선택했을 때 같은 그래프에 속해있는지 확인
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
//	cout << "1과 5는 연결되어있는가? " << findParent(parent, 1, 5) << endl;
//	unionParent(parent, 1, 5);
//	cout << "1과 5는 연결되어있는가? " << findParent(parent, 1, 5) << endl;
//
//	return 0;
//}