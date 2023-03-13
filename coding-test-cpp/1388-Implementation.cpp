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
//vector<string> board;
//
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n, m;
//    int answer = 0;
//    cin >> n >> m;
//
//    board.resize(n);
//    for (int i = 0; i < n; i++) {
//        cin >> board[i];
//    }
//
//    for (int i = 0; i < n; i++) {
//        int cnt = 0;
//        for (int j = 0; j < m; j++) {
//            if (board[i][j] == '-') {
//                cnt = 1;
//            }
//            else {
//                answer += cnt;
//                cnt = 0;
//            }
//
//            if (j == m - 1) {
//                answer += cnt;
//            }
//        }
//    }
//
//    for (int i = 0; i < m; i++) {
//        int cnt = 0;
//        for (int j = 0; j < n; j++) {
//            if (board[j][i] == '|') {
//                cnt = 1;
//            }
//            else {
//                answer += cnt;
//                cnt = 0;
//            }
//            if (j == n - 1) {
//                answer += cnt;
//            }
//        }
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}