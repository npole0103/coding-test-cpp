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
//long long solution(int n, vector<int> works) {
//    long long answer = 0;
//
//    priority_queue<int> pq(works.begin(), works.end());
//
//    while (n-- > 0) {
//        int top = pq.top();
//
//        if (top == 0) {
//            return 0;
//        }
//
//        pq.pop();
//        pq.push(top - 1);
//    }
//
//    while (!pq.empty()) {
//        answer += pow(pq.top(), 2);
//        pq.pop();
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}