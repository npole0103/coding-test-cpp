//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
////m[idx]에서 idx는 음식의 수
////key-value: 음식이름, 횟수
//map<string, int> m[11];
//
////가장 많이 중복된 값 저장
//int maxCnt[11];
//
//void comb(string str, int cnt, string result) {
//    if (cnt == str.size()) {
//        cout << result << " ";
//        int strSize = result.size();
//        m[strSize][result]++;
//        maxCnt[strSize] = max(maxCnt[strSize], m[strSize][result]);
//        return;
//    }
//
//    //조합
//    comb(str, cnt + 1, result + str[cnt]);
//    comb(str, cnt + 1, result);
//}
//
//vector<string> solution(vector<string> orders, vector<int> course) {
//    vector<string> answer;
//
//    for (auto& e : orders) {
//        //조합 만들 때 오름차순으로
//        sort(e.begin(), e.end());
//        comb(e, 0, "");
//        cout << endl << endl;
//    }
//
//    for (int i = 0; i < 11; i++) {
//        for (const auto& e : m[i]) {
//            cout << e.first << " " << e.second << endl;
//        }
//        cout << endl;
//    }
//
//    //num가지 코스
//    for (const auto& num : course) {
//        //m[num]에는 num에 해당하는 key-value: 음식이름-횟수가 들어있음
//        for (const auto e : m[num]) {
//            //조합이 최대로 많이나온 것이며 2이상인 것
//            if (e.second == maxCnt[num] && e.second >= 2) {
//                answer.push_back(e.first);
//            }
//        }
//    }
//
//    sort(answer.begin(), answer.end());
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}