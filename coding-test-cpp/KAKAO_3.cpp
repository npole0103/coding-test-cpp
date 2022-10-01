//#include <string>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//int discountConst[4] = { 10, 20, 30, 40 };
//int dc[8];
//int es = 0; //emonticons size
//int userNum = 0;
//int emoticonMoney = 0;
//vector<pair<int, int>> resultVector;
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    if (a.first == b.first) {
//        return a.second > b.second;
//    }
//    return a.first > b.first;
//}
//
//void dfs(int cnt, int idx, vector<int> emoticons, vector<vector<int>> users) {
//
//    if (cnt == es) {
//        //유저 순회
//        for (int i = 0; i < users.size(); i++) {
//            int result = 0;
//            int userMaxDc = users[i][0];
//            int userMoney = users[i][1];
//
//            for (int j = 0; j < es; j++) {
//                if (dc[j] >= userMaxDc) {
//                    result += emoticons[j] * (100 - dc[j]) * 0.01;
//                }
//            }
//            //넘었다면
//            if (result >= userMoney) {
//                userNum++;
//            }
//            else {
//                emoticonMoney += result;
//            }
//        }
//
//        resultVector.push_back({ userNum, emoticonMoney });
//        userNum = 0; emoticonMoney = 0;
//
//        return;
//    }
//
//    for (int i = 0; i < 4; i++) {
//        dc[cnt] = discountConst[i];
//        dfs(cnt + 1, i, emoticons, users);
//    }
//}
//
//vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {
//    vector<int> answer;
//    es = emoticons.size();
//
//    dfs(0, 0, emoticons, users);
//
//    sort(resultVector.begin(), resultVector.end(), cmp);
//
//    answer.push_back(resultVector.begin()->first);
//    answer.push_back(resultVector.begin()->second);
//
//    return answer;
//}
//
//int main() {
//
//    cout << 100 - 25 << endl;
//    cout << (100 - 25) * 0.01 << endl;
//    cout << 9000 * (100 - 25)*0.01 << endl;
//    cout << 9000 * 0.75 << endl;
//
//    return 0;
//}