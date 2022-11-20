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
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { 1, 0, -1, 0 };
//
//int maxNum = 0;
//int maxArea = 0;
//int gM = 0, gN = 0;
//
//void bfs(int x, int y, vector<vector<bool>>& visited, const vector<vector<int>>& picture) {
//    if (visited[x][y] || picture[x][y] == 0) {
//        return;
//    }
//    
//    int cnt = 0;
//    int type = picture[x][y];
//
//    queue<pair<int, int>> q;
//    visited[x][y] = true;
//    cnt++;
//    q.push({ x, y });
//
//    while (!q.empty()) {
//        pair<int, int> cur = q.front();
//        visited[cur.first][cur.second] = true;
//        q.pop();
//
//        for (int dir = 0; dir < 4; dir++) {
//            int nx = cur.first + dx[dir];
//            int ny = cur.second + dy[dir];
//
//            if (nx < 0 || ny < 0 || nx >= gM || ny >= gN) {
//                continue;
//            }
//
//            if (visited[nx][ny] || picture[x][y] != picture[nx][ny]) {
//                continue;
//            }
//
//            visited[nx][ny] = true;
//            cnt++;
//            q.push({ nx, ny });
//        }
//    }
//
//    maxNum += 1;
//    maxArea = max(maxArea, cnt);
//}
//
//vector<int> solution(int m, int n, vector<vector<int>> picture) {
//    gM = m, gN = n;
//    maxNum = 0, maxArea = 0;
//    vector<vector<bool>> visited(m, vector<bool>(n, false));
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            bfs(i, j, visited, picture);
//        }
//    }
//
//    return {maxNum, maxArea};
//}
//
//int main() {
//    /*
//    1 1 1 0
//    1 1 1 0
//    0 0 0 1
//    0 0 0 1
//    0 0 0 1
//    0 0 0 1
//    */
//    return 0;
//}