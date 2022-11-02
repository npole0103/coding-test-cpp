//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
//vector<int> solution(vector<int> prices) {
//    vector<int> answer;
//
//    for (int i = 0; i < prices.size(); i++) {
//        int cnt = 0;
//        for (int j = i; j < prices.size(); j++) {
//            if (i == j) {
//                continue;
//            }
//
//            cnt++;
//
//            if (prices[i] > prices[j]) {
//                break;
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