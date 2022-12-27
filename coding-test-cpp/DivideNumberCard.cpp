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
//        a %= b;
//        b = a;
//        a = temp;
//    }
//
//    return a;
//}
//
//int getGcdInVector(vector<int> arr) {
//    int num = arr[0];
//    for (int i = 1; i < arr.size(); i++) {
//        num = gcd(num, arr[i]);
//    }
//    return num;
//}
//
//int solution(vector<int> arrayA, vector<int> arrayB) {
//    int answer = 0;
//
//    int aGcd = getGcdInVector(arrayA);
//    int bGcd = getGcdInVector(arrayB);
//
//    for (const auto& e : arrayA) {
//        if (e % bGcd == 0) {
//            bGcd = 0;
//            break;
//        }
//    }
//
//    for (const auto& e : arrayB) {
//        if (e % aGcd == 0) {
//            aGcd = 0;
//            break;
//        }
//    }
//
//    return max(aGcd, bGcd);
//}
//
//int main() {
//
//    cout << gcd(7, 2) << endl;
//    cout << 5 % 1 << endl;
//
//    return 0;
//}