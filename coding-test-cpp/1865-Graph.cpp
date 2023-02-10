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
////https://4z7l.github.io/2021/03/04/algorithms-boj-1865.html
////https://www.youtube.com/watch?v=0NrlN88D9Fs
// 
//vector<tuple<int, int, int>> edges;
//int n, m, w;
//
//bool bellmanFord() {
//    vector<int> dist(n + 1, 1e9);
//
//    int s, e, t;
//    dist[1] = 0;
//    for (int i = 1; i < n; i++) {
//        for (int j = 0; j < edges.size(); j++) {
//            s = get<0>(edges[j]);
//            e = get<1>(edges[j]);
//            t = get<2>(edges[j]);
//            if (dist[e] > dist[s] + t) {
//                dist[e] = dist[s] + t;
//            }
//        }
//    }
//
//    //다시 되돌아 올 때
//    for (int j = 0; j < edges.size(); j++) {
//        s = get<0>(edges[j]);
//        e = get<1>(edges[j]);
//        t = get<2>(edges[j]);
//
//        //이미 밸만 포드로 최단 거리인데, 최단 거리가 또 있을 때
//        if (dist[e] > dist[s] + t) {
//            return true;
//        }
//    }
//
//    return false;
//}
//
//int main() {
//
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//
//    int tc;
//    cin >> tc;
//    while (tc--) {
//
//        cin >> n >> m >> w;
//
//        for (int i = 0; i < m; i++) {
//            int s, e, t;
//            cin >> s >> e >> t;
//            edges.push_back({ s, e, t });
//            edges.push_back({ e, s, t });
//        }
//
//        for (int i = 0; i < w; i++) {
//            int s, e, t;
//            cin >> s >> e >> t;
//            edges.push_back({ s, e, -t });
//        }
//
//        cout << (bellmanFord() ? "YES" : "NO") << endl;
//
//        edges.clear();
//    }
//
//    return 0;
//}