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
//vector<int> v;
//int k, n;
//
//bool cut(long long x) {
//    long long cur = 0;
//    for (int i = 0; i < k; i++) {
//        cur += v[i] / x;
//    }
//    //cur이 더 크다는 건 x가 작다는 의미
//    return cur >= n;
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> k >> n;
//    for (int i = 0; i < k; i++) {
//        int temp;
//        cin >> temp;
//        v.push_back(temp);
//    }
//    long long start = 1;
//    long long end = *max_element(v.begin(), v.end());
//    while (start < end) {
//        long long mid = (start + end + 1) / 2;
//        if (cut(mid)) {
//            start = mid;
//        }
//        else {
//            end = mid - 1;
//        }
//    }
//    cout << start << endl;
//
//    return 0;
//}