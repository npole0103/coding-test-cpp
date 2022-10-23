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
//int n, m;
////�� �� �� ��
//int dx[4] = {-1, 0, 1, 0};
//int dy[4] = {0, 1, 0, -1};
//vector<vector<int>> board(50, vector<int>(50, 0));
//vector<vector<bool>> visited(50, vector<bool>(50, false));
//int answer = 0;
//
//void dfs(int x, int y, int dir, vector<vector<int>>& board, vector<vector<bool>>& visited) {
//    //3�� ���ǿ� ���� �湮�� ���� ������ �� �� �� �ֱ� ������
//    if (visited[x][y] == false) {
//        visited[x][y] = true;
//        answer++;
//    }
//
//    for (int i = 0; i < 4; i++) {
//        int nd = (dir + 3 - i) % 4;
//        int nx = x + dx[nd];
//        int ny = y + dy[nd];
//
//        //2�� ����
//        if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
//            continue;
//        }
//
//        //1�� ����
//        if (board[nx][ny] == 0 && visited[nx][ny] == false) {
//            dfs(nx, ny, nd, board, visited);
//        }
//    }
//
//    //�� ���� û�Ұ� ���� ��
//
//    //���� ��ǥ
//    int nd = (dir + 2) % 4;
//    int nx = x + dx[nd];
//    int ny = y + dy[nd];
//    
//    //4�� ����
//    if (board[nx][ny] == 1) {
//        cout << answer << endl;
//        exit(0);
//    }
//
//    //3�� ����
//    dfs(nx, ny, dir, board, visited);
//}
//
//int main() {
//
//    cin >> n >> m;
//    int x, y, dir;
//    cin >> x >> y >> dir;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> board[i][j];
//        }
//    }
//
//    dfs(x, y, dir, board, visited);
//
//    return 0;
//}