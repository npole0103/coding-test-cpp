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
//int n;
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//int answer = 1;
//
//int bfs(int x, int y, int pivot, vector<vector<int>>& board, vector<vector<bool>>& visited) {
//	if (visited[x][y] || board[x][y] <= pivot) {
//		return 0;
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
//			if (nx < 0 || ny < 0 || nx >= n || ny >= n) {
//				continue;
//			}
//
//			//이미 방문 했거나, pivot보다 작다면
//			if (visited[nx][ny] || board[nx][ny] <= pivot) {
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
//int main() {
//	set<int> s; //pivot 숫자들 집합
//	cin >> n;
//	vector<vector<int>> board(n, vector<int>(n, 0));
//	vector<vector<bool>> visited(n, vector<bool>(n, false));
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			int temp;
//			cin >> temp;
//			board[i][j] = temp;
//			s.insert(temp);
//		}
//	}
//
//	for (const auto& pivot : s) {
//		int cnt = 0;
//		vector<vector<bool>> v = visited;
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cnt += bfs(i, j, pivot, board, v);
//			}
//		}
//
//		answer = max(answer, cnt);
//	}
//
//	cout << answer << endl;
//
//	return 0;
//}