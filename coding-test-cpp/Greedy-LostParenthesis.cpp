//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main() {
//
//	string s;
//	cin >> s;
//
//	string temp = "";
//	int sum = 0;
//	bool minusMode = false;
//
//	for (int i = 0; i <= s.size(); i++) {
//		
//		if (s[i] == '-' || s[i] == '+' || s[i] == '\0') {
//			sum += (minusMode == true) ? -stoi(temp) : stoi(temp);
//			temp = "";
//
//			if (s[i] == '-') {
//				minusMode = true;
//			}
//			continue;
//		}
//		temp += s[i];
//	}
//
//	cout << sum << endl;
//
//	return 0;
//}