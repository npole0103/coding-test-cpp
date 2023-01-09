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
//long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
//    long long answer = 0;
//    
//    int curCap;
//    int curBlank;
//    int maxIdx = 0;
//
//    while (true) {
//        curCap = cap;
//        curBlank = 0;
//
//        //while 탈출을 위한 합 계산
//        int dSum = 0, pSum = 0;
//
//        for (int i = n - 1; i >= 0; i--) {
//            dSum += deliveries[i];
//
//            //뒤에서부터 배달하며 최대 idx 저장
//            if (deliveries[i] > 0 && curCap != 0) {
//                maxIdx = max(maxIdx, i + 1);
//
//                if (deliveries[i] >= curCap) {
//                    deliveries[i] -= curCap;
//                    curBlank += curCap;
//                    curCap = 0;
//                }
//                else {
//                    while (deliveries[i] > 0 && curCap > 0) {
//                        deliveries[i]--;
//                        curCap--;
//                        curBlank++;
//                    }
//                }
//            }
//        }
//
//        for (int i = n - 1; i >= 0; i--) {
//            pSum += pickups[i];
//
//            //뒤에서부터 픽업하며 최대 idx 저장
//            if (pickups[i] > 0 && curBlank != 0) {
//                maxIdx = max(maxIdx, i + 1);
//
//                if (pickups[i] >= curBlank) {
//                    pickups[i] -= curBlank;
//                    curBlank = 0;
//                }
//                else {
//                    while (pickups[i] > 0 && curBlank > 0) {
//                        pickups[i]--;
//                        curBlank--;
//                    }
//                }
//            }
//        }
//
//        answer += (2 * maxIdx);
//        maxIdx = 0;
//
//        cout << dSum << " " << pSum << endl;
//
//        if (dSum == 0 && pSum == 0) {
//            break;
//        }
//
//        dSum = 0; pSum = 0;
//    }
//
//    return answer;
//}
//
//int main() {
//    /*
//    
//    1 0 2 0 0
//    0 3 0 0 0
//
//    0 0 0 0 0
//    0 3 0 0 0
//    
//    */
//
//    int cap = 4;
//    int n = 5;
//    vector<int> d = { 1, 0, 3, 1, 2 };
//    vector<int> p = { 0, 3, 0, 4, 0 };
//
//    cout << solution(cap, n, d, p) << endl;
//
//    return 0;
//}