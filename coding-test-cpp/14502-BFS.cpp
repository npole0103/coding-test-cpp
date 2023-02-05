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
//vector<pair<int, int>> blank;
//vector<pair<int, int>> virus;
//
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { 1, 0, -1, 0 };
//
//void bfs(vector<vector<int>>& b) {
//    queue<pair<int, int>> q;
//    for (const auto& pos : virus) {
//        q.push({ pos.first, pos.second });
//    }
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
//            if (b[nx][ny] == 1 || b[nx][ny] == 2) {
//                continue;
//            }
//
//            b[nx][ny] = 2;
//            q.push({ nx, ny });
//        }
//    }
//}
//
//int countSafeZone(const vector<vector<int>>& b) {
//    int cnt = 0;
//
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < col; j++) {
//            if (b[i][j] == 0) {
//                cnt++;
//            }
//        }
//    }
//
//    return cnt;
//}
//
//int main() {
//    
//    int answer = 0;
//
//    cin >> row >> col;
//
//    board.resize(row, vector<int>(col, 0));
//
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < col; j++) {
//            cin >> board[i][j];
//            if (board[i][j] == 0) {
//                blank.push_back({ i, j });
//            }
//            if (board[i][j] == 2) {
//                virus.push_back({ i, j });
//            }
//        }
//    }
//
//    //벽 세우는 경우의 수 3중 for문
//    for (int i = 0; i < blank.size(); i++) {
//        for (int j = i + 1; j < blank.size(); j++) {
//            for (int k = j + 1; k < blank.size(); k++) {
//                
//                vector<vector<int>> b = board;
//
//                for (pair<int, int> pos : { blank[i], blank[j], blank[k] }) {
//                    b[pos.first][pos.second] = 1;
//                }
//
//                bfs(b);
//
//                answer = max(answer, countSafeZone(b));
//            }
//        }
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}