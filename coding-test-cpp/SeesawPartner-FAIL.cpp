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
//    map<int, int> m;
//    set<int> s;
//
//    for (int i = 0; i < weights.size(); i++) {
//        s.insert(weights[i]);
//        m[weights[i]]++;
//    }
//
//    for (const auto& e : s) {
//        if (m[e] >= 2) {
//            answer += ((m[e] * (m[e] - 1)) / 2);
//        }
//
//        if (m[e * 2] >= 1) {
//            answer += (m[e * 2] * m[e]);
//        }
//
//        if (m[(e * 3) / 2] >= 1) {
//            answer += (m[(e * 3) / 2] * m[e]);
//        }
//
//        if (m[(e * 4) / 3] >= 1) {
//            answer += m[(e * 4) / 3] * m[e];
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//    
//    /*
//    2 3 4
//
//    1 : 1
//    2 : 3
//    2 : 4
//    3 : 4
//    
//    */
//
//    return 0;
//}