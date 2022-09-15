//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
//	if (a.second.first == b.second.first) { //성적이 같다면 생년월일 내림차순 2
//		return a.second.second > b.second.second;
//	}
//	else { //성적에 따라 내림차순 1
//		return a.second.first > b.second.first;
//	}
//}
//
//int main() {
//
//	vector<pair<string, pair<int, int>>> v;
//
//	v.push_back({ "김아무개", {96, 19980528} });
//	v.push_back({ "박아무개", {88, 19930101} });
//	v.push_back({ "이아무개", {56, 20021023} });
//	v.push_back({ "고아무개", {93, 20000404} });
//
//	sort(v.begin(), v.end(), compare);
//
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i].first << " " << v[i].second.first << endl;
//	}
//
//	return 0;
//}