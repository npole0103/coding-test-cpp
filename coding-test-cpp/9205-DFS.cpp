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
//vector<vector<int>> graph(102, vector<int>());
//vector<bool> visited(102, false);
//
////맨해튼 거리 계산
//int getDistance(pair<int, int> a, pair<int, int> b) {
//    return abs(a.first - b.first) + abs(a.second - b.second);
//}
//
////dfs 탐색
//void dfs(int x) {
//    //x좌표 방문표시
//    visited[x] = true;
//
//    for (int i = 0; i < graph[x].size(); i++) {
//        int next = graph[x][i];
//        if (!visited[next]) {
//            dfs(next);
//        }
//    }
//
//}
//
//int main() {
//    int tc;
//    cin >> tc;
//
//    while (tc--) {
//        //한번 돌 때마다 초기화
//        for (int i = 0; i < 102; i++) {
//            graph[i].clear();
//            visited[i] = false;
//        }
//
//        int martNum;
//        vector<pair<int, int>> pos;
//        cin >> martNum;
//
//        //출발점 + 편의점 + 도착점 저장
//        for (int i = 0; i < martNum + 2; i++) {
//            int x, y;
//            cin >> x >> y;
//            pos.push_back({ x, y });
//        }
//
//        //맥주 20병으로 갈 수 있는 거리 내에 있다면
//
//        for (int i = 0; i < martNum + 2; i++) {
//            for (int j = i + 1; j < martNum + 2; j++) {
//                if (getDistance(pos[i], pos[j]) <= 50 * 20) {
//                    graph[i].push_back(j);
//                    graph[j].push_back(i);
//                }
//            }
//        }
//
//        dfs(0);
//
//        //0이 출발점, martNum+1이 도착점
//        if (visited[martNum + 1]) {
//            cout << "happy" << endl;
//        }
//        else {
//            cout << "sad" << endl;
//        }
//    }
//
//    return 0;
//}