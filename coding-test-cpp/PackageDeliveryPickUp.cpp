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
//    int box = 0;
//    stack<int> d, p;
//
//    for (int i = 0; i < n; i++) {
//        d.push(deliveries[i]);
//        p.push(pickups[i]);
//    }
//
//    //배달할 택배가 없거나 회수할 택배 없는 집 제거
//    while (!d.empty() && d.top() == 0) {
//        d.pop();
//    }
//    while(!p.empty() && p.top() == 0) {
//        p.pop();
//    }
//
//    while (!(d.empty() && p.empty())) {
//        //가장 멀리 있는 집 방분
//        answer += max(d.size() * 2, p.size() * 2);
//
//        //택배 배송 처리
//        box = 0;
//        while (!d.empty() && box <= cap) {
//            if (d.top() + box <= cap) {
//                box += d.top();
//                d.pop();
//            }
//            else {
//                d.top() -= (cap - box);
//                break;
//            }
//        }
//
//        //택배 픽업 처리
//        box = 0;
//        while (!p.empty() && box <= cap) {
//            if (p.top() + box <= cap) {
//                box += p.top();
//                p.pop();
//            }
//            else {
//                p.top() -= (cap - box);
//                break;
//            }
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    * 참고
//    * https://velog.io/@yeongori/%ED%83%9D%EB%B0%B0-%EB%B0%B0%EB%8B%AC%EA%B3%BC-%EC%88%98%EA%B1%B0%ED%95%98%EA%B8%B0-c
//    */
//    return 0;
//}