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
//int main() {
//	vector<int> v;
//	vector<int> two;
//
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		v.push_back(temp);
//	}
//
//	sort(v.begin(), v.end());
//
//	//n^2으로 두 개의 조합 벡터 만들기
//	for (int i = 0; i < n; i++) {
//		for (int j = i; j < n; j++) {
//			two.push_back(v[i] + v[j]);
//		}
//	}
//
//	sort(two.begin(), two.end());
//
//	for (int i = n - 1; i > 0; i--) {
//		for (int j = i - 1; j >= 0; j--) {
//			if (binary_search(two.begin(), two.end(), v[i] - v[j])) {
//				cout << v[i] << endl;
//				return 0;
//			}
//		}
//	}
//
//	return 0;
//}