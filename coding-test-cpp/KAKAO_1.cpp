//#include <string>
//#include <vector>
//#include <iostream>
//#include <map>
//
//using namespace std;
//
//map<string, int> m; //type - day
//
//bool isExpired(string today, string past, string type) {
//    int diffYear = stoi(today.substr(0, 4)) - stoi(past.substr(0, 4));
//    int diffMon = stoi(today.substr(5, 2)) - stoi(past.substr(5, 2));
//    int diffDay = stoi(today.substr(8, 2)) - stoi(past.substr(8, 2));
//
//    int diffTotal = diffYear * 12 * 28 + diffMon * 28 + diffDay;
//
//    if (diffTotal >= m[type]) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//
//vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
//    vector<int> answer;
//
//    for (const auto& e : terms) {
//        m.insert({ e.substr(0, 1) , stoi(e.substr(2, 3)) * 28 });
//    }
//
//    for (int i = 0; i < privacies.size(); i++) {
//        if (isExpired(today, privacies[i].substr(0, 10), privacies[i].substr(11, 1))) {
//            answer.push_back(i + 1);
//        }
//    }
//
//    return answer;
//}