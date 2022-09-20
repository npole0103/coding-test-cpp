//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//string step1(string s) {
//    transform(s.begin(), s.end(), s.begin(), ::tolower);
//    return s;
//}
//
//string step2(string s) {
//    string answer = "";
//    for (int i = 0; i < s.size(); i++) {
//        if ((97 <= s[i] && s[i] <= 122) || (48 <= s[i] && s[i] <= 57) || s[i] == '-' || s[i] == '_' || s[i] == '.') {
//            answer += s[i];
//        }
//    }
//    return answer;
//}
//
//string step3(string s) {
//    vector<char> v;
//    string result = "";
//
//    for (int i = 0; i < s.size(); i++) {
//        if (!v.empty() && v.back() == '.' && s[i] == '.') {
//            continue;
//        }
//        v.push_back(s[i]);
//    }
//
//    for (auto& s : v) {
//        result += s;
//    }
//    return result;
//}
//
//string step4(string s) {
//    if (s[0] == '.') {
//        s.erase(0, 1);
//    }
//    else if (s[s.size() - 1] == '.') {
//        s.erase(s.size() - 1, s.size());
//    }
//    return s;
//}
//
//string step5(string s) {
//    if (s == "") {
//        s = "a";
//    }
//    return s;
//}
//
//string step6(string s) {
//    string result = s.substr(0, 15);
//
//    return step4(result);
//}
//
//string step7(string s) {
//    char lastChar = s[s.size() - 1];
//
//    for (int i = s.size(); i < 3; i++) {
//        s.push_back(lastChar);
//    }
//    return s;
//}
//
//string solution(string new_id) {
//    string answer = "";
//
//    //아이디 3자~15자
//    //소문자, 숫자, -, _, .
//    //.는 처음과 끝에 사용할 수 없고 연속으로 사용 x
//
//    //1 tolower
//    answer = step1(new_id);
//
//    //2 소문자, 숫자, -, _, . 외 전부 제거
//    answer = step2(answer);
//
//    //3 마침표 연속 제거
//    answer = step3(answer);
//
//    //4 첫자리 . 제거
//    answer = step4(answer);
//
//    //5 빈 문자열 a대입
//    answer = step5(answer);
//
//    //6 15자 이하
//    answer = step6(answer);
//
//    //7 3자리 이하
//    answer = step7(answer);
//
//    return answer;
//}