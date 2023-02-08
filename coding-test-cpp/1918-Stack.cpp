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
//    1. �ǿ����ڴ� ������ ���
//    2. �������� ���
//        2-1 top���� �켱������ ũ�� push
//        2-2 top���� �켱������ �۰ų� ������ pop �� 2 ���� �ݺ�
//    3. '('�� push
//    4. ')'�� ��Ÿ���� '(' ���� ������ pop �� ���
//    5. �ǿ����ڰ�
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