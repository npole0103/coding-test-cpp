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
//int num;
//pair<int, int> start;
//pair<int, int> des;
//
//int dir[8][2] = { {1, 2}, {2, 1}, {-1, 2}, {2, -1}, {1, -2}, {-2, 1}, {-1, -2}, {-2, -1} };
//
//int bfs(vector<vector<int>>& board) {
//    queue<pair<int, int>> q;
//    q.push({ start.first, start.second });
//
//    while (!q.empty()) {
//        pair<int, int> cur = q.front();
//        q.pop();
//
//        if (cur.first == des.first && cur.second == des.second) {
//            return board[cur.first][cur.second];
//        }
//
//        for (int i = 0; i < 8; i++) {
//            int nx = cur.first + dir[i][0];
//            int ny = cur.second + dir[i][1];
//
//            if (nx < 0 || ny < 0 || nx >= num || ny >= num) {
//                continue;
//            }
//
//            if (board[nx][ny] != 0) {
//                continue;
//            }
//
//            board[nx][ny] = board[cur.first][cur.second] + 1;
//            q.push({ nx, ny });
//        }
//    }
//}
//
//int main() {
//
//    int tc;
//    cin >> tc;
//
//    while (tc--) {
//        cin >> num;
//        cin >> start.first >> start.second;
//        cin >> des.first >> des.second;
//
//        vector<vector<int>> board(num, vector<int>(num, 0));
//
//        cout << bfs(board) << "\n";
//    }
//
//    return 0;
//}