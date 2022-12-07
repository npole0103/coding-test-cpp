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
//    //d �迭 INF �ʱ�ȭ
//    vector<vector<int>> d(n + 1, vector<int>(n + 1, INF));
//
//    //�ڱ� �ڽ� 0���� �ʱ�ȭ
//    for (int i = 1; i <= n; i++) {
//        d[i][i] = 0;
//    }
//
//    //Graph ���� ����
//    for (const auto& e : fares) {
//        d[e[0]][e[1]] = e[2];
//        d[e[1]][e[0]] = e[2];
//    }
//
//    //k �湮 �� �ִ� �Ÿ��� ����
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
//    //����� �� Ž��
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