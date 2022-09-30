//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <queue>
//#include <set>
//#include <map>
//using namespace std;
//
//vector<int> parent;
//
////�θ� ��带 ���� ������ ��������� �ݺ�
//int getParent(int x) {
//	if (parent[x] == x) {
//		return x;
//	}
//	return parent[x] = getParent(parent[x]);
//}
//
////�� �θ� ��带 ������
//void unionParent(int a, int b) {
//	a = getParent(a);
//	b = getParent(b);
//
//	//���� �� ���� ���� �θ� ��
//	if (a < b) {
//		parent[b] = a;
//	}
//	else if (a == b) {
//		return;
//	}
//	else {
//		parent[a] = b;
//	}
//}
//
//int solution(int n, vector<vector<int>> computers) {
//
//	set<int> pSet;
//
//	//initialize unionFind
//	for (int i = 0; i < n; i++) {
//		parent.push_back(i);
//	}
//
//	//merge node
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (computers[i][j] == true) {
//				unionParent(i, j);
//			}
//		}
//	}
//
//	//tc 9�� �ذ� <- �� ������Ʈ �ȵǴ��� �ǹ�
//	for (int i = 0; i < n; i++) {
//		parent[i] = getParent(i);
//	}
//
//	for (int i = 0; i < n; i++) {
//		pSet.insert(parent[i]);
//	}
//
//    return pSet.size();
//}