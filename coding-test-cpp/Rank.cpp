//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//using namespace std;
//
//int solution(int n, vector<vector<int>> results) {
//    int answer = 0;
//
//    vector<vector<bool>> graph(n + 1, vector<bool>(n + 1, 0));
//
//    //승리한 경우만 체크
//    for (const auto& e : results) {
//        graph[e[0]][e[1]] = true;
//    }
//
//    //플로이드-와샬
//    for (int k = 1; k <= n; k++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                //(i가 k에게 승리 + k가 j에 승리)한 경우라면 i가 j에게 이긴 것으로 간주
//                if (graph[i][k] && graph[k][j]) {
//                    graph[i][j] = true;
//                }
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cout << graph[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 1; i <= n; i++) {
//        int winCnt = 0;
//
//        for (int j = 1; j <= n; j++) {
//            if (i == j) {
//                continue;
//            }
//
//            //graph[i][j]는 i가 이긴 사람, i에게 진 사람 카운트
//            //graph[j][i]는 j가 이긴 사람, i에게 이긴 사람 카운트
//            if (graph[i][j] || graph[j][i]) {
//                winCnt++;
//            }
//
//            //이긴 사람 + 진 사람 = n - 1 이라면 순위를 정할 수 있음
//            if (winCnt == n - 1) {
//                answer++;
//            }
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//    /*
//    * 1 : 2
//    * 2 : 5
//    * 3 : 2
//    * 4 : 2, 3
//    * 5 :
//    * 
//    */
//
//    return 0;
//}