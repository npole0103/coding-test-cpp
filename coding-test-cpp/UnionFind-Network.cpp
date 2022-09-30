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
////부모 노드를 얻을 떄까지 재귀적으로 반복
//int getParent(int x) {
//	if (parent[x] == x) {
//		return x;
//	}
//	return parent[x] = getParent(parent[x]);
//}
//
////각 부모 노드를 합쳐줌
//void unionParent(int a, int b) {
//	a = getParent(a);
//	b = getParent(b);
//
//	//값이 더 작은 쪽이 부모가 됨
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
//	//tc 9번 해결 <- 왜 업데이트 안되는지 의문
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