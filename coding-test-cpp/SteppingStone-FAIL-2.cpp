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
//bool isStepping(vector<int>& stones, int k, int n) {
//    for (int i = 0; i < stones.size(); i++) {
//        if (stones[i] <= n && i + k - 1 < stones.size()) {
//            int cnt = 0;
//            for (int j = i; j < i + k; j++) {
//                if (stones[j] <= n) {
//                    cnt++;
//                }
//            }
//            if (cnt == k) {
//                return false;
//            }
//        }
//    }
//
//    return true;
//}
//
//int solution(vector<int> stones, int k) {
//    vector<int> v(stones.begin(), stones.end());
//    sort(v.begin(), v.end());
//
//    int n = 0;
//    while (isStepping(stones, k, n)) {
//        n = *(upper_bound(v.begin(), v.end(), n));
//    }
//
//    return n;
//}
//
//int main() {
//
//    vector<int> v1 = { 2,4,5,3,2,1,4,2,5,1};
//    cout << solution(v1, 3) << endl;
//
//    return 0;
//}