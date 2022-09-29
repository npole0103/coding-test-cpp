//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//int nSize;
//int minDiff;
//vector<vector<bool>> graph;
//
//void dfs(int node, int& cnt) {
//    cnt++;
//    //1���� n���� ��� ��� ��ȸ
//    for (int i = 1; i <= nSize; i++) {
//        //���� ��� �� ���� �湮���� �ʾҴٸ�
//        if (graph[node][i] == true && graph[i][node] == true) {
//            //�湮 ǥ��
//            graph[node][i] = false;
//            graph[i][node] = false;
//
//            //���� ��� dfs ��ȸ
//            dfs(i, cnt);
//
//            //dfs ����� ���� �Ŀ� ���� ����
//            graph[node][i] = true;
//            graph[i][node] = true;
//        }
//    }
//}
//
////���� ���� ��� �Լ�
//void calDiff(int nodeA, int nodeB) {
//    int cntA = 0, cntB = 0;
//    dfs(nodeA, cntA);
//    dfs(nodeB, cntB);
//    minDiff = min(abs(cntB - cntA), minDiff);
//}
//
//int solution(int n, vector<vector<int>> wires) {
//
//    //n ��� �ʱ�ȭ
//    nSize = n;
//    minDiff = 1e9;
//    vector<vector<bool>> v(n + 1, vector<bool>(n + 1, false));
//    graph = v;
//
//    for (int i = 0; i < wires.size(); i++) {
//        //�׷��� ���� ǥ��
//        graph[wires[i][0]][wires[i][1]] = true;
//        graph[wires[i][1]][wires[i][0]] = true;
//    }
//
//    //�׷��� ���� ���������� �ϳ��� �����鼭 ����� ��� ���� ���ϱ�
//    for (int i = 0; i < wires.size(); i++) {
//
//        //���� ����
//        graph[wires[i][0]][wires[i][1]] = false;
//        graph[wires[i][1]][wires[i][0]] = false;
//
//        //�� ��� ��� ���� ���ϴ� �޼ҵ�
//        calDiff(wires[i][0], wires[i][1]);
//
//        //���� �ٽ� ����
//        graph[wires[i][0]][wires[i][1]] = true;
//        graph[wires[i][1]][wires[i][0]] = true;
//    }
//
//    return minDiff;
//}
//
//int main() {
//
//    return 0;
//}