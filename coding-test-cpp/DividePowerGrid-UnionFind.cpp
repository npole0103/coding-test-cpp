//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//int parent[101];
//
//int getParent(int node) {
//    if (parent[node] == node) {
//        return node;
//    }
//    return parent[node] = getParent(parent[node]);
//}
//
//void unionParent(int nodeA, int nodeB) {
//    nodeA = getParent(nodeA);
//    nodeB = getParent(nodeB);
//    //작은 것이 부모가 됨
//    nodeA < nodeB ? parent[nodeB] = nodeA : parent[nodeA] = nodeB;
//}
//
//int solution(int n, vector<vector<int>> wires) {
//    int answer = 1e9;
//    
//    for (int i = 0; i < wires.size(); i++) {
//        //parent 값을 노드 값으로 초기화(아무 것도 연결 안된 상태)
//        for (int j = 1; j <= n; j++) {
//            parent[j] = j;
//        }
//
//        //끊을 송전탑 제외하고 나머지 전부 union
//        for (int j = 0; j < wires.size(); j++) {
//            if (i == j) {
//                continue;
//            }
//            unionParent(wires[j][0], wires[j][1]);
//        }
//
//        //1번 노드와 연결된 노드 카운트
//        int cnt = 0;
//        for (int j = 1; j <= n; j++) {
//            if (parent[j] == 1) {
//                cnt++;
//            }
//        }
//        answer = min(answer, abs( (n-cnt) - cnt ));
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}