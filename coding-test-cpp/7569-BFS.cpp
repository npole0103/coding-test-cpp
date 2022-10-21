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
//            //board�� 0(�� ���� �丶�䰡 �ִ� ĭ��)�� �ƴ϶��
//            if (board[nz][ny][nx] != 0) {
//                continue;
//            }
//
//            //board�� ��¥�� ����
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
//    //�丶�䰡 ��� ���� ���ϴ� ��Ȳ�̶��
//    for (int i = 0; i < z; i++) {
//        for (int j = 0; j < y; j++) {
//            for (int k = 0; k < x; k++) {
//                //�� ���� �丶��鼭 �湮�� �� ���� ���� �ִٸ�
//                if (board[i][j][k] == 0) {
//                    cout << "-1" << endl;
//                    return 0;
//                }
//            }
//        }
//    }
//
//    //������ ��� �丶�䰡 �;��� ���� while ���� �ѹ� �� ���� ������ -1
//    cout << ((day == 0) ? 0 : day - 1) << endl;
//
//    return 0;
//}