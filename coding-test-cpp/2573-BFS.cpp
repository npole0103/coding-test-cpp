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
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//int answer = 0;
//
//void bfs(int x, int y, vector<vector<int>>& board, vector<vector<bool>>& visited) {
//	if (visited[x][y] || board[x][y] != 0) {
//		return;
//	}
//
//	queue<pair<int, int>> q;
//	visited[x][y] = true;
//	q.push({ x, y });
//
//	while (!q.empty()) {
//		pair<int, int> cur = q.front();
//		q.pop();
//
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = cur.first + dx[dir];
//			int ny = cur.second + dy[dir];
//
//			if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
//				continue;
//			}
//
//			//빙하가 아닌 부분이라면
//			if (board[nx][ny] != 0) {
//				board[nx][ny] -= 1;
//				continue;
//			}
//
//			//이미 방문 했다면
//			if (visited[nx][ny]) {
//				continue;
//			}
//
//			visited[nx][ny] = true;
//			q.push({ nx, ny });
//		}
//	}
//}
//
////빙산이 두 덩어리 이상으로 분리되는지 유무 판단 함수
//int bfsDivide(int x, int y, vector<vector<int>>& board, vector<vector<bool>>& visited) {
//	if (visited[x][y] || board[x][y] == 0) {
//		return 0;
//	}
//
//	queue<pair<int, int>> q;
//	q.push({ x, y });
//
//	while (!q.empty()) {
//		pair<int, int> cur = q.front();
//		q.pop();
//
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = cur.first + dx[dir];
//			int ny = cur.second + dy[dir];
//
//			if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
//				continue;
//			}
//
//			//이미 방문 했거나, 빙하가 아닌 부분이라면
//			if (visited[nx][ny] || board[nx][ny] == 0) {
//				continue;
//			}
//
//			visited[nx][ny] = true;
//			q.push({ nx, ny });
//		}
//	}
//
//	return 1;
//}
//
////초기에 빙산인 것에 방문표시 해주는 함수
//void checkIce(vector<vector<int>>& board, vector<vector<bool>>& visited) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			//빙산이 아니라면 방문표시: 기존에 빙산이 아니었는데 0이 되면서 queue에 들어가는 것이 있기에 예외처리
//			if (board[i][j] != 0) {
//				visited[i][j] = true;
//			}
//		}
//	}
//}
//
////빙산이 모두 녹았는데 녹을 때까지 분리되지 않았을 때 종료 조건 판단 함수
//bool isQuit(vector<vector<int>>& board) {
//	bool flag = false;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			//만약 하나라도 빙산이 있다면
//			if (board[i][j] != 0) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//
//int main() {
//	cin >> n >> m;
//	vector<vector<int>> board(n, vector<int>(m, 0));
//	vector<vector<bool>> visited(n, vector<bool>(m, false));
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			int temp;
//			cin >> temp;
//			board[i][j] = temp;
//		}
//	}
//
//	while (true) {
//
//		//두개로 나누어졌는지 체크
//		vector<vector<bool>> vv = visited;
//		int cnt = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cnt += bfsDivide(i, j, board, vv);
//				if (cnt >= 2) {
//					cout << answer << endl;
//					return 0;
//				}
//			}
//		}
//
//		vector<vector<bool>> v = visited;
//
//		//Ice의 위치 방문 표시
//		checkIce(board, v);
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				bfs(i, j, board, v);
//			}
//		}
//
//		//1년 더해줌
//		answer++;
//
//		//만약 모든 빙산이 녹았는데 두개로 나누어지지 않았다면
//		if (isQuit(board)) {
//			cout << 0 << endl;
//			return 0;
//		}
//
//	}
//
//	return 0;
//}