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
//bool checkDirect(vector<string>& board, int i, int j) {
//    if (board[(i + 1) % 3][j] == board[i][j] && board[i][j] == board[(i + 2) % 3][j]) {
//        return true;
//    }
//
//    if (board[i][(j + 1) % 3] == board[i][j] && board[i][j] == board[i][(j + 2) % 3]) {
//        return true;
//    }
//
//    if (i == 1 && j == 1) {
//        if (board[i - 1][j - 1] == board[i][j] && board[i][j] == board[i + 1][j + 1]) {
//            return true;
//        }
//        if (board[i + 1][j - 1] == board[i][j] && board[i][j] == board[i - 1][j + 1]) {
//            return true;
//        }
//    }
//
//    return false;
//}
//
////O X 갯수 체크 메소드 - O X 가 나올 수 없는 판이면 0
//int checkCountOX(vector<string>& board) {
//    int numO = 0, numX = 0;
//    for (int i = 0; i < board.size(); i++) {
//        for (int j = 0; j < board[0].size(); j++) {
//            if (board[i][j] == 'O') {
//                numO++;
//            }
//            if (board[i][j] == 'X') {
//                numX++;
//            }
//        }
//    }
//
//    if (numO == numX) {
//        return 1;
//    }
//    else if (numO == numX + 1) {
//        return 2;
//    }
//    else {
//        return 0;
//    }
//}
//
////승리 조건 체크 메소드 - 잘못된 조건이라면 false
//bool checkWinCondition(vector<string>& board) {
//    int bingoCntO = 0;
//    int bingoCntX = 0;
//
//    for (int i = 0; i < board.size(); i++) {
//        for (int j = 0; j < board[0].size(); j++) {
//            if (board[i][j] == 'O') {
//                bingoCntO += checkDirect(board, i, j) ? 1 : 0;
//            }
//
//            if (board[i][j] == 'X') {
//                bingoCntX += checkDirect(board, i, j) ? 1 : 0;
//            }
//        }
//    }
//
//    if (bingoCntO > 1 || bingoCntX > 1) {
//        return false;
//    }
//    else if (bingoCntO >= 1 && bingoCntX >= 1) {
//        return false;
//    }
//    else if (bingoCntO == 1 && (checkCountOX(board) != 2)) {
//        return false;
//    }
//    else if (bingoCntX == 1 && (checkCountOX(board) != 1)) {
//        return false;
//    }
//    else {
//        return true;
//    }
//}
//
//int solution(vector<string> board) {
//    int answer = 1;
//
//    if (!checkWinCondition(board) || !checkCountOX(board)) {
//        answer = 0;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    vector<pair<vector<string>, bool>> data_set = {
//    {{"OXO", "XOX", "OXO"}, true},
//    {{"OOX", "XXO", "OOX"}, true},
//    {{"XXX", ".OO", "O.."}, true},
//    {{"OX.", ".O.", ".XO"}, true},
//    {{"...", "...", ".O."}, true},
//    {{"X.X", "X.O", "O.O"}, true},
//    {{"XO.", "OXO", "XOX"}, true},
//    {{"OOO", "XOX", "XXO"}, true},
//    {{"OOO", "XOX", "X.X"}, false},
//    {{"XXX", "OO.", "OO."}, false},
//    {{".X.", "...", "..."}, false},
//    {{".X.", "X..", ".O."}, false},
//    {{"XOX", "OXO", "XOX"}, false},
//    {{"XXX", "XOO", "OOO"}, false},
//    {{"OOX", "OXO", "XOO"}, false},
//    {{"OOX", "OXO", "XOX"}, false},
//    {{".OX", "OXO", "XO."}, false},
//    {{"OOO", "XX.", "X.."}, false},
//    };
//    for (int i = 0; i < data_set.size(); i++) {
//        cout << (solution(data_set[i].first) == data_set[i].second) << endl;
//    }
//
//    return 0;
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