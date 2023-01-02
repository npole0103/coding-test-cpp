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
//    stack<int> s; //�ε��� �����
//    vector<int> answer(n); //���� �����
//    vector<int> top(n); //ž ���� �����
//
//    for (int i = 0; i < n; i++) {
//        cin >> top[i];
//    }
//
//    //���ǹ� i > 0 ����
//    for (int i = n - 1; i > 0; i--) {
//        //���ÿ� �ε��� ����
//        s.push(i);
//
//        //���κ��� ���� ���� ž�� ���Դٸ�, �ε��� ǥ�� �� pop()
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