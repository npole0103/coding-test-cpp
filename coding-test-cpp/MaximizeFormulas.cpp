//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//vector<long long> num;
//vector<char> symbol;
//
//long long calExp(long long a, long long b, char symbol) {
//	switch (symbol)
//	{
//	case '+':
//		return a + b;
//	case '-':
//		return a - b;
//	case '*':
//		return a * b;
//	}
//}
//
//void extractChar(string s) {
//	string temp;
//
//	for (int i = 0; i < s.size(); i++) {
//		if ('0' <= s[i] && s[i] <= '9') {
//			temp += s[i];
//		}
//		else {
//			num.push_back(stoll(temp));
//			symbol.push_back(s[i]);
//			temp = "";
//		}
//	}
//	num.push_back(stoll(temp));
//}
//
//long long solution(string expression) {
//
//	vector<char> pSymbol({ '+', '-', '*' });
//	sort(pSymbol.begin(), pSymbol.end());
//
//	extractChar(expression);
//
//	long long maxNum = 0;
//
//	do
//	{
//		vector<long long> tempNum = num;
//		vector<char> tempSymbol = symbol;
//
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < tempSymbol.size(); ) {
//				cout << tempSymbol.size() << " ";
//				if (pSymbol[i] == tempSymbol[j]) {
//					long long result = calExp(tempNum[j], tempNum[j + 1], tempSymbol[j]);
//					tempSymbol.erase(tempSymbol.begin() + j); //해당 연산자 삭제
//					tempNum.erase(tempNum.begin() + j, tempNum.begin() + j + 2); //피연산자 2개 삭제
//					tempNum.insert(tempNum.begin() + j, result); //j번째에 연산된 결과값 저장
//				}
//				else {
//					j++; //tempNum을 지우지 않을 때만 증가
//				}
//			}
//			cout << endl;
//		}
//		maxNum = max(maxNum, abs(tempNum[0]));
//	} while (next_permutation(pSymbol.begin(), pSymbol.end()));
//
//	return maxNum;
//}
//
//int main() {
//
//	solution("100-200*300-500+20");
//
//    return 0;
//}