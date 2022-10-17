//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int solution(string s) {
//    int answer = 1e9;
//
//    for (int i = 1; i <= (s.size() / 2) + 1; i++) {
//        string temp; //임시 문자열 저장 변수
//
//        //초기 세팅
//        int cnt = 1;
//        string prevStr = s.substr(0, i);
//
//        for (int j = i; j < s.size(); j += i) {
//            //이전 문자열과 같을 경우
//            if (prevStr == s.substr(j, i)) {
//                cnt++;
//            }
//            else {
//                //한번 이상 나온 것이라면
//                if (cnt > 1) {
//                    temp += to_string(cnt);
//                }
//                temp += prevStr;
//
//                //prevStr 업데이트 및 cnt = 1 초기화
//                prevStr = s.substr(j, i);
//                cnt = 1;
//            }
//        }
//        //문자열이 남아있는 경우 생각
//        if (cnt > 1) {
//            temp += to_string(cnt);
//        }
//        temp += prevStr;
//
//        answer = min(answer, (int)temp.size());
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}