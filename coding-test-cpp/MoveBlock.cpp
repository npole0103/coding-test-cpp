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
//int dx[4] = { -1, 0, 1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//int gN = 0;
//bool visited[101][101][4]; //x, y, type
//int answer = 0;
//
//struct Info {
//	int cnt;
//	int x;
//	int y;
//	int dir;  //x, y�� �������� �κ��� ������ U = 0, R = 1, D = 2, L = 3 ��ġ
//};
//
//bool isRange(int x, int y) {
//	if (x < 0 || y < 0 || x >= gN || y >= gN) {
//		return false;
//	}
//	return true;
//}
//
////�κ��� �� ���� ��ǥ�� ��������
//void bfs(int cnt, int x, int y, int d, vector<vector<int>>& board) {
//	queue<Info> q;
//
//	visited[x][y][d] = true;
//	visited[x][y + 1][(d + 2) % 4] = true;
//	q.push({ cnt, x, y, d });
//	q.push({ cnt, x, y + 1, (d + 2) % 4 });
//
//	while (!q.empty()) {
//		Info cur = q.front();
//		q.pop();
//
//		int cnt = cur.cnt;
//		int x1 = cur.x;
//		int y1 = cur.y;
//		int dir = cur.dir;
//		int x2 = cur.x + dx[cur.dir];
//		int y2 = cur.y + dy[cur.dir];
//
//		if ((x1 == gN - 1 && y1 == gN - 1) || (x2 == gN - 1 && y2 == gN - 1)) {
//			answer = cur.cnt;
//			return;
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int nx1 = x1 + dx[i];
//			int ny1 = y1 + dy[i];
//			int nx2 = x2 + dx[i];
//			int ny2 = y2 + dy[i];
//
//			if (!isRange(nx1, ny1) || !isRange(nx2, ny2)) {
//				continue;
//			}
//
//			if (board[nx1][ny1] || board[nx2][ny2]) {
//				continue;
//			}
//
//			//�̵� ó�� - �ܼ� �̵��̱� ������ �κ��� ���� dir ���� �״�� ������
//			if (!visited[nx1][ny1][dir]) {
//				visited[nx1][ny1][dir] = true;
//				q.push({ cnt + 1, nx1, ny1, dir });
//			}
//
//			if (!visited[nx2][ny2][(dir + 2) % 4]) {
//				visited[nx2][ny2][(dir + 2) % 4] = true;
//				q.push({ cnt + 1, nx2, ny2, (dir + 2) % 4 });
//			}
//
//			//ȸ�� ó�� - dir ��ǥ ���� ������ i�� ���Ͽ�
//			//EX) dir-U �� �� i�� R Ȥ�� L�� �� �� ����
//			//(x1, y1)�� �߽����� ������ �������, (x2, y2)�� �߽����� ������ �������
//			if ((dir + 1) % 2 == i % 2) {
//				if (!visited[x1][y1][i]) {
//					visited[x1][y1][i] = true;
//					q.push({ cnt + 1, x1, y1, i });
//				}
//
//				if (!visited[x2][y2][i]) {
//					visited[x2][y2][i] = true;
//					q.push({ cnt + 1, x2, y2, i });
//				}
//			}
//		}
//	}
//
//	return;
//}
//
//int solution(vector<vector<int>> board) {
//	gN = board.size();
//
//	bfs(0, 0, 0, 1, board);
//
//	return answer;
//}
//
//int main() {
//
//	vector<vector<int>> v = {
//{0, 0, 0, 0, 0, 0, 1} ,{1, 1, 1, 1, 0, 0, 1},{0, 0, 0, 0, 0, 0, 0},{0, 0, 1, 1, 1, 0, 0},{0, 1, 1, 1, 1, 1, 0},{0, 0, 0, 0, 0, 1, 0},{0, 0, 1, 0, 0, 0, 0}
//	};
//	/*
//
//	BFS�� �ѵ�...
//
//	*/
//
//	cout << solution(v) << endl;
//
//	return 0;
//}