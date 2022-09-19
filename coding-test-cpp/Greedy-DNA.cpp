//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <map>
//using namespace std;
//
//vector<string> s;
//
//map<char, int> dnaMap;
//
//
//bool cmp(pair<char, int> a, pair<char, int> b) {
//	if (a.second == b.second) {
//		a.first < b.first;
//	}
//	return a.second > b.second;
//}
//
//int main() {
//
//	int n, m; //n 갯수, m 길이
//	cin >> n >> m;
//
//	string result = "";
//	int count = 0;
//
//	for (int i = 0; i < n; i++) {
//		string dna;
//		cin >> dna;
//		s.push_back(dna);
//	}
//
//	for (int i = 0; i < m; i++) { //길이
//		
//		for (int j = 0; j < n; j++) { //단어 순회
//			if (dnaMap.find(s[j][i]) != dnaMap.end()) {
//				dnaMap[s[j][i]]++;
//			}
//			else {
//				dnaMap.insert({ s[j][i], 1 });
//			}
//		}
//
//		vector<pair<char, int>> v(dnaMap.begin(), dnaMap.end());
//		sort(v.begin(), v.end(), cmp);
//
//		result += v.begin()->first;
//		count += n - v.begin()->second;
//
//		dnaMap.clear();
//	}
//
//	cout << result << endl;
//	cout << count << endl;
//
//	return 0;
//}