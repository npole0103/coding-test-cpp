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
//long long getFact(int n) {
//    long long fact = 1;
//    for (int i = 1; i <= n; i++) {
//        fact *= i;
//    }
//    return fact;
//}
//
//vector<int> solution(int n, long long k) {
//    vector<int> answer;
//    vector<int> v;
//
//    int cnt = 1;
//    long long cur = k;
//
//    for (int i = 1; i <= 20; i++) {
//        v.push_back(i);
//    }
//
//    while (cnt != n) {
//        long long fact = getFact(n - cnt);
//        cnt++;
//
//        int idx = (cur - 1) / fact;
//
//        answer.push_back(v[idx]);
//        v.erase(v.begin() + idx);
//
//        cur %= fact;
//        
//        cur = cur == 0 ? fact : cur;
//    }
//
//    answer.push_back(v[0]);
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}