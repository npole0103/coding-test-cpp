//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
//
////dp[i][k] : 1번째부터 i번째 물건까지 고려했을 때, 담을 수 있는 가장 최대 가치 저장
//int n, k;
//int w[101];
//int v[101];
//int dp[101][100001];
//
//int main() {
//    cin >> n >> k;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> w[i] >> v[i];
//    }
//
//    //dp
//    for (int limit = 1; limit <= k; limit++) { //갯수
//        for (int row = 1; row <= n; row++) { //물건의 가치
//            //담을 수 없는 경우 : 무게 기준보다 많이 나간다면
//            if (w[row] > limit) {
//                dp[row][limit] = dp[row - 1][limit];
//            }
//            //담을 수 있는 경우
//            else {
//                dp[row][limit] = max(dp[row - 1][limit - w[row]] + v[row], dp[row - 1][limit]);
//            }
//        }
//    }
//
//    cout << dp[n][k] << endl;
//
//    return 0;
//}