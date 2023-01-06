//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//using namespace std;
//
//vector<vector<int>> gUsers;
//vector<int> gEmoti;
//
//vector<int> perm = {10, 20, 30, 40};
//vector<int> temp;
//
//vector<pair<int, int>> answer;
//
//void dfs(int cnt) {
//    if (cnt == gEmoti.size()) {
//
//        int EmotiPlusNum = 0;
//        int totalMoney = 0;
//
//        for (int i = 0; i < gUsers.size(); i++) {
//
//            int money = 0;
//
//            for (int j = 0; j < gEmoti.size(); j++) {
//                if (temp[j] >= gUsers[i][0]) {
//                    money += (gEmoti[j] * (100 - temp[j]) * 0.01);
//                }
//            }
//
//            if (money >= gUsers[i][1]) {
//                EmotiPlusNum++;
//            }
//            else {
//                totalMoney += money;
//            }
//        }
//
//        answer.push_back({ EmotiPlusNum, totalMoney });
//
//        return;
//    }
//
//    for (int i = 0; i < 4; i++) {
//            temp[cnt] = perm[i];
//            dfs(cnt + 1);
//    }
//}
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    if (a.first == b.first) {
//        return a.second > b.second;
//    }
//
//    return a.first > b.first;
//}
//
//vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {
//    gUsers = users;
//    gEmoti = emoticons;
//
//    temp.resize(emoticons.size(), 0);
//
//    dfs(0);
//
//    sort(answer.begin(), answer.end(), cmp);
//    auto it = answer.begin();
//
//    return { (*it).first, (*it).second };
//}
//
//int main() {
//
//    /*
//    1번 목표 : 임티 플러스 가입자 최대한
//    2번 복표 : 임티 판매액 최대
//
//    n명의 사용자에게 m개를 할인하여 판매
//    할인율은 10 20 30 40
//
//    구매 로직
//    1. 사용자는 자신의 기준에 따라 일정 비율 이상 할인하는 이모티콘을 모두 구매
//    2. 가격을 초과한다면 구매를 모두 취소하고 플러스 서비스 가입
//
//    */
//    vector<vector<int>> users = { {40, 10000},{25, 10000} };
//    vector<int> emoti = { 7000, 9000 };
//
//    solution(users, emoti);
//
//    return 0;
//}