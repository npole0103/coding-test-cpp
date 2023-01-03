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
//    stack<int> s;
//    long long answer = 0;
//
//    int n;
//    cin >> n;
//
//    vector<int> building(n);
//    for (int i = 0; i < n; i++) {
//        cin >> building[i];
//    }
//
//    for (int i = n - 1; i >= 0; i--) {
//        stack<int> tempStack;
//
//        while (!s.empty() && building[i] > s.top()) {
//            tempStack.push(s.top());
//            answer++;
//            s.pop();
//        }
//
//        while (!tempStack.empty()) {
//            s.push(tempStack.top());
//            tempStack.pop();
//        }
//
//        s.push(building[i]);
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}