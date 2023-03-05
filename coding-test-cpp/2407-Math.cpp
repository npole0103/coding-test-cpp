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
//int n, m;
//string fact[101][101];
//
//string addBigNum(string a, string b) {
//    int sum = 0;
//    string ans;
//
//    while (!a.empty() || !b.empty() || sum) {
//        if (!a.empty()) {
//            sum += a.back() - 48;
//            a.pop_back();
//        }
//        
//        if (!b.empty()) {
//            sum += b.back() - 48;
//            b.pop_back();
//        }
//
//        ans.push_back((sum % 10) + 48);
//        sum /= 10;
//    }
//
//    reverse(ans.begin(), ans.end());
//
//    return ans;
//}
//
//string combi(int n, int r) {
//    if (n == r || r == 0) {
//        return "1";
//    }
//
//    //memoization
//    if (fact[n][r] != "") {
//        return fact[n][r];
//    }
//
//    //pascal triangle
//    fact[n][r] = addBigNum(combi(n - 1, r - 1), combi(n - 1, r));
//    
//    return fact[n][r];
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> n >> m;
//
//    cout << combi(n, m) << endl;
//
//    return 0;
//}