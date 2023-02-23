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
//vector<int> v[100001];
//vector<int> ans(100001, 0);
//
//void dfs(int x) {
//    for (int i = 0; i < v[x].size(); i++) {
//        int nextNode = v[x][i];
//        if (ans[nextNode] == 0) {
//            ans[nextNode] = x;
//            dfs(nextNode);
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//    int num;
//    cin >> num;
//
//    int a, b;
//    for (int i = 0; i < num - 1; i++) {
//        cin >> a >> b;
//        v[a].push_back(b);
//        v[b].push_back(a);
//    }
//
//    dfs(1);
//
//    for (int i = 2; i <= num; i++) {
//        cout << ans[i] << "\n";
//    }
//
//    return 0;
//}