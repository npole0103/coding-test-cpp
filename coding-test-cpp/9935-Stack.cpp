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
//int main() {
//
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    stack<char> s;
//    string answer;
//
//    string str, bombStr;
//    cin >> str >> bombStr;
//
//    int bombSize = bombStr.size();
//
//    for (int i = str.size() - 1; i >= 0; i--) {
//        s.push(str[i]);
//
//        if (bombStr[0] == str[i]) {
//
//            string sub;
//
//            for (int j = 0; j < bombSize; j++) {
//                if (!s.empty() && s.top() == bombStr[j]) {
//                    sub += s.top();
//                    s.pop();
//                }
//                else {
//                    for (int k = sub.size() - 1; k >= 0; k--) {
//                        s.push(sub[k]);
//                    }
//                    break;
//                }
//            }
//        }
//    }
//
//    if (s.empty()) {
//        cout << "FRULA" << endl;
//    }
//    else {
//
//        while (!s.empty()) {
//            answer += s.top();
//            s.pop();
//        }
//
//        cout << answer << endl;
//    }
//
//    return 0;
//}