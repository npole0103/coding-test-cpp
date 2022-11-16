//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
//set<string> db;
//
//bool isRight(string pre, string cur) {
//    //앞 뒤 단어가 맞는지 검사
//    if (pre[pre.size() - 1] != cur[0]) {
//        return false;
//    }
//
//    //이미 사용한 단어인지 검사
//    if (db.find(cur) != db.end()) {
//        return false;
//    }
//
//    return true;
//}
//
//vector<int> solution(int n, vector<string> words) {
//
//    db.insert(words[0]);
//
//    for (int i = 1; i < words.size(); i++) {
//        if (isRight(words[i - 1], words[i])) {
//            db.insert(words[i - 1]);
//            db.insert(words[i]);
//        }
//        else {
//            int who = (i % n) + 1;
//            int order = (i / n) + (i % n == 0 ? 0 : 1);
//            cout << i << " " << n << endl;
//            cout << (i / n) << " " << ((i + 1) % n == 0 ? 0 : 1) << endl;
//            return { who, order };
//        }
//    }
//
//    return {0, 0};
//}
//
//int main() {
//
//    return 0;
//}