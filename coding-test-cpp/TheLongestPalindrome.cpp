//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//using namespace std;
//
//int solution(string s) {
//	int answer = 1;
//
//	//Ȧ���� �� i�� ������ �Ǵ� �ε���
//	for (int i = 0; i < s.size(); i++) {
//		//j�� �翷���� �þ�� ����
//		for (int j = 0; j < s.size() / 2 + 1; j++) {
//			if (0 <= i - j && i + j <= s.size() - 1) {
//				if (s[i - j] == s[i + j]) {
//					answer = max(answer, 1 + 2 * j);
//				}
//				else {
//					break;
//				}
//			}
//			else {
//				break;
//			}
//		}
//	}
//
//	//¦���� �� i�� ������ �Ǵ� �ε���
//	for (int i = 0; i < s.size(); i++) {
//		//j�� �翷���� �þ�� ����
//		for (int j = 0; j < s.size() / 2 + 1; j++) {
//			if (0 <= i - j && i + 1 + j <= s.size() - 1) {
//				if (s[i - j] == s[i + 1 + j]) {
//					answer = max(answer, 2 * (j + 1));
//				}
//				else {
//					break;
//				}
//			}
//			else {
//				break;
//			}
//		}
//	}
//
//	return answer;
//}
//
//int main() {
//
//	return 0;
//}