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
////index - priorities
//queue<pair<int, int>> q;
//map<int, int> m;
//
//int solution(vector<int> priorities, int location) {
//    int answer = 0;
//
//    for (int i = 0; i < priorities.size(); i++) {
//        q.push({i, priorities[i]});
//        m.insert({ i, priorities[i] });
//    }
//
//    int cnt = 1;
//    while (true) {
//        pair<int, int> cur = q.front();
//        q.pop();
//        m.erase(cur.first);
//        
//        //�켱���� ���� �� �ִ��� �˻�
//        bool flag = false;
//        for (const auto& e : m) {
//            if (e.second > cur.second) {
//                q.push({ cur.first, cur.second });
//                m.insert({ cur.first, cur.second });
//                flag = true;
//                break;
//            }
//        }
//
//        if (flag) {
//            continue;
//        }
//
//        //���ϴ� ������� ���
//        if (location == cur.first) {
//            answer = cnt;
//            break;
//        }
//
//        //�켱 ������ ���� ���ٸ� ���
//        cnt++;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}