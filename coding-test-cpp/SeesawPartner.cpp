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
//long long solution(vector<int> weights) {
//    long long answer = 0;
//
//    int divider[3] = { 1, 3, 2 };
//    int ratio[3] = { 2, 4, 3 };
//
//    set<int> s;
//    map<int, int> m;
//
//    for (const auto& e : weights) {
//        s.insert(e);
//        m[e]++;
//    }
//
//    for (const auto& e : s) {
//        long long wSize = m[e];
//        answer += (wSize * (wSize - 1)) / 2;
//
//        for (int i = 0; i < 3; i++) {
//            if (e % divider[i]) {
//                continue;
//            }
//
//            int mulWeight = (e / divider[i]) * ratio[i];
//            long long mWsize = m[mulWeight];
//            answer += wSize * mWsize * 1LL;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}