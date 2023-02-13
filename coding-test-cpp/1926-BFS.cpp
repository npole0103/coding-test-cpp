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
//int gArea = 0, gNum = 0;
//int r, c;
//vector<vector<int>> board;
//vector<vector<int>> visited;
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { 1, 0, -1, 0 };
//
//void bfs(int x, int y) {
//    if (!board[x][y] || visited[x][y]) {
//        return;
//    }
//
//    queue<pair<int, int>> q;
//    int area = 1;
//    visited[x][y] = 1;
//    q.push({ x, y });
//
//    while (!q.empty()) {
//        pair<int, int> cur = q.front();
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int nx = cur.first + dx[i];
//            int ny = cur.second + dy[i];
//
//            if (0 < nx || 0 < ny || nx >= r || ny >= c) {
//                continue;
//            }
//
//            if (board[nx][ny] == 0 || visited[nx][ny] == 1) {
//                continue;
//            }
//
//            q.push({ nx, ny });
//            visited[nx][ny] = 1;
//            area++;
//        }
//    }
//
//    gNum++;
//    gArea = max(gArea, area);
//}
//
//int main() {
//
//    cin >> r >> c;
//    board.resize(r, vector<int>(c, 0));
//    visited.resize(r, vector<int>(c, 0));
//
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            cin >> board[i][j];
//        }
//    }
//    
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            bfs(i, j);
//        }
//    }
//
//    cout << gNum << endl;
//    cout << gArea << endl;
//
//    return 0;
//}