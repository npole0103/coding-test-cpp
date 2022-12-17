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
//multiset<int> ums;
//
//void exeCommand(char c, int n) {
//    if (c == 'I') {
//        ums.insert(n);
//        return;
//    }
//    else if (c == 'D' && !ums.empty()) {
//        if (n == -1) {
//            ums.erase(ums.begin());
//            return;
//        }
//        else {
//            ums.erase(prev(ums.end()));
//            return;
//        }
//    }
//}
//
//void execOp(string op) {
//    istringstream iss(op);
//    char c;
//    int n;
//    iss >> c >> n;
//
//    exeCommand(c, n);
//}
//
//vector<int> solution(vector<string> operations) {
//    for (const auto& op : operations) {
//        execOp(op);
//    }
//
//    if (ums.empty()) {
//        return { 0, 0 };
//    }
//    else {
//        return { *(prev(ums.end())), *(ums.begin()) };
//    }
//}
//
//int main() {
//
//    unordered_multiset<int> m;
//    m.insert(-1);
//    m.insert(221);
//    m.insert(21);
//
//    cout << *(ums.begin()) << " " << *(prev(ums.end())) << endl;
//
//    return 0;
//}