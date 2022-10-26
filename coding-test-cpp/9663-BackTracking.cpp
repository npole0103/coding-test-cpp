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
//int n;
//int answer = 0;
//int temp[16];
//int perm[16];
//
////같은 대각선인지 -> x1 - x2 == y1 - y2
////같은 열에 속해있는지 -> y1 == y2
//bool isPromising(int cnt) {
//
//	for (int i = 0; i < cnt; i++) {
//		if (temp[cnt] == temp[i] || abs(cnt - i) == abs(temp[cnt] - temp[i])) {
//			return false;
//		}
//	}
//
//	return true;
//}
//
//void dfs(int cnt) {
//	if (cnt == n) {
//		answer++;
//		return;
//	}
//
//	for (int i = 0; i < n; i++) {
//		temp[cnt] = perm[i];
//
//		if (isPromising(cnt)) {
//			dfs(cnt + 1);
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		perm[i] = i;
//	}
//
//	dfs(0);
//
//	cout << answer << endl;
//
//	return 0;
//}