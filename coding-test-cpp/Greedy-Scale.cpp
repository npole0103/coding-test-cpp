//#include <iostream> //https://zzang9ha.tistory.com/124
//#include <algorithm> //https://aerocode.net/392
//using namespace std;
//
//int a[1001];
//
//int main() {
//	int n;
//	cin >> n;
//
//	int acc = 1;
//
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//
//	sort(a, a + n);
//
//	for (int i = 0; i < n; i++) {
//		if (acc < a[i]) { //누적값 보다 추 무게가 크다면 
//			break;
//		}
//		acc += a[i];
//	}
//
//	cout << acc << endl;
//
//	return 0;
//}