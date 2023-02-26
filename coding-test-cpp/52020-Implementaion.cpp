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
//int board[1001][1001];
//int dx[4] = { -1, 0, 1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//int row, col;
//int th;
//
//int curX = 1, curY = 1;
//int dir = 0, cnt = 1;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> col >> row;
//    cin >> th;
//
//    if (th > col * row) {
//        cout << "0" << endl;
//        return 0;
//    }
//
//    for (int i = 0; i <= row * col + 1; i++) {
//
//        if (th == cnt) {
//            cout << curX << " " << curY << endl;
//            break;
//        }
//
//        int nx = curX + dx[dir];
//        int ny = curY + dy[dir];
//
//        if (board[nx][ny] != 0 || nx < 1 || ny < 1 || nx > col || ny > row) {
//            dir = (dir + 1) % 4;
//        }
//
//        board[curX][curY] = cnt++;
//
//        curX += dx[dir];
//        curY += dy[dir];
//    }
//
//    return 0;
//}