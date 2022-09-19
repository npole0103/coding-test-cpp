//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	
//	int n, k;
//	string s;
//
//	cin >> n >> k >> s;
//	vector<char> v;
//
//	for (int i = 0; i < s.size(); i++) {
//
//		//더 큰 수를 발견했다면 해당 수 앞 부분 전부 제거
//		while (!v.empty() && k != 0 && v.back() < s[i]) {
//			v.pop_back();
//			k--;
//		}
//
//		v.push_back(s[i]);
//	}
//
//	//남은 K개 만큼 지우기
//	while (k--) {
//		v.pop_back();
//	}
//
//	for (auto iter = v.begin() ; iter != v.end(); iter++) {
//		cout << *iter;
//	}
//	cout << endl;
//
//	return 0;
//}