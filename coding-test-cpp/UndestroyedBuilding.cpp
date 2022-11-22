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
//vector<vector<int>> tempBoard;
//int n = 0, m = 0;
//
//void useSkill(int type, int r1, int c1, int r2, int c2, int degree) {
//
//    degree = (type == 1 ? -degree : degree);
//
//    tempBoard[r1][c1] += degree;
//
//    int r3 = r2 + 1;
//    int c3 = c2 + 1;
//
//    if (r3 < n) {
//        tempBoard[r3][c1] += -degree;
//    }
//
//    if (c3 < m) {
//        tempBoard[r1][c3] += -degree;
//    }
//
//    if (r3 < n && c3 < m) {
//        tempBoard[r3][c3] += degree;
//    }
//}
//
//int getBuildings(vector<vector<int>>& board) {
//
//    //1. 임시 보드 누적합 구하기
//    for (int r = 0; r < n; r++) {
//        for (int c = 0; c < m - 1; c++) {
//            tempBoard[r][c + 1] += tempBoard[r][c];
//        }
//    }
//
//    for (int c = 0; c < m; c++) {
//        for (int r = 0; r < n - 1; r++) {
//            tempBoard[r + 1][c] += tempBoard[r][c];
//        }
//    }
//
//    //2. 누적합 원본 배열에 더하기
//    for (int r = 0; r < n; r++) {
//        for (int c = 0; c < m; c++) {
//            board[r][c] += tempBoard[r][c];
//        }
//    }
//
//    //3. 원본 배열 빌딩 수 계산
//    int cnt = 0;
//    for (int i = 0; i < n ; i++) {
//        for (int j = 0; j < m; j++) {
//            cnt += (board[i][j] > 0 ? 1 : 0);
//        }
//    }
//    
//    return cnt;
//}
//
//int solution(vector<vector<int>> board, vector<vector<int>> skill) {
//
//    n = board.size();
//    m = board[0].size();
//
//    vector<vector<int>> v(n, vector<int>(m, 0));
//    tempBoard = v;
//
//    for (const auto& e : skill) {
//        useSkill(e[0], e[1], e[2], e[3], e[4], e[5]);
//    }
//
//    return getBuildings(board);
//}
//
//int main() {
//
//    /*
//    (0, 0) -> (2, 1)
//
//    0 0 0
//    0 0 0
//    0 0 0
//
//    n 0 -n
//    0 0 0
//    0 0 0
//
//    n n 0
//    n n 0
//    n n 0
//    */
//    return 0;
//}