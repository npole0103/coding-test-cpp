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
//    //���� ���� �θ� ��
//    nodeA < nodeB ? parent[nodeB] = nodeA : parent[nodeA] = nodeB;
//}
//
//int solution(int n, vector<vector<int>> wires) {
//    int answer = 1e9;
//    
//    for (int i = 0; i < wires.size(); i++) {
//        //parent ���� ��� ������ �ʱ�ȭ(�ƹ� �͵� ���� �ȵ� ����)
//        for (int j = 1; j <= n; j++) {
//            parent[j] = j;
//        }
//
//        //���� ����ž �����ϰ� ������ ���� union
//        for (int j = 0; j < wires.size(); j++) {
//            if (i == j) {
//                continue;
//            }
//            unionParent(wires[j][0], wires[j][1]);
//        }
//
//        //1�� ���� ����� ��� ī��Ʈ
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