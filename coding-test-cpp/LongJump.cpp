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
//long long solution(int n) {
//    long long answer = 0;
//
//    long long dp[2001];
//
//    if (n == 1 || n == 2) {
//        return n;
//    }
//
//    dp[1] = 1; dp[2] = 2;
//
//    for (int i = 3; i <= n; i++) {
//        dp[i] = (dp[i - 2] + dp[i - 1]) % 1234567;
//    }
//
//    return dp[n];
//}
//
//int main() {
//
//    return 0;
//}