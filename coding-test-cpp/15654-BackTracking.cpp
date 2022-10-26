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
//int n, m;
//vector<int> perm;
//int temp[9];
//bool visited[9];
//
//void dfs(int cnt) {
//    if (cnt == m) {
//        for (int i = 0; i < m; i++) {
//            cout << temp[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (visited[i] == false) {
//            temp[cnt] = perm[i];
//            visited[i] = true;
//            dfs(cnt + 1);
//            visited[i] = false;
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        perm.push_back(temp);
//    }
//    sort(perm.begin(), perm.end());
//
//    dfs(0);
//    
//    return 0;
//}