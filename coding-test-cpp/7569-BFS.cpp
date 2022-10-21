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
//int x, y, z;
//int board[101][101][101] = { 0, };
//int visited[101][101][101] = { 0, };
//int dx[6] = { 1,0,-1,0,0,0 };
//int dy[6] = { 0,1,0,-1,0,0 };
//int dz[6] = { 0,0,0,0,1,-1 };
//queue<tuple<int, int, int>> q;
//int day = 0;
//
//void bfs() {
//    while (!q.empty()) {
//        tuple<int, int, int> cur = q.front();
//        q.pop();
//
//        for (int dir = 0; dir < 6; dir++) {
//            int nz = get<0>(cur) + dz[dir];
//            int ny = get<1>(cur) + dy[dir];
//            int nx = get<2>(cur) + dx[dir];
//
//            if (nz < 0 || nx < 0 || ny < 0 || nz >= z  || ny >= y || nx >= x) {
//                continue;
//            }
//            //board가 0(안 익은 토마토가 있는 칸이)이 아니라면
//            if (board[nz][ny][nx] != 0) {
//                continue;
//            }
//
//            //board에 날짜를 누적
//            board[nz][ny][nx] = board[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
//            day = max(day, board[nz][ny][nx]);
//            q.push({ nz, ny, nx });
//        }
//    }
//}
//
//int main() {
//    cin >> x >> y >> z;
//
//    for (int i = 0; i < z; i++) {
//        for (int j = 0; j < y; j++) {
//            for (int k = 0; k < x; k++) {
//                cin >> board[i][j][k];
//                if (board[i][j][k] == 1) {
//                    q.push({ i, j, k });
//                }
//            }
//        }
//    }
//
//    bfs();
//
//    //토마토가 모두 익지 못하는 상황이라면
//    for (int i = 0; i < z; i++) {
//        for (int j = 0; j < y; j++) {
//            for (int k = 0; k < x; k++) {
//                //안 익은 토마토면서 방문된 적 없는 것이 있다면
//                if (board[i][j][k] == 0) {
//                    cout << "-1" << endl;
//                    return 0;
//                }
//            }
//        }
//    }
//
//    //가능한 모든 토마토가 익었을 때도 while 문이 한번 더 돌기 때문에 -1
//    cout << ((day == 0) ? 0 : day - 1) << endl;
//
//    return 0;
//}