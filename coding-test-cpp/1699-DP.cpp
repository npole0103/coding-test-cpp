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
//int dp[100001];
//
//int main() {
//    int n;
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        dp[i] = i; //1肺 i甫 备己窍绰 规过
//        for (int j = 1; j * j <= i; j++) {
//            dp[i] = min(dp[i], dp[i - j * j] + 1);
//        }
//    }
//
//    cout << dp[n] << endl;
//
//    return 0;
//}