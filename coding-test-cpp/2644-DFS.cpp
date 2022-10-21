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
//void dfs(int a, int cnt, vector<vector<int>>& graph, vector<bool>& visited) {
//    //�湮 ǥ��
//    visited[a] = true;
//
//    //a�� b�� �����ߴٸ�
//    if (a == b) {
//        //cnt == �̼�
//        answer = cnt;
//        return;
//    }
//
//    for (int i = 0; i < graph[a].size(); i++) {
//        int next = graph[a][i];
//        if (!visited[next]) {
//            dfs(next, cnt + 1, graph, visited);
//        }
//    }
//}
//
//int main() {
//    
//    cin >> n >> a >> b >> m;
//    vector<vector<int>> graph(n + 1, vector<int>());
//    vector<bool> visited(n + 1, 0);
//
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        cin >> a >> b;
//        //����� �׷���
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//    }
//
//    dfs(a, 0, graph, visited);
//
//    cout << answer << endl;
//
//    return 0;
//}