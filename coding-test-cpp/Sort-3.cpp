//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
//	if (a.second.first == b.second.first) { //������ ���ٸ� ������� �������� 2
//		return a.second.second > b.second.second;
//	}
//	else { //������ ���� �������� 1
//		return a.second.first > b.second.first;
//	}
//}
//
//int main() {
//
//	vector<pair<string, pair<int, int>>> v;
//
//	v.push_back({ "��ƹ���", {96, 19980528} });
//	v.push_back({ "�ھƹ���", {88, 19930101} });
//	v.push_back({ "�̾ƹ���", {56, 20021023} });
//	v.push_back({ "��ƹ���", {93, 20000404} });
//
//	sort(v.begin(), v.end(), compare);
//
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i].first << " " << v[i].second.first << endl;
//	}
//
//	return 0;
//}