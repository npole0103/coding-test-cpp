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
//void createWantSet(multiset<string>& wantSet, const vector<string> want, vector<int> number) {
//    for (int i = 0; i < want.size(); i++) {
//        while (number[i]-- > 0) {
//            wantSet.insert(want[i]);
//        }
//    }
//}
//
//int solution(vector<string> want, vector<int> number, vector<string> discount) {
//    int answer = 0;
//
//    multiset<string> ws;
//    multiset<string> ds;
//
//    createWantSet(ws, want, number);
//
//    int idx = 0;
//    while (idx < discount.size()) {
//        if (ds.size() < 10) {
//            ds.insert(discount[idx]);
//        }
//
//        if (ds.size() == 10) {
//            if (ws == ds) {
//                answer++;
//            }
//            auto it = ds.find(discount[idx - 10 + 1]);
//            ds.erase(it);
//        }
//
//        idx++;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    * 일정한 금액 지물하면 10일간 회원
//    * 매일 한 가지 제품 할인 행사
//    * 할인하는 제품은 하루에 하나씩만 구매 가능
//    * 자신이 원하는 제품과 수량이 할인하는 날짜와 10일 연속으로 일치할 경우에 맞춰서 회원가입
//
//    */
//
//    return 0;
//}