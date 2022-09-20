//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//string solution(string s) {
//    string answer = s;
//
//    int index = 1;
//
//    for (int i = 0; i < s.size(); i++) {
//        if (answer[i] == 32) {
//            index = 1;
//            continue;
//        }
//
//        if (index % 2 != 0 && 97 <= answer[i] && answer[i] <= 122) {
//            answer[i] -= 32;
//        }
//        else if (index % 2 == 0 && 65 <= answer[i] && answer[i] <= 90) {
//            answer[i] += 32;
//        }
//        index++;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    cout << solution("try hello world") << endl;
//
//	return 0;
//}