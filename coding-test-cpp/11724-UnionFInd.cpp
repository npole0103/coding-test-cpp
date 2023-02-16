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
//vector<int> parent(1001, 0);
//
//int getParent(int x) {
//    if (x == parent[x]) {
//        return x;
//    }
//    return parent[x] = getParent(parent[x]);
//}
//
//void unionParent(int a, int b) {
//    a = getParent(a);
//    b = getParent(b);
//    if (a < b) {
//        parent[b] = a;
//    }
//    else {
//        parent[a] = b;
//    }
//}
//
//int main() {
//
//    int n, m;
//    int u, v;
//    set<int> s;
//
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        parent[i] = i;
//    }
//
//    for (int i = 0; i < m; i++) {
//        cin >> u >> v;
//        unionParent(u, v);
//    }
//    
//    for (int i = 1; i <= n; i++) {
//        s.insert(getParent(i));
//    }
//
//    cout << s.size() << endl;
//
//    return 0;
//}