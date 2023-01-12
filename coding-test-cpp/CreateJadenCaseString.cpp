//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//#include <sstream>
//using namespace std;
//
//string solution(string s) {
//    string buf = "";
//
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == ' ') {
//            buf.clear();
//            continue;
//        }
//        else {
//            buf.push_back(s[i]);
//
//            if (buf.size() == 1 && 97 <= s[i] && s[i] <= 122) {
//                s[i] -= 32;
//            }
//            else {
//                if (buf.size() != 1 && 65 <= s[i] && s[i] <= 90) {
//                    s[i] += 32;
//                }
//            }
//        }
//    }
//
//    return s;
//}
//
//int main() {
//
//    return 0;
//}