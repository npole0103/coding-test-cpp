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
//queue<int> q;
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
//
//    for (int i = 0; i < progresses.size(); i++) {
//        int day = getDay(progresses[i], speeds[i]);
//        q.push(day);
//    }
//
//    while (!q.empty()) {
//        int cur = q.front();
//        int cnt = 1;
//        q.pop();
//
//        while (!q.empty() && cur >= q.front()) {
//            q.pop();
//            cnt++;
//        }
//        answer.push_back(cnt);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}