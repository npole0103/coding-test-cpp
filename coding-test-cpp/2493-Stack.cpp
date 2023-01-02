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
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    stack<int> s; //인덱스 저장용
//    vector<int> answer(n); //정답 저장용
//    vector<int> top(n); //탑 높이 저장용
//
//    for (int i = 0; i < n; i++) {
//        cin >> top[i];
//    }
//
//    //조건문 i > 0 주의
//    for (int i = n - 1; i > 0; i--) {
//        //스택에 인덱스 삽입
//        s.push(i);
//
//        //본인보다 높은 층의 탑이 나왔다면, 인덱스 표시 후 pop()
//        while (!s.empty() && top[i - 1] > top[s.top()]) {
//            answer[s.top()] = (i - 1) + 1;
//            s.pop();
//        }
//    }
//
//    for (const auto& e : answer) {
//        cout << e << " ";
//    }
//    cout << endl;
//
//    return 0;
//}