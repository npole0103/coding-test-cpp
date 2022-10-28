//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
//int countBit(string s, char type) {
//	int cnt = 0;
//	for (const auto& e : s) {
//		if (e == type) {
//			cnt++;
//		}
//	}
//	return cnt;
//}
//
//string decToBit(int n) {
//	string temp;
//	if (n == 0) {
//		return "0";
//	}
//	while (n != 0) {
//		temp += to_string(n % 2);
//		n /= 2;
//	}
//	reverse(temp.begin(), temp.end());
//	return temp;
//}
//
//vector<int> solution(string s) {
//	vector<int> answer;
//
//	int num = 0, zeroCnt = 0, cnt = 0;
//
//	while (num != 1) {
//		num = countBit(s, '1');
//		zeroCnt += countBit(s, '0');
//
//		s = decToBit(num);
//
//		cnt++;
//	}
//	answer.push_back(cnt);
//	answer.push_back(zeroCnt);
//
//	return answer;
//}
//
//int main() {
//
//	return 0;
//}