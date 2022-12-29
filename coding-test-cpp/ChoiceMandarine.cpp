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
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    if (a.second == b.second) {
//        return a.first < b.first;
//    }
//    return a.second > b.second;
//}
//
//int solution(int k, vector<int> tangerine) {
//    int answer = 0;
//
//    map<int, int> m;
//
//    for (const auto& e : tangerine) {
//        m[e]++;
//    }
//
//    vector<pair<int, int>> v(m.begin(), m.end());
//    sort(v.begin(), v.end(), cmp);
//
//    for (const auto& e : v) {
//        if (k <= 0) {
//            break;
//        }
//        k -= e.second;
//        answer++;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    1 - 1
//    2 - 2
//    3 - 2
//    4 - 1
//    5 - 2
//    */
//
//    return 0;
//}