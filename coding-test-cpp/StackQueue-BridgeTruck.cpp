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
//        //�ð��� ����
//        answer++;
//
//        int cur = truck_weights[idx];
//
//        //�� ������ �ٸ��� �ǳ� ���
//        if (q.size() == bridge_length) {
//            sum -= q.front();
//            q.pop();
//        }
//
//        //�ٸ� �ǳ� �� �ִٸ� cur �ƴ϶�� 0 ����
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