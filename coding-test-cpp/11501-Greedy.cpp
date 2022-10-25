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
//int main() {
//
//    int tc;
//    cin >> tc;
//
//    while (tc--) {
//        long long answer = 0;
//        int n;
//        cin >> n;
//        vector<int> v(n, 0);
//
//        for (auto& e : v) {
//            cin >> e;
//        }
//
//        vector<int> myStock;
//        int maxStock = v[n-1];
//        for (int i = n - 2; i >= 0; i--) {
//            if (maxStock >= v[i]) {
//                answer += maxStock - v[i];
//            }
//            else {
//                maxStock = v[i];
//            }
//        }
//
//        cout << answer << endl;
//    }
//
//    return 0;
//}