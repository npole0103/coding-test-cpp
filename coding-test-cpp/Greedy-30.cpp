//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int digit[10];
//
//int main() {
//	string n;
//	cin >> n;
//
//	int digitSum = 0;
//	bool isContainZero = false;
//
//	for (int i = 0; i < n.size(); i++) {
//		digitSum += n[i] - '0';
//		digit[n[i] - '0']++;
//
//		if (n[i] == '0') {
//			isContainZero = true;
//		}
//	}
//
//	if (isContainZero && digitSum % 3 == 0) {
//		for (int i = 9; i >= 0; i--) {
//			for (int j = 0; j < digit[i]; j++) {
//				cout << i;
//			}
//		}
//		cout << endl;
//	}
//	else {
//		cout << -1 << endl;
//	}
//}