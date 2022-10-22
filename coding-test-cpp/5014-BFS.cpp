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
//int f, s, g, u, d;
//
//int main() {
//
//    cin >> f >> s >> g >> u >> d;
//
//    vector<int> dist(1000001, 0);
//    
//    queue<int> q;
//    dist[s] = 1; //��� ���� 1�� �����
//    q.push(s);
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        //���� 10 10 10 2 1�̸� 0ȸ���� �����ϴ� ���̹Ƿ� 0�� ����
//        if (cur == g) {
//            cout << dist[g] - 1 << endl; //������ �� 1 ������ �� -1
//            return 0;
//        }
//
//        for (int next : {cur + u, cur - d}) {
//            if (next < 1 || next > f) {
//                continue;
//            }
//            if (dist[next] != 0) {
//                continue;
//            }
//            dist[next] = dist[cur] + 1;
//            q.push(next);
//        }
//    }
//
//    cout << "use the stairs" << endl;
//
//    return 0;
//}