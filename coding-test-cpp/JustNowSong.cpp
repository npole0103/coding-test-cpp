//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <sstream>
//using namespace std;
//
//map<string, char> m = { 
//	{"C#", 'c'}, {"D#", 'd'}, {"E#", 'e'}, {"G#", 'g'}, {"A#", 'a'}, {"B#", 'b'}
//};
//
//int getMin(string start, string end) {
//
//	int hour = stoi(end.substr(0, 2)) - stoi(start.substr(0, 2));
//	int min = stoi(end.substr(3, 2)) - stoi(start.substr(3, 2));
//
//	return (hour * 60) + min;
//}
//
//string getFullSong(int min, string part) {
//	string fullSong;
//
//	int size = part.size();
//	for (int i = 0; i < min; i++) {
//		fullSong += part[i % size];
//	}
//
//	return fullSong;
//}
//
//string exceptSharp(string s) {
//	// C# -> c / D# -> d / E# -> e / G# -> g / A# -> a / B# -> b
//	string song;
//
//	for (int i = 0; i < s.size(); i++) {
//		if (i < s.size() - 1 && s[i + 1] == '#') {
//			string temp;
//			temp += s[i]; 
//			temp += s[i + 1];
//			song += m[temp];
//			i++;
//		}
//		else {
//			song += s[i];
//		}
//	}
//
//	return song;
//}
//
//bool cmp(pair<int, string> a, pair<int, string> b) {
//	return a.first > b.first;
//}
//
//string solution(string m, vector<string> musicinfos) {
//	string answer = "(None)";
//
//	vector<pair<int, string>> v; //min - name
//
//	for (const auto& e : musicinfos) {
//
//		vector<string> infos;
//		istringstream iss(e);
//		string temp;
//
//		while (getline(iss, temp, ',')) {
//			infos.push_back(temp);
//		}
//
//		int min = getMin(infos[0], infos[1]);
//		string name = infos[2];
//		string fullSong = getFullSong(min, exceptSharp(infos[3]));
//
//		auto it = fullSong.find(exceptSharp(m));
//
//		if (0 <= it && it < fullSong.size()) {
//			v.push_back({ min, name });
//		}
//	}
//
//	if (!v.empty()) {
//		stable_sort(v.begin(), v.end(), cmp);
//		return v[0].second;
//	}
//
//	return answer;
//}
//
//int main() {
//
//	// 27 28
//
//	string a = "aabbascasc";
//
//	cout << a.find("bbaa1") << endl;
//
//	string b = "CDEFGAB";
//
//	for (int i = 0; i < 14; i++) {
//		cout << b[i % 7] << endl;
//	}
//
//	return 0;
//}