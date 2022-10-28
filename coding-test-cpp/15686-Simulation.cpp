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
//vector<pair<int, int>> houses;
//vector<pair<int, int>> stores;
//vector<pair<int, int>> temp(13, {0, 0}); //combination 조합할 임시 벡터
//int answer = 1e9;
//
////맨해튼 거리
//int getDist(int x1, int y1, int x2, int y2) {
//    return abs(x2 - x1) + abs(y2 - y1);
//}
//
////집 좌표 (x, y)에서 가장 가까운 치킨 거리 구하기
//int getMinChickenDist(int x, int y) {
//    int minDist = 1e9;
//    for (int i = 0; i < m; i++) {
//        minDist = min(minDist, getDist(x, y, temp[i].first, temp[i].second));
//    }
//    return minDist;
//}
//
//void dfs(int cnt, int idx) {
//    if (m == cnt) {
//        int minDistSum = 0;
//
//        for (const auto& e : houses) {
//            minDistSum += getMinChickenDist(e.first, e.second);
//        }
//
//        answer = min(answer, minDistSum);
//
//        return;
//    }
//
//    for (int i = idx; i < stores.size(); i++) {
//        temp[cnt] = stores[i];
//        dfs(cnt + 1, i + 1);
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    vector<vector<int>> board(n, vector<int>(n, 0));
//    
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> board[i][j];
//            if (board[i][j] == 1) {
//                houses.push_back({ i, j });
//            }
//            if (board[i][j] == 2) {
//                stores.push_back({ i, j });
//            }
//        }
//    }
//
//    dfs(0, 0);
//
//    cout << answer << endl;
//
//    return 0;
//}