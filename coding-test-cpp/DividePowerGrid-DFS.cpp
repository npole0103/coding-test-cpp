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
//    //1부터 n까지 모든 노드 순회
//    for (int i = 1; i <= nSize; i++) {
//        //인접 노드 중 아직 방문하지 않았다면
//        if (graph[node][i] == true && graph[i][node] == true) {
//            //방문 표시
//            graph[node][i] = false;
//            graph[i][node] = false;
//
//            //인접 노드 dfs 순회
//            dfs(i, cnt);
//
//            //dfs 계산이 끝난 후에 원본 복구
//            graph[node][i] = true;
//            graph[i][node] = true;
//        }
//    }
//}
//
////간선 차이 계산 함수
//void calDiff(int nodeA, int nodeB) {
//    int cntA = 0, cntB = 0;
//    dfs(nodeA, cntA);
//    dfs(nodeB, cntB);
//    minDiff = min(abs(cntB - cntA), minDiff);
//}
//
//int solution(int n, vector<vector<int>> wires) {
//
//    //n 기반 초기화
//    nSize = n;
//    minDiff = 1e9;
//    vector<vector<bool>> v(n + 1, vector<bool>(n + 1, false));
//    graph = v;
//
//    for (int i = 0; i < wires.size(); i++) {
//        //그래프 연결 표시
//        graph[wires[i][0]][wires[i][1]] = true;
//        graph[wires[i][1]][wires[i][0]] = true;
//    }
//
//    //그래프 간선 순차적으로 하나씩 끊으면서 연결된 노드 차이 구하기
//    for (int i = 0; i < wires.size(); i++) {
//
//        //간선 제거
//        graph[wires[i][0]][wires[i][1]] = false;
//        graph[wires[i][1]][wires[i][0]] = false;
//
//        //각 노드 기반 차이 구하는 메소드
//        calDiff(wires[i][0], wires[i][1]);
//
//        //간선 다시 연결
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