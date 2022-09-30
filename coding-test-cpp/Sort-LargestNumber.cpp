//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
////합친 문자 비교해서 큰 순으로 정렬
//bool cmp(string a, string b) {
//    return a + b > b + a;
//}
//
//string solution(vector<int> numbers) {
//    string answer = "";
//    vector<string> vs;
//
//    for (const auto& e : numbers) {
//        vs.push_back(to_string(e));
//    }
//
//    sort(vs.begin(), vs.end(), cmp);
//
//    for (const auto& e : vs) {
//        answer += e;
//    }
//
//    if (answer[0] == 0) {
//        return "0";
//    }
//
//    return answer;
//}
//
//int main() {
//    vector<string> s({ "30", "3" });
//
//    sort(s.begin(), s.end());
//
//    for (const auto& e : s) {
//        cout << e << " ";
//    }
//
//    cout << endl;
//
//    return 0;
//}