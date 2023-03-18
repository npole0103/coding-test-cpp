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
////https://codecollector.tistory.com/1058 Âü°í
//
//vector<vector<long long>> mul(vector<vector<long long>>& a, vector<vector<long long>>& b) {
//    vector<vector<long long>> v(2, vector<long long>(2));
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            for (int k = 0; k < 2; k++) {
//                v[i][j] += a[i][k] * b[k][j];
//            }
//            v[i][j] %= 1000000007;
//        }
//    }
//    return v;
//}
//
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    long long n;
//    cin >> n;
//
//    vector<vector<long long>> ans = { {0, 1}, {1, 0} };
//    vector<vector<long long>> a = { {1, 1}, {1, 0} };
//
//    while (n > 0) {
//        if (n % 2 != 0) {
//            ans = mul(a, ans);
//        }
//        a = mul(a, a);
//        n /= 2;
//    }
//
//    cout << ans[0][0] << endl;
//
//    return 0;
//}