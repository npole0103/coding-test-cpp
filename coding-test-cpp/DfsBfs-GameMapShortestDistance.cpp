//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//queue<pair<int, int>> q;
//vector<vector<int>> board;
//vector<vector<int>> dist(101, vector<int>(101, 0));
//int maxRow = 0, maxCol = 0;
//
//int dx[4] = {0, 1, 0, -1};
//int dy[4] = {1, 0, -1, 0};
//
//void bfs(int x, int y) {
//
//    //초기 설정
//    q.push({ x, y });
//    dist[x][y] = 1;
//
//    //bfs 진행
//    while (!q.empty()) {
//        int curX = q.front().first;
//        int curY = q.front().second;
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int nx = curX + dx[i];
//            int ny = curY + dy[i];
//
//            if (nx < 0 || ny < 0 || nx >= maxRow || ny >= maxCol) {
//                continue;
//            }
//
//            //이미 방문한 곳(거리가 0이 아닌)이거나 보드판이 벽이 아닐 때
//            if (dist[nx][ny] != 0 || board[nx][ny] != 1) {
//                continue;
//            }
//
//            //조건 검사를 모두 통과했다면 유효한 값이기에 방문
//            q.push({ nx, ny });
//            dist[nx][ny] = dist[curX][curY] + 1;
//        }
//    }
//}
//
//int solution(vector<vector<int>> maps)
//{
//    board = maps;
//    maxRow = maps.size(); maxCol = maps[0].size();
//
//    bfs(0, 0);
//
//    if (dist[maxRow - 1][maxCol - 1] == 0) {
//        return -1;
//    }
//
//    return dist[maxRow - 1][maxCol - 1];
//}
//
//int main() {
//
//    return 0;
//}