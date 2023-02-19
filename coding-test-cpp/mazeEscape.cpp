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
//int row, col;
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//vector<vector<char>> board;
//vector<vector<int>> visited;
//
//pair<int, int> startPos, leverPos;
//
//int findPath(int x, int y, char type) {
//    queue<pair<int, int>> q;
//    q.push({ x, y });
//
//    while (!q.empty()) {
//        pair<int, int> cur = q.front();
//        q.pop();
//
//        if (board[cur.first][cur.second] == type) {
//            return visited[cur.first][cur.second];
//        }
//
//        for (int i = 0; i < 4; i++) {
//            int nx = cur.first + dx[i];
//            int ny = cur.second + dy[i];
//
//            if (nx < 0 || ny < 0 || nx >= row || ny >= col) {
//                continue;
//            }
//
//            if (visited[nx][ny] != 0 || board[nx][ny] == 'X') {
//                continue;
//            }
//
//            visited[nx][ny] += visited[cur.first][cur.second] + 1;
//            q.push({ nx, ny });
//        }
//    }
//
//    return -1;
//}
//
//int solution(vector<string> maps) {
//
//    int pathA = 0, pathB = 0;
//
//    row = maps.size();
//    col = maps[0].size();
//
//    board.resize(row, vector<char>(col));
//    visited.resize(row, vector<int>(col, 0));
//
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < col; j++) {
//            board[i][j] = maps[i][j];
//
//            if (maps[i][j] == 'S') {
//                startPos = { i, j };
//            }
//
//            if (maps[i][j] == 'L') {
//                leverPos = { i, j };
//            }
//        }
//    }
//
//    pathA = findPath(startPos.first, startPos.second, 'L');
//    vector<vector<int>>v (row, vector<int>(col, 0));
//    visited = v;
//    pathB = findPath(leverPos.first, leverPos.second, 'E');
//
//    if (pathA == -1 || pathB == -1) {
//        return -1;
//    }
//
//    return pathA + pathB;
//}
//
//int main() {
//
//    return 0;
//}