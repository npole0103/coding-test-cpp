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
//int n = 0;
//vector<vector<int>> gV;
//vector<vector<int>> visited;
//map<int, int> m;
//int total = 0;
//
//int dx[4] = { 1, 0, -1 ,0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//void dfs(int x, int y) {
//    if (visited[x][y] == 1 || gV[x][y] == 0) {
//        return;
//    }
//
//    total++;
//    stack<pair<int, int>> s;
//    visited[x][y] = 1;
//    s.push({ x, y });
//
//    while (!s.empty()) {
//        pair<int, int> cur = s.top();
//        s.pop();
//        m[total]++;
//
//        for (int dir = 0; dir < 4; dir++) {
//            int nx = cur.first + dx[dir];
//            int ny = cur.second + dy[dir];
//
//            if (nx < 0 || ny < 0 || nx >= n || ny >= n) {
//                continue;
//            }
//            if (visited[nx][ny] || gV[nx][ny] != 1) {
//                continue;
//            }
//            visited[nx][ny] = 1;
//            s.push({ nx, ny });
//        }
//    }
//}
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    if (a.second == b.second) {
//        return a.first < b.first;
//    }
//    return a.second < b.second;
//}
//
//int main() {
//
//    cin >> n;
//    vector<vector<int>> v(n, vector<int>(n, 0));
//    visited = v;
//
//    for (int i = 0; i < v.size(); i++) {
//        string temp;
//        cin >> temp;
//        for (int j = 0; j < temp.size(); j++) {
//            v[i][j] = temp[j] - 48;
//        }
//    }
//
//    gV = v;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            dfs(i, j);
//        }
//    }
//
//    cout << m.size() << endl;
//    vector<pair<int, int>> vv(m.begin(), m.end());
//    sort(vv.begin(), vv.end(), cmp);
//    for (const auto& e : vv) {
//        cout << e.second << endl;
//    }
//
//    return 0;
//}