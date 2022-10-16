//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
////분리한 u가 '올바른 괄호 문자열'인지 판단해주는 함수
//bool isRightBracket(string s) {
//    int cnt = 0;
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == '(') {
//            cnt++;
//        }
//        else {
//            cnt--;
//        }
//        // ')'가 더 많이 나온 것이라면 올바른 괄호가 아님
//        if (cnt < 0) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//string solution(string p) {
//    string answer = "";
//    int cnt = 0;
//    string u, v;
//
//    //step1
//    if (p == "") {
//        return "";
//    }
//
//    //step2
//    for (int i = 0; i < p.size(); i++) {
//        if (p[i] == '(') {
//            cnt++;
//        }
//        else {
//            cnt--;
//        }
//        //괄호의 수가 맞는 '균형잡힌 괄호 문자열'이라면
//        if (cnt == 0) {
//            u = p.substr(0, i + 1);
//            v = p.substr(i + 1);
//            break;
//        }
//    }
//    
//    //step 3
//    if (isRightBracket(u)) {
//        return u + solution(v);
//    }
//    //step 4
//    else {
//        string temp = '(' + solution(v) + ')';
//        for (int i = 1; i < u.size() - 1; i++) {
//            temp += u[i] == '(' ? ')' : '(';
//        }
//        return temp;
//    }
//}
//
//int main() {
//
//    return 0;
//}