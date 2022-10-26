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
//int perm[9];
//int temp[9];
//
//void dfs(int cnt) {
//	if (cnt == m) {
//		for (int i = 0; i < m; i++) {
//			cout << temp[i] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//
//	for (int i = 0; i < n; i++) {
//		temp[cnt] = perm[i];
//		dfs(cnt + 1);
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		perm[i] = i + 1;
//	}
//
//	dfs(0);
//
//	return 0;
//}