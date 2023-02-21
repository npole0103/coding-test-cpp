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
//struct Node {
//    int vertex;
//    int dist;
//};
//
//vector<Node> v[10001];
//vector<bool> visited(10001, false);
//
//int farthestNode, maxDist;
//
//void dfs(int node, int dist) {
//    if (visited[node]) {
//        return;
//    }
//    visited[node] = true;
//
//    if (dist > maxDist) {
//        maxDist = dist;
//        farthestNode = node;
//    }
//    
//    for (int i = 0; i < v[node].size(); i++) {
//        int nextNode = v[node][i].vertex;
//        int nextDist = v[node][i].dist + dist;
//        dfs(nextNode, nextDist);
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int cnt;
//    cin >> cnt;
//
//    int a, b, dist;
//    for (int i = 0; i < cnt - 1; i++) {
//        cin >> a >> b >> dist;
//        v[a].push_back({ b, dist });
//        v[b].push_back({ a, dist });
//    }
//
//    dfs(1, 0);
//    vector<bool> temp(10001, false);
//    visited = temp; maxDist = 0;
//    dfs(farthestNode, 0);
//
//    cout << maxDist << endl;
//
//    return 0;
//}
//
//// 루트 노드에서 가장 멀리 있는 것 찾음.
//// 찾은 노드에서 가장 멀리 있는 것까지 거리가 트리의 지름
//// 참고 https://gamedoridori.tistory.com/75