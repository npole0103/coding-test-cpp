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
//int solution(int n, int k, vector<int> enemy) {
//    int answer = 0;
//    priority_queue<int> pq;
//
//    for (const auto& e : enemy) {
//        pq.push(e);
//
//        //n보다 작거나 같다면 n을 차감
//        if (n >= e) {
//            n -= e;
//            answer++;
//        }
//        else {
//            //무적권 갯수가 남았다면
//            if (k-- > 0) {
//                //가장 큰 것에 무적권을 사용 pq.top()만큼 n을 돌려받음
//                //현재 e를 차감
//                n += pq.top() - e;
//                pq.pop();
//                answer++;
//            }
//            else {
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
//    priority_queue<int> pqq;
//    pqq.push(5);
//    pqq.push(2);
//
//    cout << pqq.top() << endl;
//
//
//    /*
//
//    pq : 4
//    n : 7 
//    
//    */
//
//    return 0;
//}