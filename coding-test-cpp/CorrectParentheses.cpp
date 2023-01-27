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
//bool solution(string s) {
//    stack<char> sc;
//
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == '(') {
//            sc.push('(');
//        }
//        else {
//            if (sc.empty()) {
//                return false;
//            }
//            else {
//                sc.pop();
//            }
//        }
//    }
//
//    return sc.empty() ? true : false;
//}
//
//int main() {
//
//    return 0;
//}