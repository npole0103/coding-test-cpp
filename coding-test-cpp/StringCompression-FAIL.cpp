//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int solution(string s) {
//	int answer = 1e9;
//
//	//1ĭ ~ s.size()/2 ĭ �˻�
//	for (int i = 1; i <= (s.size() / 2) + 1; i++) {
//		map<string, int> m; //���ڿ� - Ƚ��
//		int cnt = 0; //���� ª�� ����
//
//		//���� ���ڿ� �� ����
//		string temp = s.substr(0, i);
//		m.insert({ s.substr(0, i), 1 });
//
//		//���ڿ� ��� �и�
//		for (int j = i; j < s.size(); j += i) {
//			//���� ���ڿ��� ��ġ�Ѵٸ�
//			if (temp == s.substr(j, i)) {
//				m[s.substr(j, i)]++;
//			}
//			else {
//				temp = s.substr(j, i);
//
//				//���ʷ� ������ ���ڿ��̶��
//				if (m.count(s.substr(j, i)) == 0) {
//					m.insert({ s.substr(j, i), 1 });
//				}
//				//���� ���ڿ��� ���� �� �ƴ϶��
//				else {
//					cnt += temp.size(); //���ڿ� ������ cnt
//					continue;
//				}
//			}
//		}
//
//		for (const auto& e : m) {
//			// �ѹ��� ���� �� == 1, ������ ���ڰ� ���� ����
//			if (e.second == 1) {
//				cnt += e.first.size();
//			}
//			//1�� �ƴ� ������ ���ڰ� ���� ���� ���ڸ� ���ڿ��� ġȯ �� ������ �� ���ֱ�
//			else {
//				cnt += to_string(e.second).size();
//				cnt += e.first.size();
//			}
//		}
//		answer = min(answer, cnt);
//	}
//
//	return answer;
//}
//
//int main() {
//
//	map<string, int> m;
//	m.insert({ "aa", 1 });
//	m.insert({ "bb", 9 });
//
//	cout << m.count("aa") << endl;
//	cout << m.count("bb") << endl;
//	cout << m.count("cc") << endl;
//
//	return 0;
//}