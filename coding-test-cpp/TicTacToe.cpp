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
//vector<string> gBoard;
//int bingoCntO = 0, bingoCntX = 0;
//int cntO = 0, cntX = 0;
//
//void updateBingo() {
//	for (int x = 0; x < 3; x++) {
//		//row
//		if (gBoard[x][0] != '.' && gBoard[x][0] == gBoard[x][1] && gBoard[x][1] == gBoard[x][2]) {
//			if (gBoard[x][0] == 'O') {
//				bingoCntO++;
//			}
//			else {
//				bingoCntX++;
//			}
//		}
//
//		//col
//		if (gBoard[0][x] != '.' && gBoard[0][x] == gBoard[1][x] && gBoard[1][x] == gBoard[2][x]) {
//			if (gBoard[0][x] == 'O') {
//				bingoCntO++;
//			}
//			else {
//				bingoCntX++;
//			}
//		}
//	}
//
//	//diagonal
//	if (gBoard[1][1] == 'O') {
//		if (gBoard[0][0] == gBoard[1][1] && gBoard[1][1] == gBoard[2][2]) {
//			bingoCntO++;
//		}
//		if (gBoard[0][2] == gBoard[1][1] && gBoard[1][1] == gBoard[2][0]) {
//			bingoCntO++;
//		}
//	}
//	else if (gBoard[1][1] == 'X') {
//		if (gBoard[0][0] == gBoard[1][1] && gBoard[1][1] == gBoard[2][2]) {
//			bingoCntX++;
//		}
//		if (gBoard[0][2] == gBoard[1][1] && gBoard[1][1] == gBoard[2][0]) {
//			bingoCntX++;
//		}
//	}
//
//	//cntOX
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (gBoard[i][j] == 'O') {
//				cntO++;
//			}
//			if (gBoard[i][j] == 'X') {
//				cntX++;
//			}
//		}
//	}
//}
//
//bool isPossible() {
//	//O가 이겼는데 X의 갯수가 O보다 더 많은 경우
//	if (bingoCntO > 0 && cntO <= cntX) {
//		return false;
//	}
//
//	//X가 이겼는데 X의 갯수가 O보다 더 적은 경우
//	if (bingoCntX > 0 && cntO > cntX) {
//		return false;
//	}
//
//	//선공 후공에 대한 갯수 체크
//	if (cntO < cntX || cntO > cntX + 1) {
//		return false;
//	}
//
//	//빙고에 성공한 줄이 2개보다 많은 경우 OXO, XOX, OXO 가능
//	if (bingoCntO + bingoCntX > 2) {
//		return false;
//	}
//
//	//O, X가 동시에 빙고를 성공한 경우
//	if (bingoCntO > 0 && bingoCntX > 0) {
//		return false;
//	}
//
//	return true;
//}
//
//int solution(vector<string> board) {
//	int answer = 1;
//
//	gBoard = board;
//
//	updateBingo();
//
//	answer = isPossible() ? 1 : 0;
//
//	return answer;
//}
//
//int main() {
//
//	vector<pair<vector<string>, bool>> data_set = {
//	{{"OXO", "XOX", "OXO"}, true},
//	{{"OOX", "XXO", "OOX"}, true},
//	{{"XXX", ".OO", "O.."}, true},
//	{{"OX.", ".O.", ".XO"}, true},
//	{{"...", "...", ".O."}, true},
//	{{"X.X", "X.O", "O.O"}, true},
//	{{"XO.", "OXO", "XOX"}, true},
//	{{"OOO", "XOX", "XXO"}, true},
//	{{"OOO", "XOX", "X.X"}, false},
//	{{"XXX", "OO.", "OO."}, false},
//	{{".X.", "...", "..."}, false},
//	{{".X.", "X..", ".O."}, false},
//	{{"XOX", "OXO", "XOX"}, false},
//	{{"XXX", "XOO", "OOO"}, false},
//	{{"OOX", "OXO", "XOO"}, false},
//	{{"OOX", "OXO", "XOX"}, false},
//	{{".OX", "OXO", "XO."}, false},
//	{{"OOO", "XX.", "X.."}, false},
//	};
//
//	for (int i = 0; i < data_set.size(); i++) {
//		cout << (solution(data_set[i].first) == data_set[i].second) << endl;
//		cntX = 0, cntO = 0, bingoCntO = 0, bingoCntX = 0;
//	}
//
//	return 0;
//}
//
///*
//XXX
//.OO
//O..
//
//OXO
//XOX
//OXO
//*/