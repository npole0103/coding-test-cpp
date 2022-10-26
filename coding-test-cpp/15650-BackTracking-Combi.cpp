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
//int combi[9];
//int temp[9];
//
//void dfs(int cnt, int idx) {
//	if (cnt == m) {
//		for (int i = 0; i < m; i++) {
//			cout << temp[i] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//
//	for (int i = idx; i < n; i++) {
//		temp[cnt] = combi[i];
//		dfs(cnt + 1, i + 1);
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
//		combi[i] = i + 1;
//	}
//
//	dfs(0, 0);
//
//	return 0;
//}