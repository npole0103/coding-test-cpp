//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int line[11];
//
//int main() {
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int count;
//		cin >> count; //왼쪽에 있는 사람 수
//
//		for (int j = 1; j <= n; j++) {
//			if (count == 0 && line[j] == 0) { //카운트 모두 감소 + 빈 자리라면
//				line[j] = i; //자리에 착석
//				break;
//			}
//			
//			if (line[j] == 0) { //라인이
//				count--;
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		cout << line[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}