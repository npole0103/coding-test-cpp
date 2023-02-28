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
//1.다음 칸이 벽이고 부술 수 있을 때면
//
// -벽을 부수었기 때문에 큐에 다음 칸의 좌표와 0을 넣어주고,
//
// -벽이 부서진 상태의 다음 칸에 도착하는 데에 이동한 칸의 개수를 넣어준다.
//
//2.다음 칸이 벽이 아니고 아직 방문하지 않았다면
//
////해당 칸에 벽을 부수고 왔을 때, 부수지 않고 왔을 때 각각 비교하게 된다.
//
// -큐에 다음 칸의 좌표와 현재 벽을 부수었는지 상태를 그대로 넣어주고,
//
// -다음 칸에 현재 칸의 도착하는 데에 이동한 칸의 개수를 넣어준다.
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