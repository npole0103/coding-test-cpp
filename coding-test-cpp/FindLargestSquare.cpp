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
//int solution(vector<vector<int>> board) {
//    int answer = board[0][0];
//
//    vector<vector<int>> dp = board;
//
//    for (int i = 1; i < dp.size(); i++) {
//        for (int j = 1; j < dp[0].size(); j++) {
//            if (board[i][j] == 1) {
//                dp[i][j] = min({ dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1] }) + 1;
//                answer = max(answer, dp[i][j]);
//            }
//        }
//    }
//
//    return answer*answer;
//}
//
//int main() {
//
//    return 0;
//}