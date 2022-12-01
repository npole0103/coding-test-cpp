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
//bool isStepping(const vector<int>& stones, int k, int mid) {
//    int cnt = 0;
//    for (int i = 0; i < stones.size(); i++) {
//        //mid 이하인지 체크
//        if (mid > stones[i]) {
//            cnt++;
//            //mid이하의 연속된 구간의 길이가 K라면
//            if (k == cnt) {
//                return false;
//            }
//        }
//        else {
//            //mid보다 크다면 컨널 수 있기에 0으로 초기화
//            cnt = 0;
//        }
//    }
//    return true;
//}
//
//int solution(vector<int> stones, int k) {
//    int answer = 0;
//    int left = 1;
//    int right = 200000000;
//    int mid; //건널 수 있는 사람 수
//
//    while (left <= right) {
//        mid = (left + right) / 2;
//        //건널 수 있다면 left 값 증가시키기
//        if (isStepping(stones, k, mid)) {
//            left = mid + 1;
//        }
//        //건널 수 없다면 right 값 감소시키기
//        else {
//            right = mid - 1;
//        }
//    }
//
//    return right;
//}
//
//int main() {
//
//    vector<int> v1 = { 2,4,5,3,2,1,4,2,5,1};
//    cout << solution(v1, 3) << endl;
//
//    return 0;
//}