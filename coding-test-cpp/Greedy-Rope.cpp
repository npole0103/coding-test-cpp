//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int a[100001];
//
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//
//	sort(a, a + n);
//
//	int max = 0; //로프 최대 중량
//
//	for (int i = 0; i < n; i++) {
//		if (max < a[i] * (n - i)) {
//			max = a[i] * (n - i);
//		}
//	}
//
//	cout << max << endl;
//
//	return 0;
//}