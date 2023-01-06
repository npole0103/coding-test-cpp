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
//int answer = 0;
//vector<int> visited;
//
//void bfs(int storey) {
//
//    queue<int> q;
//    visited[storey] = 0;
//    q.push(storey);
//
//    vector<int> v;
//    string s = to_string(storey);
//
//    for (int i = 0; i < s.size(); i++) {
//        int mul = pow(10, i);
//        v.push_back(mul);
//        v.push_back(-mul);
//    }
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        if (cur == 0) {
//            answer = visited[cur];
//        }
//
//        for (int i = 0; i < v.size(); i++) {
//            int next = cur + v[i];
//
//            if (next < 0 || 2 * storey <= next) {
//                continue;
//            }
//
//            if (visited[next]) {
//                continue;
//            }
//
//            visited[next] += visited[cur] + 1;
//            q.push(next);
//        }
//    }
//
//}
//
//int solution(int storey) {
//    
//    visited.resize(2 * storey, 0);
//
//    bfs(storey);
//
//    return answer;
//}
//
//int main() {
//
//    cout << solution(16) << endl;
//
//    return 0;
//}