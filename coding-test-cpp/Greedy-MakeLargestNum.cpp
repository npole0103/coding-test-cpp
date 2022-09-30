//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//string solution(string number, int k) {
//    string answer = "";
//    int cnt = k;
//    vector<char> v;
//
//    for (int i = 0; i < number.size(); i++) {
//        while (!v.empty() && cnt != 0 && v.back() - 48 < number[i] - 48) {
//            v.pop_back();
//            cnt--;
//        }
//        v.push_back(number[i]);
//    }
//
//    while (cnt-- > 0) {
//        v.pop_back();
//    }
//
//    for (const auto& e : v) {
//        answer += e;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}