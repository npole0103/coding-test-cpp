//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <sstream>
//using namespace std;
//
//map<string, string> m; //id - nickname
//vector<pair<string, string>> result;
//
//void loadRecord(const string& rec, string& state, string& id, string& nickname) {
//    istringstream iss(rec);
//    iss >> state >> id >> nickname;
//}
//
//void saveNickname(const string& id, const string& nickname) {
//    m[id] = nickname;
//}
//
//void handleState(const string& state, const string& id, const string& nickname) {
//    if (state == "Enter") {
//        saveNickname(id, nickname);
//        result.push_back({ state, id });
//    }
//    else if (state == "Leave") {
//        result.push_back({ state, id });
//    }
//    else if (state == "Change") {
//        saveNickname(id, nickname);
//    }
//}
//
//string createResult(const string& state, const string& id) {
//    if (state == "Enter") {
//        return m[id] + "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.";
//    }
//    else {
//        return m[id] + "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
//    }
//}
//
//vector<string> solution(vector<string> record) {
//    vector<string> answer;
//
//    for (const auto& rec : record) {
//        string state, id, nickname;
//        loadRecord(rec, state, id, nickname);
//        handleState(state, id, nickname);
//    }
//
//    for (const auto& e : result) {
//        answer.push_back(createResult(e.first, e.second));
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}