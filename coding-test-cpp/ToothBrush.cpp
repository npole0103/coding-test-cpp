//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <unordered_map>
//using namespace std;
//
//class member {
//private:
//    string name;
//    int money;
//    member* parent;
//public:
//    member() {
//        this->name = "";
//        this->money = 0;
//        this->parent = NULL;
//    }
//    member(string name, member* parent) {
//        this->name = name;
//        this->money = 0;
//        this->parent = parent;
//    }
//
//    string getName() {
//        return this->name;
//    }
//
//    int getMoney() {
//        return this->money;
//    }
//
//    void paybackMoney(int money) {
//        if (parent == NULL) {
//            if (money < 10) {
//                this->money += money;
//                return;
//            }
//            else {
//                this->money += money - (int)money / 10;
//                return;
//            }
//        }
//        if (money < 10) {
//            this->money += money;
//            return;
//        }
//        this->money += money - (int)money / 10;
//        parent->paybackMoney(money / 10);
//    }
//};
//
//vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
//    vector<int> answer;
//
//    unordered_map<string, member> um;
//
//    //unordered_map: string-member
//    for (int i = 0; i < enroll.size(); i++) {
//        if (referral[i] == "-") {
//            um.insert({ enroll[i], member(enroll[i], NULL) });
//        }
//        else {
//            um.insert({ enroll[i], member(enroll[i], &um[referral[i]]) });
//        }
//    }
//
//    //paybackMoney
//    for (int i = 0; i < seller.size(); i++) {
//        um[seller[i]].paybackMoney(amount[i] * 100);
//    }
//
//    for (auto& e : enroll) {
//        answer.push_back(um[e].getMoney());
//    }
//
//    return answer;
//}