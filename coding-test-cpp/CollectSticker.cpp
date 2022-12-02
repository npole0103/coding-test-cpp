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
//int solution(vector<int> sticker)
//{
//    if (sticker.size() == 1) {
//        return sticker[0];
//    }
//
//    int answer = 0;
//    int dp1[100001]; //첫번째부터 시작
//    int dp2[100001]; //두번째부터 시작
//
//    dp1[0] = sticker[0];
//    dp1[1] = sticker[0];
//
//    dp2[0] = 0;
//    dp2[1] = sticker[1];
//
//    for (int i = 2; i < sticker.size(); i++) {
//        dp1[i] = max(dp1[i - 2] + sticker[i], dp1[i - 1]);
//        dp2[i] = max(dp2[i - 2] + sticker[i], dp2[i - 1]);
//    }
//
//    answer = max(dp1[sticker.size() - 2], dp2[sticker.size() - 1]);
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}