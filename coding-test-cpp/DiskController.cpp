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
//        //priority queue�� ���������� '>'
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
//    //��û ���� �������� ��������
//    sort(jobs.begin(), jobs.end());
//
//    while (!pq.empty() || taskCnt < jobs.size()) {
//        //��û�ð��� ���� �ð� ������ �۾��� �� �ش� �۾��� ť�� ����
//        if (taskCnt < jobs.size() && jobs[taskCnt][0] <= curTime) {
//            pq.push(jobs[taskCnt]);
//            taskCnt++;
//            continue;
//        }
//
//        //ť�� �׽�ũ�� �����ϴ� ���
//        if (!pq.empty()) {
//            curTime += pq.top()[1]; //���� �ð��� �ҿ� �ð���ŭ �߰�
//            totalTime += curTime - pq.top()[0]; //�׽�ũ ��û �������� ����� �ð� ��Ż �ð��� ���ϱ�
//            pq.pop();
//        }
//        //�ٸ� �۾��� ��û �ð����� ����
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