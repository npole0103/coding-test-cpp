//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
////map<string, set<string>> s;
////
////bool cmp(string a, string b) {
////    return stoi(a) < stoi(b);
////}
////
////void divideId(string str, string& onlyStr, string& onlyNum) {
////    for (int i = 0; i < str.size(); i++) {
////        if ('a' <= str[i] && str[i] <= 'z') {
////            onlyStr += str[i];
////        }
////        else {
////            onlyNum += str[i];
////        }
////    }
////}
////
////string solution(vector<string> registered_list, string new_id) {
////    string answer = "";
////
////    for (const auto& e : registered_list) {
////        string onlyStr = "";
////        string onlyNum = "";
////        divideId(e, onlyStr, onlyNum);
////
////        s[onlyStr].insert(onlyNum);
////    }
////
////    string newIdStr = "";
////    string newIdNum = "";
////    divideId(new_id, newIdStr, newIdNum);
////
////    //키가 존재하느냐
////    if (s.count(newIdStr) == 1) {
////        //만약 없는 N이 없는 newId라면
////        if (newIdNum == "") {
////            if (s[newIdStr].find("") != s[newIdStr].end()) {
////                string tempNum = "1";
////                for (const auto& ee : s[newIdStr]) {
////                    if (ee != tempNum) {
////                        return newIdStr + tempNum;
////                    }
////                    tempNum = to_string(stoi(tempNum) + 1);
////                }
////                return newIdStr + to_string(stoi(*(prev(s[newIdStr].end()))) + 1);
////            }
////            else {
////                return new_id;
////            }
////        }
////        //N이 존재하는 newId
////        else {
////            //N 겹치는지 검사
////            for (const auto& e : s[newIdStr]) {
////                cout << "@@@@@@@@" << endl;
////                //만약 e와 newIdNum이 겹친다면
////                if (e == newIdNum) {
////                    string tempNum = newIdNum;
////
////                    for (const auto& ee : s[newIdStr]) {
////                        cout << ee << endl;
////                    }
////
////                    for (const auto& ee : s[newIdStr]) {
////                        cout << ee << " " << tempNum << endl;
////                        if (ee != tempNum) {
////                            return newIdStr + tempNum;
////                        }
////                        tempNum = to_string(stoi(tempNum) + 1);
////                    }
////                    return newIdStr + to_string(stoi(*(prev(s[newIdStr].end()))) + 1);
////                }
////            }
////
////            return new_id;
////        }
////    }
////    //존재 안하느냐
////    else {
////        return new_id;
////    }
////
////    return answer;
////}
//
//bool cmp(const string& a, const string& b) {
//    if (a.length() == b.length())
//        return a < b;
//    else
//        return a.length() < b.length();
//}
//
//string solution(vector<string> registered_list, string new_id) {
//    string answer = new_id;
//    string S = "";
//    int N = 0;
//
//    for (int i = 0; i < answer.length(); i++) {
//        if (answer[i] >= '0' && answer[i] <= '9') {
//            N *= 10;
//            N += answer[i] - '0';
//        }
//        else
//            S += answer[i];
//    }
//
//    sort(registered_list.begin(), registered_list.end(), cmp);
//
//    cout << "vector: ";
//    for (const auto& e : registered_list) {
//        cout << e << " ";
//    }
//    cout << endl;
//    cout << "answer: " << answer << endl;
//
//    for (int i = 0; i < registered_list.size(); i++) {
//        if (registered_list[i].compare(answer) == 0) {
//            N++;
//            answer = S + to_string(N);
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    vector<string> tc1({ "card", "ace13", "ace16", "banker", "ace17", "ace14" });
//    cout << solution(tc1, "ace15") << endl;;
//    vector<string> tc2({ "cow", "cow1", "cow2", "cow3", "cow4", "cow9", "cow8", "cow7", "cow6", "cow5" });
//    cout << solution(tc2, "cow") << endl;;
//    vector<string> tc3({ "bird99", "bird98", "bird101", "gotoxy" });
//    cout << solution(tc3, "bird98") << endl;;
//    vector<string> tc4({ "apple1", "orange", "banana3" });
//    cout << solution(tc4, "apple") << endl;;
//
//    return 0;
//}
//
////
////테스트 1
////입력값 〉
////["card", "ace13", "ace16", "banker", "ace17", "ace14"], "ace15"
////기댓값 〉
////"ace15"
////실행 결과 〉
////테스트를 통과하였습니다.
////출력 〉
////? ? ?
////테스트 2
////입력값 〉
////["cow", "cow1", "cow2", "cow3", "cow4", "cow9", "cow8", "cow7", "cow6", "cow5"], "cow"
////기댓값 〉
////"cow10"
////실행 결과 〉
////실행한 결괏값 "cow1"이 기댓값 "cow10"과 다릅니다.
////테스트 3
////입력값 〉
////["bird99", "bird98", "bird101", "gotoxy"], "bird98"
////기댓값 〉
////"bird100"
////실행 결과 〉
////실행한 결괏값 "bird98"이 기댓값 "bird100"과 다릅니다.
////출력 〉
////? ? ?
////테스트 4
////입력값 〉
////["apple1", "orange", "banana3"], "apple"
////기댓값 〉
////"apple"
////실행 결과 〉
////테스트를 통과하였습니다.
