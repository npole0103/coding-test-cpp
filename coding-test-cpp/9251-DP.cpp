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
///*
//https://ongveloper.tistory.com/36
//https://yabmoons.tistory.com/113 //����
//*/
//
//int dp[1001][1001];
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//    string s1, s2;
//    cin >> s1 >> s2;
//
//    for (int i = 1; i <= s1.size(); i++) {
//        for (int j = 1; j <= s2.size(); j++) {
//            if (s1[i - 1] == s2[j - 1]) {
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//            }
//            else {
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//    }
//
//    cout << dp[s1.size()][s2.size()] << endl;
//
//    return 0;
//}