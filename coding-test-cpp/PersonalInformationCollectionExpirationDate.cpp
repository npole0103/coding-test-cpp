//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//#include <unordered_map>
//#include <sstream>
//using namespace std;
//
//unordered_map<char, int> db;
//
//int dateToDay(string date) {
//    istringstream iss(date);
//    string buf;
//    vector<int> v;
//
//    while (getline(iss, buf, '.')) {
//        v.push_back(stoi(buf));
//    }
//
//    return (v[0] * 12 * 28) + (v[1] * 28) + v[2];
//}
//
//pair<string, char> getDateFromPrivacies(string privacy) {
//    string date; char type;
//    istringstream iss(privacy);
//    iss >> date >> type;
//
//    return { date, type };
//}
//
//int getDiffDay(string dateA, string dateB) {
//    return abs(dateToDay(dateA) - dateToDay(dateB));
//}
//
//void saveAllTermsInMap(const vector<string>& terms) {
//    char type; int MM;
//    for (const auto& term : terms) {
//        istringstream iss(term);
//        iss >> type >> MM;
//        db[type] = MM;
//    }
//}
//
//vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
//    vector<int> answer;
//    int todayDay = dateToDay(today);
//
//    saveAllTermsInMap(terms);
//
//    pair<string, char> pInfo;
//
//    for (int i = 0; i < privacies.size(); i++) {
//        pInfo = getDateFromPrivacies(privacies[i]);
//        if (todayDay - dateToDay(pInfo.first) >= (db[pInfo.second]) * 28) {
//            answer.push_back(i + 1);
//        }
//    }
//
//    sort(answer.begin(), answer.end());
//
//    return answer;
//}
//
//int main() {
//    /*
//    
//    고객 개인 정보 1~n
//    유효기간 전까지 보관 가능하며 지나면 반드시 파기
//    오늘 날짜로 파기해야할 개인정보 번호
//    
//    */
//    return 0;
//}