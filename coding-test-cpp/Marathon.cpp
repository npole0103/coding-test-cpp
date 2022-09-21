//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion) {
//    string answer = "";
//
//    multiset<string> s(participant.begin(), participant.end());
//
//    for (int i = 0; i < completion.size(); i++) {
//        if (s.find(completion[i]) != s.end()) {
//            multiset<string>::iterator it = s.find(completion[i]);
//            s.erase(it);
//        }
//    }
//
//    answer = *(s.begin());
//
//    return answer;
//}
//
//int main() {
//
//	multiset<string> s;
//
//	s.insert("aaa");
//	s.insert("aaa");
//	s.insert("bbb");
//	s.insert("ccc");
//
//	s.erase("aaa");
//
//	for (const auto& e : s) {
//		cout << e << endl;
//	}
//
//	return 0;
//}