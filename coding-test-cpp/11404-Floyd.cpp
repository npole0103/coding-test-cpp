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
//int main() {
//
//    int n;
//    int cnt;
//    cin >> n >> cnt;
//
//    vector<vector<int>> adj(n, vector<int>(n, 1e9));
//    for (int i = 0; i < n; i++) {
//        adj[i][i] = 0;
//    }
//
//    for (int i = 0; i < cnt; i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        adj[a - 1][b - 1] = min(adj[a - 1][b - 1], c);
//    }
//
//    for (int k = 0; k < n; k++) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
//            }
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (adj[i][j] == 1e9) {
//                cout << 0 << " ";
//            }
//            else {
//                cout << adj[i][j] << " ";
//            }
//        }
//        cout << endl;
//    }
//
//    return 0;
//}