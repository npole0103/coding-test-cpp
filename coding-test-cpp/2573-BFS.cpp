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
//			//���ϰ� �ƴ� �κ��̶��
//			if (board[nx][ny] != 0) {
//				board[nx][ny] -= 1;
//				continue;
//			}
//
//			//�̹� �湮 �ߴٸ�
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
////������ �� ��� �̻����� �и��Ǵ��� ���� �Ǵ� �Լ�
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
//			//�̹� �湮 �߰ų�, ���ϰ� �ƴ� �κ��̶��
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
////�ʱ⿡ ������ �Ϳ� �湮ǥ�� ���ִ� �Լ�
//void checkIce(vector<vector<int>>& board, vector<vector<bool>>& visited) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			//������ �ƴ϶�� �湮ǥ��: ������ ������ �ƴϾ��µ� 0�� �Ǹ鼭 queue�� ���� ���� �ֱ⿡ ����ó��
//			if (board[i][j] != 0) {
//				visited[i][j] = true;
//			}
//		}
//	}
//}
//
////������ ��� ��Ҵµ� ���� ������ �и����� �ʾ��� �� ���� ���� �Ǵ� �Լ�
//bool isQuit(vector<vector<int>>& board) {
//	bool flag = false;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			//���� �ϳ��� ������ �ִٸ�
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
//		//�ΰ��� ������������ üũ
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
//		//Ice�� ��ġ �湮 ǥ��
//		checkIce(board, v);
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				bfs(i, j, board, v);
//			}
//		}
//
//		//1�� ������
//		answer++;
//
//		//���� ��� ������ ��Ҵµ� �ΰ��� ���������� �ʾҴٸ�
//		if (isQuit(board)) {
//			cout << 0 << endl;
//			return 0;
//		}
//
//	}
//
//	return 0;
//}