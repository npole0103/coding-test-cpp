//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//class Member {
//private:
//    string lang = "";
//    string job = "";
//    string career = "";
//    string food = "";
//    int score = 0;
//public:
//    Member(string lang, string job, string career, string food, int score) {
//        this->lang = lang;
//        this->job = job;
//        this->career = career;
//        this->food = food;
//        this->score = score;
//    }
//
//    int getScore() {
//        return this->score;
//    }
//
//    bool isRight(string lang, string job, string career, string food, int score) {
//        if ((lang == this->lang || lang == "-")
//            && (job == this->job || job == "-")
//            && (career == this->career || career == "-")
//            && (food == this->food || food == "-")
//            && (score <= this->score)) {
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//};
//
//void splitMemberInfo(string info, string& lang, string& job, string& career, string& food, int& score) {
//    vector<string> v;
//    string temp = "";
//    for (const auto& e : info) {
//        if (e == ' ') {
//            v.push_back(temp);
//            temp = "";
//            continue;
//        }
//        temp += e;
//    }
//
//    lang = v[0]; job = v[1]; career = v[2]; food = v[3]; score = stoi(temp);
//}
//
//string eraseAnd(string query) {
//    string temp = query;
//    for (int i = 0; i < 3; i++) {
//        temp.erase(temp.find(" and"), 4);
//    }
//    return temp;
//}
//
//bool cmp(Member a, Member b) {
//    return a.getScore() > b.getScore();
//}
//
//vector<int> solution(vector<string> info, vector<string> query) {
//    vector<int> answer;
//    vector<Member> members;
//
//    for (const auto& e : info) {
//        string lang;
//        string job;
//        string career;
//        string food;
//        int score;
//        splitMemberInfo(e, lang, job, career, food, score);
//        members.push_back(Member(lang, job, career, food, score));
//    }
//
//    //효율성 정렬
//    sort(members.begin(), members.end(), cmp);
//
//    for (const auto& e : query) {
//        string lang;
//        string job;
//        string career;
//        string food;
//        int score;
//        splitMemberInfo(eraseAnd(e), lang, job, career, food, score);
//
//        int cnt = 0;
//        for (auto& ee : members) {
//            if (ee.getScore() < score) {
//                break;
//            }
//            if (ee.isRight(lang, job, career, food, score)) {
//                cnt++;
//            }
//        }
//        answer.push_back(cnt);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}