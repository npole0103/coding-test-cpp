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
//vector<vector<int>> board(8, vector<int>(8, 0));
//vector<tuple<int, int, int>> cam; //cam 정보 <x, y, type>
//int perm[5] = { 0, 1, 2, 3 }; //방향을 나타내는 dir
//int temp[5]; //permutation 조합을 만들어줄 임시 배열
//int answer = 1e9;
//
//// 하 우 상 좌
//int dx[4] = { 1, 0, -1, 0 }; 
//int dy[4] = { 0, 1, 0, -1 };
//
//void cam1(int x, int y, vector<vector<int>>& board, int dir) {
//	queue<pair<int, int>> q;
//	q.push({ x, y });
//
//	while (!q.empty()) {
//		pair<int, int> cur = q.front();
//		q.pop();
//
//		int nx = cur.first + dx[dir];
//		int ny = cur.second + dy[dir];
//
//		if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
//			continue;
//		}
//		if (board[nx][ny] == 6) {
//			continue;
//		}
//
//		board[nx][ny] = -1;
//		q.push({ nx, ny });
//	}
//}
//
//void cam2(int x, int y, vector<vector<int>>& board, int dir) {
//	int dir1 = dir;
//	int dir2 = (dir + 2) % 4;
//	cam1(x, y, board, dir1);
//	cam1(x, y, board, dir2);
//}
//
//void cam3(int x, int y, vector<vector<int>>& board, int dir) {
//	int dir1 = dir;
//	int dir2 = (dir + 1) % 4;
//	cam1(x, y, board, dir1);
//	cam1(x, y, board, dir2);
//}
//
//void cam4(int x, int y, vector<vector<int>>& board, int dir) {
//	int dir1 = dir;
//	int dir2 = (dir + 1) % 4;
//	int dir3 = (dir + 2) % 4;
//	cam1(x, y, board, dir1);
//	cam1(x, y, board, dir2);
//	cam1(x, y, board, dir3);
//}
//
//void cam5(int x, int y, vector<vector<int>>& board, int dir) {
//	int dir1 = dir;
//	int dir2 = (dir + 1) % 4;
//	int dir3 = (dir + 2) % 4;
//	int dir4 = (dir + 3) % 4;
//	cam1(x, y, board, dir1);
//	cam1(x, y, board, dir2);
//	cam1(x, y, board, dir3);
//	cam1(x, y, board, dir4);
//}
//
//void controlCam(int type, int x, int y, vector<vector<int>>& board, int dir) {
//	switch (type)
//	{
//	case 1:
//		cam1(x, y, board, dir);
//		break;
//	case 2:
//		cam2(x, y, board, dir);
//		break;
//	case 3:
//		cam3(x, y, board, dir);
//		break;
//	case 4:
//		cam4(x, y, board, dir);
//		break;
//	case 5:
//		cam5(x, y, board, dir);
//		break;
//	default:
//		break;
//	}
//}
//
//int getBlindSpot(vector<vector<int>>& board) {
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (board[i][j] == 0) {
//				cnt++;
//			}
//		}
//	}
//	return cnt;
//}
//
//void dfs(int cnt) {
//	if (cam.size() == cnt) {
//		vector<vector<int>> b = board;
//
//		for (int i = 0; i < cam.size(); i++) {
//			tuple<int, int, int> t = cam[i];
//			int x = get<0>(t);
//			int y = get<1>(t);
//			int type = get<2>(t);
//			controlCam(type, x, y, b, temp[i]);
//		}
//
//		answer = min(answer, getBlindSpot(b));
//
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		temp[cnt] = perm[i];
//		dfs(cnt + 1);
//	}
//}
//
//int main() {
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> board[i][j];
//			if (board[i][j] != 0 && board[i][j] != 6) {
//				cam.push_back({ i, j, board[i][j] });
//			}
//		}
//	}
//
//	dfs(0);
//
//	cout << answer << endl;
//
//	return 0;
//}