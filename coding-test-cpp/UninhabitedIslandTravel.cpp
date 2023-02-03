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
//int row = 0, col = 0;
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { 1, 0, -1, 0 };
//
//vector<vector<int>> board;
//vector<vector<int>> visited;
//multiset<int> ms;
//
//void bfs(int x, int y) {
//    if (visited[x][y] == 1 || board[x][y] == 0) {
//        return;
//    }
//
//    int acc = 0;
//
//    queue<pair<int, int>> q;
//    q.push({ x, y });
//    acc += board[x][y];
//    visited[x][y] = 1;
//
//    while (!q.empty()) {
//        pair<int, int> cur = q.front();
//        q.pop();
//        visited[cur.first][cur.second] = 1;
//
//        for (int i = 0; i < 4; i++) {
//            int nx = cur.first + dx[i];
//            int ny = cur.second + dy[i];
//
//            if (nx < 0 || ny < 0 || nx >= row || ny >= col) {
//                continue;
//            }
//            
//            if (visited[nx][ny] == 1 || board[nx][ny] == 0) {
//                continue;
//            }
//
//            acc += board[nx][ny];
//            visited[nx][ny] = 1;
//            q.push({ nx, ny });
//        }
//    }
//
//    ms.insert(acc);
//}
//
//vector<int> solution(vector<string> maps) {
//
//    row = maps.size();
//    col = maps[0].size();
//
//    board.resize(row, vector<int>(col, 0));
//    visited.resize(row, vector<int>(col, 0));
//
//    //maps to board
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < col; j++) {
//            if (maps[i][j] != 'X') {
//                board[i][j] = maps[i][j] - 48;
//            }
//        }
//    }
//
//    //bfs
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < col; j++) {
//            bfs(i, j);
//        }
//    }
//
//    //if not found island, return { -1 }
//    if (ms.size() == 0) {
//        return { -1 };
//    }
//
//    vector<int> answer(ms.begin(), ms.end());
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}