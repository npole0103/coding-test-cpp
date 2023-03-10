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
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int cnt;
//    cin >> cnt;
//
//    while (cnt--) {
//        int answer = 0;
//        int n, m;
//        pair<int, int> target;
//
//        // priority - idx
//        priority_queue<pair<int, int>> pq;
//        queue<pair<int, int>> q;
//
//        cin >> n >> m;
//
//        for (int i = 0; i < n; i++) {
//            int p;
//            cin >> p;
//            q.push({p, i});
//            pq.push({p, i});
//
//            if (i == m) {
//                target = { p, i };
//            }
//        }
//
//        while (!q.empty()) {
//            pair<int, int> cur = q.front();
//
//            if (pq.top().first == cur.first && cur == target) {
//                cout << (answer + 1) << endl;
//                break;
//            }
//
//            if (cur.first == pq.top().first) {
//                pq.pop();
//                q.pop();
//                answer++;
//            }
//            else {
//                q.pop();
//                q.push(cur);
//            }
//        }
//    }
//
//    return 0;
//}