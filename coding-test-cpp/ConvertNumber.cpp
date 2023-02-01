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
//int bfs(int x, int y, int n) {
//    vector<int> dist(1000001, 0);
//
//    queue<int> q;
//    q.push(x);
//    dist[x] = 1;
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        if (cur == y) {
//            return dist[cur] - 1;
//        }
//
//        for (int next : {cur + n, 2 * cur, 3 * cur}) {
//            if (next < 1 || next > 1000000) {
//                continue;
//            }
//
//            if (dist[next] != 0) {
//                continue;
//            }
//
//            dist[next] = dist[cur] + 1;
//            q.push(next);
//        }
//    }
//    return -1;
//}
//
//int solution(int x, int y, int n) {
//    return bfs(x, y, n);
//}
//
//int main() {
//
//    cout << solution(2, 5, 4) << endl;
//
//    return 0;
//}