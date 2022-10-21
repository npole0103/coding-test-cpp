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
//int n, m;
//int dx[4] = {1, 0, -1, 0};
//int dy[4] = {0, 1, 0, -1};
//
//void bfs(int x, int y, vector<vector<int>>& board, vector<vector<bool>> visited) {
//    queue<pair<int, int>> q;
//    visited[x][y] = true;
//    q.push({ x, y });
//
//    while (!q.empty()) {
//        pair<int, int> cur = q.front();
//        visited[x][y] = true;
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int nx = cur.first + dx[i];
//            int ny = cur.second + dy[i];
//
//            if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
//                continue;
//            }
//
//            if (board[nx][ny] != 1 || visited[nx][ny] == true) {
//                continue;
//            }
//
//            board[nx][ny] += board[cur.first][cur.second];
//            q.push({ nx, ny });
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//    
//    vector<vector<int>> board(n, vector<int>(m, 0));
//    vector<vector<bool>> visited(n, vector<bool>(m, false));
//
//    for (int i = 0; i < n; i++) {
//        string temp;
//        cin >> temp;
//        for (int j = 0; j < m; j++) {
//            board[i][j] = temp[j] - 48;
//        }
//    }
//
//    bfs(0, 0, board, visited);
//
//    cout << board[n - 1][m - 1] << endl;
//
//    return 0;
//}