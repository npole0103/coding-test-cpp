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
//    1�� ��ǥ : ��Ƽ �÷��� ������ �ִ���
//    2�� ��ǥ : ��Ƽ �Ǹž� �ִ�
//
//    n���� ����ڿ��� m���� �����Ͽ� �Ǹ�
//    �������� 10 20 30 40
//
//    ���� ����
//    1. ����ڴ� �ڽ��� ���ؿ� ���� ���� ���� �̻� �����ϴ� �̸�Ƽ���� ��� ����
//    2. ������ �ʰ��Ѵٸ� ���Ÿ� ��� ����ϰ� �÷��� ���� ����
//
//    */
//    vector<vector<int>> users = { {40, 10000},{25, 10000} };
//    vector<int> emoti = { 7000, 9000 };
//
//    solution(users, emoti);
//
//    return 0;
//}