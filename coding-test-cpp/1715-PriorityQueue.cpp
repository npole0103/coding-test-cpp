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
//
//    //���� ������ ���� ���� ������ �ߺ��ؼ� �������� ������ �ʱ⿡ ���� ī��� ���� ���� �̵�
//
//    int answer = 0;
//
//    int n;
//    cin >> n;
//
//    priority_queue<int, vector<int>, greater<int>> pq;
//
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        pq.push(temp);
//    }
//
//    while (pq.size() != 1) {
//        int a = pq.top(); pq.pop();
//        int b = pq.top(); pq.pop();
//
//        answer += (a + b);
//        pq.push(a + b);
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}