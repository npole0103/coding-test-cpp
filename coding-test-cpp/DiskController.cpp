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
//class cmp {
//public:
//    bool operator()(vector<int> a, vector<int> b) {
//        //priority queue는 오름차순이 '>'
//        return a[1] > b[1];
//    }
//};
//
//int solution(vector<vector<int>> jobs) {
//    int curTime = 0;
//    int taskCnt = 0;
//    int totalTime = 0;
//
//    priority_queue<vector<int>, vector<vector<int>>, cmp> pq;
//
//    //요청 시점 기준으로 오름차순
//    sort(jobs.begin(), jobs.end());
//
//    while (!pq.empty() || taskCnt < jobs.size()) {
//        //요청시간이 현재 시간 이하의 작업일 때 해당 작업을 큐에 넣음
//        if (taskCnt < jobs.size() && jobs[taskCnt][0] <= curTime) {
//            pq.push(jobs[taskCnt]);
//            taskCnt++;
//            continue;
//        }
//
//        //큐에 테스크가 존재하는 경우
//        if (!pq.empty()) {
//            curTime += pq.top()[1]; //현재 시간에 소요 시간만큼 추가
//            totalTime += curTime - pq.top()[0]; //테스크 요청 시점부터 대기한 시간 토탈 시간에 더하기
//            pq.pop();
//        }
//        //다른 작업의 요청 시간으로 변경
//        else {
//            curTime = jobs[taskCnt][0];
//        }
//    }
//
//    return totalTime / jobs.size();
//}
//
//int main() {
//
//    // 0 + 3 - 0
//    // 3 + 6 - 2
//    // 9 + 9 - 1
//
//
//    return 0;
//}