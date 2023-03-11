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
//bool isGroupWord(string str) {
//    set<char> s;
//
//    if (str.size() == 1) {
//        return true;
//    }
//
//    char prev = str[0];
//    s.insert(prev);
//
//    for (int i = 1; i < str.size(); i++) {
//        if (prev != str[i] && s.count(str[i]) != 0) {
//            return false;
//        }
//
//        prev = str[i];
//        s.insert(str[i]);
//    }
//
//    return true;
//}
//
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n, answer = 0;
//    cin >> n;
//
//    vector<string> s(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> s[i];
//        answer += isGroupWord(s[i]) ? 1 : 0;
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}