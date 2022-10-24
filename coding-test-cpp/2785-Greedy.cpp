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
//int main() {
//
//    int answer = 0;
//
//    int n;
//    cin >> n;
//    deque<int> dq(n, 0);
//
//    for (int i = 0; i < n; i++) {
//        cin >> dq[i];
//    }
//
//    //가장 짧은 체인부터 그리디하게
//    sort(dq.begin(), dq.end());
//
//    while (true) {
//
//        //고리가 모두 연결되었다면
//        if (dq.size() == 1 || dq.size() == 0) {
//            cout << answer << endl;
//            break;
//        }
//
//        dq[0]--; //맨 앞 고리 하나를 빼서
//        dq.pop_back(); //맨 뒤에 체인 묶기(제거)
//        answer++; //연결한 체인 갯수 증가
//
//        //맨 앞 고리를 모두 소진했다면
//        if (dq[0] == 0) {
//            dq.pop_front();
//        }
//    }
//
//    return 0;
//}