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
////https://bitwise.tistory.com/215
////Âü°í
//
//int main() {
//
//    vector<int> dp(1001, 1);
//
//    int ans = 0;
//    int n;
//    cin >> n;
//
//    vector<int> arr(n, 0);
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < i; j++) {
//            if (arr[j] < arr[i]) {
//                dp[i] = max(dp[i], dp[j] + 1);
//            }
//        }
//        ans = max(ans, dp[i]);
//    }
//
//    cout << ans << endl;
//
//    return 0;
//}