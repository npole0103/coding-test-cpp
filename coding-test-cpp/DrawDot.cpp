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
//long long solution(int k, int d) {
//    long long answer = 0;
//    long long dPow = pow(d, 2);
//
//    for (int i = 0; i * k <= d; i++) {
//        long long maxYPow = (long long)dPow - (long long)pow((i * k), 2);
//        answer += (long long)sqrt(maxYPow) / k + 1;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    
//    x^2 + y^2 <= d^2 충족하면 됨.
//
//    y^2 <= d^2 - x^2 으로 y^2 최댓값을 구해서 y^2 값을 k로 나눠 카운팅 해주면 됨
//
//    //0 1 2 3 4 5
//
//    // 5 - 0
//    // 4 - 0 1 2 3
//    // 3 - 0 1 2 3 4
//    // 2 - 0 1 2 3 4
//    // 1 - 0 1 2 3 4
//    // 0 - 0 1 2 3 4 5
//
//    */
//
//    return 0;
//}