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
//		//�� ū ���� �߰��ߴٸ� �ش� �� �� �κ� ���� ����
//		while (!v.empty() && k != 0 && v.back() < s[i]) {
//			v.pop_back();
//			k--;
//		}
//
//		v.push_back(s[i]);
//	}
//
//	//���� K�� ��ŭ �����
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