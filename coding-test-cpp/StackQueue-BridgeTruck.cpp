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
//int solution(int bridge_length, int weight, vector<int> truck_weights) {
//    int answer = 0;
//    int idx = 0;
//    int sum = 0;
//    queue<int> q;
//
//    //case 1 : 7 0 0 4 5 0 6 0 0
//
//    while (true) {
//        if (idx == truck_weights.size()) {
//            answer += bridge_length;
//            break;
//        }
//
//        //시간초 증가
//        answer++;
//
//        int cur = truck_weights[idx];
//
//        //맨 앞차가 다리를 건넌 경우
//        if (q.size() == bridge_length) {
//            sum -= q.front();
//            q.pop();
//        }
//
//        //다리 건널 수 있다면 cur 아니라면 0 삽입
//        if (sum + cur <= weight) {
//            sum += cur;
//            idx++;
//            q.push(cur);
//        }
//        else {
//            q.push(0);
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}