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
//bool isStepping(vector<int>& stones, int k) {
//    for (int i = 0; i < stones.size(); i++) {
//        if (stones[i] == 0 && i + k - 1 < stones.size()) {
//            int cnt = 0;
//            for (int j = i; j < i + k; j++) {
//                if (stones[j] == 0) {
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
//int stepping(vector<int>& stones, int n) {
//    for (int i = 0; i < stones.size(); i++) {
//        if (stones[i] == 0) {
//            continue;
//        }
//        stones[i] -= n;
//    }
//
//    return n;
//}
//
//int solution(vector<int> stones, int k) {
//    int answer = 0;
//
//    while (isStepping(stones, k)) {
//        vector<int> v(stones.begin(), stones.end());
//        sort(v.begin(), v.end());
//        auto it = upper_bound(v.begin(), v.end(), 0);
//        answer += stepping(stones, *it);
//
//        for (const auto& e : stones) {
//            cout << e << " ";
//        }
//        cout << endl;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    vector<int> v1 = { 2,4,5,3,2,1,4,2,5,1};
//    cout << solution(v1, 3) << endl;
//
//    return 0;
//}