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
//vector<int> table;
//int cur = 0; //idx
//stack<pair<int, int>> delStack; //idx - value
//
//void initTable(int n, int k) {
//    table.resize(n, 0);
//
//    for (int i = 0; i < n; i++) {
//        table[i] = i;
//    }
//
//    cur = k;
//}
//
//string getAns(int n) {
//    string ans = "";
//    set<int> s(table.begin(), table.end());
//
//    for (int i = 0; i < n; i++) {
//        if (s.find(i) != s.end()) {
//            ans += "O";
//        }
//        else {
//            ans += "X";
//        }
//    }
//
//    return ans;
//}
//
//void upCmd(int n) {
//    cur -= n;
//}
//
//void downCmd(int n) {
//    cur += n;
//}
//
//void delCmd() {
//    int n = table.size();
//    delStack.push({ cur, table[cur] });
//    table.erase(table.begin() + cur);
//
//    //예외 처리 마지막 행에서 삭제됐다면
//    if (n - 1 == cur) {
//        cur -= 1;
//    }
//    cout << "after, cur idx-value  : " << cur << " " << table[cur] << endl;
//}
//
//void recoverCmd() {
//    int curValue = table[cur];
//    cout << "before, cur value : " << curValue << endl;
//
//    pair<int, int> delInfo = delStack.top();
//    delStack.pop();
//    table.insert(table.begin() + delInfo.first, delInfo.second);
//
//    cur = find(table.begin(), table.end(), curValue) - table.begin();
//
//    cout << "after, cur idx-value  : " << cur << " " << table[cur] << endl;
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
//    * 명령어 기반 표의 행 선택 삭제 복구
//    * 
//    * 
//    */
//
//    return 0;
//}