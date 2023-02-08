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
//int priority(char op) {
//    switch (op)
//    {
//    case '+':
//    case '-':
//        return 1;
//    case '*':
//    case '/':
//        return 2;
//    default:
//        break;
//    }
//
//    return 0;
//}
//
//int main() {
//
//    /*
//    1. 피연산자는 무조건 출력
//    2. 연산자일 경우
//        2-1 top보다 우선순위가 크면 push
//        2-2 top보다 우선순위가 작거나 같으면 pop 후 2 과정 반복
//    3. '('는 push
//    4. ')'가 나타나면 '(' 만날 때까지 pop 후 출력
//    5. 피연산자가
//    */
//
//    string answer;
//    string fullExp;
//
//    stack<char> op;
//
//    cin >> fullExp;
//
//    for (int i = 0; i < fullExp.size(); i++) {
//        if ('A' <= fullExp[i] && fullExp[i] <= 'Z') {
//            answer += fullExp[i];
//        }
//        else if ('(' == fullExp[i]) {
//            op.push(fullExp[i]);
//        }
//        else if (')' == fullExp[i]) {
//            while (op.top() != '(') {
//                answer += op.top();
//                op.pop();
//            }
//            op.pop();
//        }
//        else if (op.empty() || priority(op.top()) < priority(fullExp[i])) {
//            op.push(fullExp[i]);
//        }
//        else {
//            while (!op.empty() && priority(op.top()) >= priority(fullExp[i])) {
//                answer += op.top();
//                op.pop();
//            }
//            op.push(fullExp[i]);
//        }
//    }
//
//    while (!op.empty()) {
//        answer += op.top();
//        op.pop();
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}