//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int number = 100000;
//int a[100001];
//
//void primeNumberSieve() {
//	for (int i = 2; i <= number; i++) {
//		a[i] = i;
//	}
//
//	for (int i = 2; i <= number; i++) {
//		if (a[i] == 0) {
//			continue; //배수인 것이므로 넘김
//		}
//		for (int j = i + i; j <= number; j += i) {
//			a[j] = 0;
//		}
//	}
//
//	for (int i = 2; i <= number; i++) {
//		if (a[i] != 0) {
//			cout << a[i] << " ";
//		}
//	}
//}
//
//int main() {
//
//	primeNumberSieve();
//
//	return 0;
//}