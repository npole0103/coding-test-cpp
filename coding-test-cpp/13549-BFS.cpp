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
//int n, k;
//int answer = 0;
//vector<int> board(100001, 0);
//
//void bfs(int x) {
//    queue<int> q;
//    board[x] = 1;
//    q.push(x);
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        if (cur == k) {
//            answer = board[k] - 1;
//            return;
//        }
//
//        for (int next : {cur * 2, cur - 1, cur + 1}) {
//            if (next < 0 || next >= 100001) {
//                continue;
//            }
//
//            if (board[next]) {
//                continue;
//            }
//
//            if (cur * 2 == next) {
//                board[next] = board[cur];
//            }
//            else {
//                board[next] = board[cur] + 1;
//            }
//
//            q.push(next);
//        }
//    }
//}
//
//int main() {
//
//    cin >> n >> k;
//
//    bfs(n);
//
//    cout << answer << endl;
//
//    return 0;
//}