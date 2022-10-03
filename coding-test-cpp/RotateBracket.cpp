//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <stack>
//#include <queue>
//using namespace std;
//
//bool isRight(string s) {
//    stack<char> openBracket;
//
//    for (const auto& e : s) {
//        if (e == '(' || e == '{' || e == '[') {
//            openBracket.push(e);
//        }
//        else {
//            if (e == ')' && openBracket.top() == '(') {
//                openBracket.pop();
//            }
//            else if (e == '}' && openBracket.top() == '{') {
//                openBracket.pop();
//            }
//            else if (e == ']' && openBracket.top() == '[') {
//                openBracket.pop();
//            }
//            else {
//                return false;
//            }
//        }
//    }
//
//    if (openBracket.empty()) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//
//int solution(string s) {
//    int answer = 0;
//    int sLen = s.size();
//
//    for (int i = 0; i < sLen; i++) {
//        if (isRight(s)) {
//            answer++;
//        }
//        s.push_back(s[0]);
//        s.erase(0, 1);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}