//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int mixScoville(int a, int b) {
//    return a + 2 * b;
//}
//
//int solution(vector<int> scoville, int K) {
//    int answer = 0;
//
//    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
//
//    while (pq.size() >= 2 && pq.top() < K) {
//        int a = pq.top(); pq.pop();
//        int b = pq.top(); pq.pop();
//        pq.push(mixScoville(a, b));
//        answer++;
//    }
//
//    if (pq.size() == 1 && pq.top() < K) {
//        return -1;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}