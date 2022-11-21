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
//vector<vector<int>> gBoard;
//
//void useSkill(int type, int r1, int c1, int r2, int c2, int degree) {
//    for (int i = r1; i <= r2; i++) {
//        for (int j = c1; j <= c2; j++) {
//            gBoard[i][j] += (type == 1 ? -degree : degree);
//        }
//    }
//}
//
//int getBuilding() {
//    int cnt = 0;
//
//    for (int i = 0; i < gBoard.size(); i++) {
//        for (int j = 0; j < gBoard[0].size(); j++) {
//            cnt += (gBoard[i][j] > 0 ? 1 : 0);
//        }
//    }
//    
//    return cnt;
//}
//
//int solution(vector<vector<int>> board, vector<vector<int>> skill) {
//    int answer = 0;
//
//    gBoard = board;
//
//    for (const auto& e : skill) {
//        useSkill(e[0], e[1], e[2], e[3], e[4], e[5]);
//    }
//
//    answer = getBuilding();
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}