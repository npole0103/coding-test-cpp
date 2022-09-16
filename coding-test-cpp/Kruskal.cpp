//#include <iostream> //Kruskal
//#include <algorithm>
//#include <vector>
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
//// 간선 클래스
//class Edge { //노드 사이 연결 정보와 거리
//public:
//	int node[2];
//	int distance;
//	Edge(int a, int b, int distance) {
//		this->node[0] = a; //노드 1
//		this->node[1] = b; //노드 2
//		this->distance = distance;
//	}
//	bool operator <(Edge& edge) {
//		return this->distance < edge.distance;
//	}
//};
//
//int main() {
//	const int n = 7; //정점 갯수
//	const int m = 11; //간선 갯수
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
//	//간선의 비용을 기준으로 오름차순 정렬
//	sort(v.begin(), v.end());
//
//	//각 정점이 포함된 그래프가 어디인지 저장
//	int set[n+1];
//	for (int i = 1; i <= n; i++) {
//		set[i] = i;
//	}
//
//	//거리의 합을 0으로 초기화
//	int sum = 0;
//	for (int i = 0; i < v.size(); i++) {
//		//동일한 부모를 가르키지 않는 경우, 즉 사이클이 발생하지 않을 때만 선택
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