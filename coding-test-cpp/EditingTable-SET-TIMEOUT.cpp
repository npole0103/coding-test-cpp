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
//#include <unordered_set>
//using namespace std;
//
//set<int> table;
//auto cur = table.begin(); //idx
//stack<int> delStack; //value
//
//void initTable(int n, int k) {
//
//    for (int i = 0; i < n; i++) {
//        table.insert(i);
//    }
//
//    cur = table.find(k);
//}
//
//string getAns(int n) {
//    string ans(n, 'X');
//
//    for (const auto& e : table) {
//        ans[e] = 'O';
//    }
//
//    return ans;
//}
//
//void upCmd(int n) {
//    while (n-- > 0) {
//        cur = prev(cur);
//    }
//}
//
//void downCmd(int n) {
//    while (n-- > 0) {
//        cur = next(cur);
//    }
//}
//
//void delCmd() {
//    delStack.push(*cur);
//
//    //erase �� ���� iterator ��ȯ��
//    cur = table.erase(cur);
//
//    //���� ó�� ������ �࿡�� �����ƴٸ�
//    if (table.end() == cur) {
//        cur = prev(cur);
//    }
//}
//
//void recoverCmd() {
//
//    table.insert(delStack.top());
//    delStack.pop();
//}
//
//void exeCmd(string cmd) {
//    istringstream iss(cmd);
//    char op;
//    int n;
//    iss >> op >> n;
//
//    switch (op)
//    {
//    case 'U':
//        upCmd(n);
//        break;
//    case 'D':
//        downCmd(n);
//        break;
//    case 'C':
//        delCmd();
//        break;
//    case 'Z':
//        recoverCmd();
//        break;
//    default:
//        break;
//    }
//}
//
//string solution(int n, int k, vector<string> cmd) {
//
//    initTable(n, k);
//
//    for (const auto& c : cmd) {
//        exeCmd(c);
//
//        cout << c << " : ";
//        for (const auto& e : table) {
//            cout << e << " ";
//        }
//        cout << endl;
//    }
//
//    return getAns(n);
//}
//
//int main() {
//
//    /*
//    * ��ɾ� ��� ǥ�� �� ���� ���� ����
//    */
//
//    set<int> ss;
//
//    ss.insert(1);
//    ss.insert(2);
//    ss.insert(4);
//    ss.insert(5);
//
//    auto it2 = ss.find(2);
//    auto it4 = ss.find(4);
//    
//    cout << *it2 << " " << *it4 << endl;
//    ss.insert(3);
//    cout << *it2 << " " << *it4 << endl;
//
//    return 0;
//}