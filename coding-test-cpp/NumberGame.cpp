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
//
//// 투포인터 풀이
//int solution(vector<int> A, vector<int> B) {
//    int answer = 0;
//
//    sort(A.begin(), A.end());
//    sort(B.begin(), B.end());
//
//    // 1 3 5 7
//    // 2 2 6 8
//
//    int i, j;
//
//    i = 0;
//    for (j = 0; j < B.size(); j++) {
//        //B가 더 큰 경우
//        if (A[i] < B[j])
//        {
//            i++;
//            answer++;
//        }
//    }
//    return answer;
//}
//
//
////int solution(vector<int> A, vector<int> B) {
////    int answer = 0;
////
////    priority_queue<int> aPq(A.begin(), A.end());
////    priority_queue<int> bPq(B.begin(), B.end());
////
////    while (!aPq.empty() && !bPq.empty()) {
////        int aTop = aPq.top();
////        int bTop = bPq.top();
////
////        if (aTop < bTop) {
////            answer++;
////            aPq.pop(); bPq.pop();
////        }
////        else {
////            aPq.pop();
////        }
////    }
////
////    return answer;
////}
//
//int main() {
//
//    vector<int> v = { 1, 2, 3 };
//    auto it = v.end() - upper_bound(v.begin(), v.end(), 1);
//    cout << it << endl;
//
//    return 0;
//}