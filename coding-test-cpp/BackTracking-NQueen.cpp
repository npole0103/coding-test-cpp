//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int cnt = 0;
//int chess[15]; //chess[1] = 2 <- 1행의 2열
//
//bool isPromising(int row) {
//	//현재 행 이전 좌표 i에 대해 검사
//	for (int i = 0; i < row; i++) {
//		//같은 열이거나, 좌표 절대값이 같으면(대각선)
//		if (chess[row] == chess[i] || abs(row - i) == abs(chess[row] - chess[i])) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void nQueen(int row) {
//
//	//마지막 행검사까지 통과한 상태라면 ex) n=4 0,1,2,3 에서 3 + 1 == 4인 상황
//	if (row == n) {
//		cnt++;
//		return;
//	}
//	//모든 경우의 수
//	else {
//		//현재 행에서 모든 열 검사
//		for (int col = 0; col < n; col++) {
//			//열을 하나씩 올리면서 반복 검사
//			chess[row] = col;
//
//			//현재 행, 열 위치가 퀸의 위치로 문제가 없다면 다음 행 검사
//			if (isPromising(row)) {
//				nQueen(row + 1);
//			}
//		}
//	}
//}
//
//int main() {
//
//	cin >> n;
//
//	nQueen(0);
//
//	cout << cnt << endl;
//
//	return 0;
//}