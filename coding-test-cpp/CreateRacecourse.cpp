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
//struct Info {
//    int x;
//    int y;
//    int cost;
//    int dir;
//};
//
//vector<vector<int>> gBoard;
//vector<vector<vector<int>>> gCost;
//const int dy[4] = { -1, 1, 0, 0 };
//const int dx[4] = { 0, 0, -1, 1 };
//int n = 0;
//int answer = 1e9;
//
//void bfs(int x, int y, int cost) {
//    queue<Info> q;
//    q.push({ x, y, cost, 1 });
//    q.push({ x, y, cost, 3 });
//    gCost[1][x][y] = 0;
//    gCost[3][x][y] = 0;
//
//    while (!q.empty()) {
//        Info cur = q.front();
//        q.pop();
//
//        if (cur.x == n - 1 && cur.y == n - 1) {
//            answer = min(answer, gCost[cur.dir][cur.x][cur.y]);
//        }
//
//        for (int i = 0; i < 4; i++) {
//            int nx = cur.x + dx[i];
//            int ny = cur.y + dy[i];
//
//            if (nx < 0 || ny < 0 || nx >= n || ny >= n) {
//                continue;
//            }
//
//            if (gBoard[nx][ny] == 1) {
//                continue;
//            }
//
//            int nCost = 0;
//            nCost = (cur.dir == i ? cur.cost + 100 : cur.cost + 600);
//            if (gCost[i][nx][ny] < nCost) {
//                continue;
//            }
//
//            gCost[i][nx][ny] = nCost;
//            q.push({ nx, ny, nCost, i });
//        }
//    }
//}
//
//int solution(vector<vector<int>> board) {
//    n = board.size();
//    gBoard = board;
//
//    vector<vector<vector<int>>> tCost(4, vector<vector<int>>(n, vector<int>(n , 1e9)));
//    gCost = tCost;
//    
//    bfs(0, 0, 0);
//
//    //for (int i = 0; i < n; i++) {
//    //    for (int j = 0; j < n; j++) {
//    //        cout << gCost[i][j] << " ";
//    //    }
//    //    cout << endl;
//    //}
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}