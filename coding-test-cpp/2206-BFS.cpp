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
///*
////https://ongveloper.tistory.com/124
//
//1.���� ĭ�� ���̰� �μ� �� ���� ����
//
// -���� �μ����� ������ ť�� ���� ĭ�� ��ǥ�� 0�� �־��ְ�,
//
// -���� �μ��� ������ ���� ĭ�� �����ϴ� ���� �̵��� ĭ�� ������ �־��ش�.
//
//2.���� ĭ�� ���� �ƴϰ� ���� �湮���� �ʾҴٸ�
//
////�ش� ĭ�� ���� �μ��� ���� ��, �μ��� �ʰ� ���� �� ���� ���ϰ� �ȴ�.
//
// -ť�� ���� ĭ�� ��ǥ�� ���� ���� �μ������� ���¸� �״�� �־��ְ�,
//
// -���� ĭ�� ���� ĭ�� �����ϴ� ���� �̵��� ĭ�� ������ �־��ش�.
//
//*/
//
//int r, c;
//int dir[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
//int visited[1000][1000][2];
//
//int bfs(int row, int col, vector<string>& graph) {
//    queue<pair<pair<int, int>, int>> q;
//    q.push({ { row, col }, 1 });
//    visited[row][col][1] = 1;
//
//    while (!q.empty()) {
//        pair<pair<int, int>, int> cur = q.front();
//        q.pop();
//
//        if (cur.first.first == r - 1 && cur.first.second == c - 1) {
//            return visited[cur.first.first][cur.first.second][cur.second];
//        }
//
//        for (int i = 0; i < 4; i++) {
//            int nx = cur.first.first + dir[i][0];
//            int ny = cur.first.second + dir[i][1];
//            int block = cur.second;
//
//            if (nx < 0 || ny < 0 || nx >= r || ny >= c) {
//                continue;
//            }
//
//            if (graph[nx][ny] == '1' && block) {
//                visited[nx][ny][block - 1] = visited[cur.first.first][cur.first.second][block] + 1;
//                q.push({ {nx, ny}, block - 1 });
//            }
//            else if (graph[nx][ny] == '0' && visited[nx][ny][block] == 0) {
//                visited[nx][ny][block] = visited[cur.first.first][cur.first.second][block] + 1;
//                q.push({ { nx, ny }, block });
//            }
//        }
//
//    }
//
//    return -1;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cout.tie(NULL);
//    cin.tie(NULL);
//
//    cin >> r >> c;
//
//    vector<string> graph(r);
//
//    for (int i = 0; i < r; i++) {
//        cin >> graph[i];
//    }
//    cout << bfs(0, 0, graph);
//
//    return 0;
//}