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
//	//1칸 ~ s.size()/2 칸 검사
//	for (int i = 1; i <= (s.size() / 2) + 1; i++) {
//		map<string, int> m; //문자열 - 횟수
//		int cnt = 0; //가장 짧은 길이
//
//		//이전 문자열 비교 변수
//		string temp = s.substr(0, i);
//		m.insert({ s.substr(0, i), 1 });
//
//		//문자열 끊어서 분리
//		for (int j = i; j < s.size(); j += i) {
//			//이전 문자열과 일치한다면
//			if (temp == s.substr(j, i)) {
//				m[s.substr(j, i)]++;
//			}
//			else {
//				temp = s.substr(j, i);
//
//				//최초로 등장한 문자열이라면
//				if (m.count(s.substr(j, i)) == 0) {
//					m.insert({ s.substr(j, i), 1 });
//				}
//				//이전 문자열과 같은 게 아니라면
//				else {
//					cnt += temp.size(); //문자열 사이즈 cnt
//					continue;
//				}
//			}
//		}
//
//		for (const auto& e : m) {
//			// 한번만 나온 값 == 1, 때문에 숫자가 붙지 않음
//			if (e.second == 1) {
//				cnt += e.first.size();
//			}
//			//1이 아닌 값들은 숫자가 붙음 따라서 숫자를 문자열로 치환 후 사이즈 더 해주기
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