//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
////bool solution(vector<string> phone_book) {
////    bool answer = true;
////
////    set<string> s(phone_book.begin(), phone_book.end());
////
////    for (auto it = s.begin(); it != prev(s.end()); it++) {
////        //set은 정렬되기 때문에 순차적으로 인접한 것만 체크하면 됨
////        string nextStr = *(next(it));
////
////        if (nextStr.find(*it) != string::npos) {
////            return false;
////        }
////    }
////
////    return answer;
////}
//
//bool solution(vector<string> phone_book) {
//    bool answer = true;
//
//    sort(phone_book.begin(), phone_book.end());
//
//    for (int i = 0; i < phone_book.size() - 1; i++) {
//        if (phone_book[i + 1].find(phone_book[i]) == 0) {
//            return false;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//    
//    set<int> s({ 1, 2, 3 });
//
//    cout << *(prev(s.end())) << endl;
//
//    return 0;
//}