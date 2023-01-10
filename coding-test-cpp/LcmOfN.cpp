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
//int gcd(int a, int b) {
//    while (b) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//int solution(vector<int> arr) {
//    int answer = arr[0];
//
//    for (int i = 1; i < arr.size(); i++) {
//        answer = answer * arr[i] / gcd(answer, arr[i]);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    cout << 25 * 10 / gcd(25, 10) << endl;
//
//    return 0;
//}