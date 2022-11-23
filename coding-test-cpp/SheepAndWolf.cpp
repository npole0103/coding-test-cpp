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
//vector<int> adj[17];
//int answer = 0;
//
//void dfs(int cur, set<int> nodes, int sheep, int wolf, vector<int>& info) {
//    if (info[cur]) {
//        wolf++;
//    }
//    else {
//        sheep++;
//    }
//
//    if (wolf >= sheep) {
//        return;
//    }
//    
//    nodes.erase(cur);
//    answer = max(answer, sheep);
//
//    for (const auto& e : adj[cur]) {
//        nodes.insert(e);
//    }
//
//    for (const auto& e : nodes) {
//        dfs(e, nodes, sheep, wolf, info);
//    }
//
//}
//
//int solution(vector<int> info, vector<vector<int>> edges) {
//
//    for (const auto& e : edges) {
//        adj[e[0]].push_back(e[1]);
//    }
//
//    dfs(0, { 0 }, 0, 0, info);
//
//    return answer;
//}
//
//int main() {
//
//    cout << (1 << 0) << endl;
//    cout << (1 << 1) << endl;
//    cout << (1 << 2) << endl;
//    cout << (1 << 3) << endl;
//
//    return 0;
//}