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
//        //n���� �۰ų� ���ٸ� n�� ����
//        if (n >= e) {
//            n -= e;
//            answer++;
//        }
//        else {
//            //������ ������ ���Ҵٸ�
//            if (k-- > 0) {
//                //���� ū �Ϳ� �������� ��� pq.top()��ŭ n�� ��������
//                //���� e�� ����
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