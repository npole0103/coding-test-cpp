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
//int solution(int n) {
//    int answer = 0;
//
//    vector<int> v(100001, 0);
//
//    v[0] = 0;
//    v[1] = 1;
//
//    for (int i = 2; i <= n; i++) {
//        v[i] = (v[i - 1] + v[i - 2]) % 1234567;
//    }
//
//    return v[n];
//}
//
//int main() {
//
//    return 0;
//}