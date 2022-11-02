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
//stack<int> s;
//
//int getDay(int progress, int speed) {
//    int day = 0;
//    int leftover = 100 - progress;
//
//    day = (leftover % speed == 0 ? leftover / speed : leftover / speed + 1);
//
//    return day;
//}
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//    vector<int> answer;
//    int maxDay = 0;
//
//    for (int i = 0; i < progresses.size(); i++) {
//        int day = getDay(progresses[i], speeds[i]);
//
//        //큐가 비었거나, 큐에 들어있는 값보다 작은 경우
//        if (s.empty() || maxDay >= day) {
//            maxDay = max(maxDay, day);
//            s.push(day);
//        }
//        else {
//            int cnt = 0;
//            while (!s.empty()) {
//                s.pop();
//                cnt++;
//            }
//            s.push(day);
//            maxDay = day;
//            answer.push_back(cnt);
//        }
//
//        //5 10 1 1 20 1
//
//        // 1 3 2
//
//        //7 3 9 4 1 5
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}