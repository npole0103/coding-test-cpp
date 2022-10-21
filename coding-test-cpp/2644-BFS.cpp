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
//int n, a, b, m;
//int answer = -1;
//
//void bfs(int a, vector<vector<int>>& graph, vector<int>& visited) {
//    queue<int> q;
//    visited[a] = 0; //거리 0부터 시작
//    q.push(a);
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        if (cur == b) {
//            answer = visited[b];
//            return;
//        }
//
//        for (int i = 0; i < graph[cur].size(); i++) {
//            int next = graph[cur][i];
//            
//            if (visited[next]) {
//                continue;
//            }
//            
//            visited[next] += visited[cur] + 1; //촌수는 거리 누적합
//            q.push(next);
//        }
//    }
//}
//
//int main() {
//    
//    cin >> n >> a >> b >> m;
//    vector<vector<int>> graph(n + 1, vector<int>());
//    vector<int> visited(n + 1, 0);
//
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        cin >> a >> b;
//        //양방향 그래프
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//    }
//
//    bfs(a, graph, visited);
//
//    cout << answer << endl;
//
//    return 0;
//}