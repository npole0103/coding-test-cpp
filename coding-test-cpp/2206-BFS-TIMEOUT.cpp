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
//vector<vector<int>> board;
//vector<vector<int>> visited;
//vector<pair<int, int>> walls;
//
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//int answer = 1e9;
//
//void bfs(int x, int y, vector<vector<int>>& b, vector<vector<int>>& v) {
//    queue<pair<int, int>> q;
//    q.push({ x, y });
//    v[x][y] = 1;
//
//    while (!q.empty()) {
//        pair<int, int> cur = q.front();
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int nx = cur.first + dx[i];
//            int ny = cur.second + dy[i];
//
//            if (nx < 0 || ny < 0 || nx >= row || ny >= col) {
//                continue;
//            }
//
//            if (v[nx][ny] || b[nx][ny]) {
//                continue;
//            }
//
//            v[nx][ny] = v[cur.first][cur.second] + 1;
//            q.push({ nx, ny });
//        }
//    }
//}
//
//int main() {
//    
//    cin >> row >> col;
//
//    board.resize(row, vector<int>(col, 0));
//    visited.resize(row, vector<int>(col, 0));
//    
//    string temp;
//    for (int i = 0; i < row; i++) {
//        cin >> temp;
//        for (int j = 0; j < temp.size(); j++) {
//            board[i][j] = temp[j] - 48;
//            if (board[i][j] == 1) {
//                walls.push_back({ i, j });
//            }
//        }
//    }
//    
//    vector<vector<int>> b = board;
//    vector<vector<int>> v = visited;
//
//    bfs(0, 0, b, v);
//    if (v[row - 1][col - 1] != 0) {
//        answer = min(answer, v[row - 1][col - 1]);
//    }
//
//    for (int i = 0; i < walls.size(); i++) {
//        int x = walls[i].first;
//        int y = walls[i].second;
//        
//        b = board;
//        v = visited;
//
//        b[x][y] = 0;
//        bfs(0, 0, b, v);
//        b[x][y] = 1;
//
//        if (v[row - 1][col - 1] != 0) {
//            answer = min(answer, v[row - 1][col - 1]);
//        }
//    }
//
//    cout << (answer == 1e9 ? -1 : answer) << endl;
//
//    return 0;
//}
//
////나랑 비슷한 풀이 https://silver-g-0114.tistory.com/28