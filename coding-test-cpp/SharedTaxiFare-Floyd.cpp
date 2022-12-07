//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//
//#define INF 987654321
//
//using namespace std;
//
//int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
//    int answer = INF;
//
//    //d 배열 INF 초기화
//    vector<vector<int>> d(n + 1, vector<int>(n + 1, INF));
//
//    //자기 자신 0으로 초기화
//    for (int i = 1; i <= n; i++) {
//        d[i][i] = 0;
//    }
//
//    //Graph 정보 저장
//    for (const auto& e : fares) {
//        d[e[0]][e[1]] = e[2];
//        d[e[1]][e[0]] = e[2];
//    }
//
//    //k 방문 시 최단 거리로 갱신
//    for (int k = 1; k <= n; k++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                if (d[i][k] == INF || d[k][j] == INF) {
//                    continue;
//                }
//                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//            }
//        }
//    }
//    
//    //경우의 수 탐색
//    for (int k = 1; k <= n; k++) {
//        if (d[s][k] == INF || d[k][a] == INF || d[k][b] == INF) {
//            continue;
//        }
//        answer = min(answer, d[s][k] + d[k][a] + d[k][b]);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}