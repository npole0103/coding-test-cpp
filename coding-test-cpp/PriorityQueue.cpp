//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <sstream>
//using namespace std;
//
//vector<int> solution(vector<string> operations) {
//
//    multiset<int> ms;
//
//    for (const auto& ops : operations) {
//        istringstream iss(ops);
//        char op;
//        int num;
//        iss >> op >> num;
//
//        if (op == 'I') {
//            ms.insert(num);
//        }
//        else if(op == 'D' && !ms.empty()) {
//            if (num == 1) {
//                ms.erase(*prev(ms.end()));
//            }
//            else {
//                ms.erase(*ms.begin());
//            }
//        }
//        cout << op << " " << num << " : ";
//        for (const auto& e : ms) {
//            cout << e << " ";
//        }
//        cout << endl;
//    }
//
//    if (ms.empty()) {
//        return { 0, 0 };
//    }
//
//    return { *prev(ms.end()), *ms.begin() };
//}
//
//int main() {
//
//    return 0;
//}