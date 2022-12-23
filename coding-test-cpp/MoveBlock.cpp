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
//	int dir;  //x, y를 기준으로 로봇의 꼬리가 U = 0, R = 1, D = 2, L = 3 위치
//};
//
//bool isRange(int x, int y) {
//	if (x < 0 || y < 0 || x >= gN || y >= gN) {
//		return false;
//	}
//	return true;
//}
//
////로봇의 맨 뒤쪽 좌표를 기준으로
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
//			//이동 처리 - 단순 이동이기 때문이 로봇의 꼬리 dir 값은 그대로 가져감
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
//			//회전 처리 - dir 좌표 기준 직각인 i에 대하여
//			//EX) dir-U 일 때 i가 R 혹은 L이 될 수 있음
//			//(x1, y1)을 중심으로 직각을 만드느냐, (x2, y2)를 중심으로 직각을 만드느냐
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
//	BFS긴 한데...
//
//	*/
//
//	cout << solution(v) << endl;
//
//	return 0;
//}