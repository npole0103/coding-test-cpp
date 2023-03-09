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
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, k;
//	int cnt = 0;
//
//	cin >> n >> k;
//
//	vector<int> v(n + 1, 0);
//	vector<int> answer;
//
//	for (int i = 2; i <= n; i++) {
//		for (int j = i; j <= n; j += i) {
//			if (v[j] == 0) {
//				v[j] = 1;
//				answer.push_back(j);
//			}
//		}
//	}
//
//	cout << answer[k - 1] << endl;
//
//	return 0;
//}