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
//vector<vector<int>> colBoard;
//vector<vector<int>> damBoard;
//vector<vector<int>> answer;
//int gN = 0;
//
//bool isRange(int x, int y) {
//    if (x < 0 || y < 0 || x > gN || y > gN) {
//        return false;
//    }
//    return true;
//}
//
//bool isInstalledCol(int x, int y) {
//    //바닥이거나, 다른 기둥 위에
//    if (y == 0 || (isRange(x, y - 1) && colBoard[x][y - 1])) {
//        return true;
//    }
//
//    //보의 한쪽 끝 부분 위에 있거나 - 왼쪽 + 오른쪽
//    if ((isRange(x - 1, y) && damBoard[x - 1][y]) || damBoard[x][y]) {
//        return true;
//    }
//
//    return false;
//}
//
//bool isInstalledDam(int x, int y) {
//    //한쪽 끝 부분이 기둥 위에 있거나 - 왼쪽 + 오른쪽
//    if ((isRange(x, y - 1) && colBoard[x][y - 1]) || (isRange(x + 1, y - 1) && colBoard[x + 1][y - 1])) {
//        return true;
//    }
//
//    //양쪽 끝 부분이 다른 보와 동시에 연결
//    if ((isRange(x - 1, y) && damBoard[x - 1][y]) && (isRange(x + 1, y) && damBoard[x + 1][y])) {
//        return true;
//    }
//
//    return false;
//}
//
//bool cmp(vector<int> a, vector<int> b) {
//    if (a[0] == b[0]) {
//        if (a[1] == b[1]) {
//            return a[2] < b[2];
//        }
//        return a[1] < b[1];
//    }
//    return a[0] < b[0];
//}
//
//bool isRight() {
//    //기둥이 올바른지
//    for (int i = 0; i <= gN; i++) {
//        for (int j = 0; j <= gN; j++) {
//            if (colBoard[i][j] && !isInstalledCol(i, j)) {
//                return false;
//            }
//        }
//    }
//
//    //보가 올바른지
//    for (int i = 0; i <= gN; i++) {
//        for (int j = 0; j <= gN; j++) {
//            if (damBoard[i][j] && !isInstalledDam(i, j)) {
//                return false;
//            }
//        }
//    }
//
//    return true;
//}
//
//vector<vector<int>> solution(int n, vector<vector<int>> build_frame) {
//
//    colBoard.resize(n + 1, vector<int>(n + 1, 0));
//    damBoard.resize(n + 1, vector<int>(n + 1, 0));
//    gN = n;
//
//    for (const auto& bf : build_frame) {
//        //기둥
//        if (bf[2] == 0) {
//            //삭제
//            if (bf[3] == 0) {
//                colBoard[bf[0]][bf[1]] = 0;
//                if (!isRight()) {
//                    colBoard[bf[0]][bf[1]] = 1;
//                }
//            }
//            //설치
//            else if(bf[3] == 1 && isInstalledCol(bf[0], bf[1])){
//                colBoard[bf[0]][bf[1]] = 1;
//            }
//        }
//        //보
//        else {
//            //삭제
//            if (bf[3] == 0) {
//                damBoard[bf[0]][bf[1]] = 0;
//                if (!isRight()) {
//                    damBoard[bf[0]][bf[1]] = 1;
//                }
//            }
//            //설치
//            else if (bf[3] == 1 && isInstalledDam(bf[0], bf[1])){
//                damBoard[bf[0]][bf[1]] = 1;
//            }
//        }
//    }
//
//    //설치된 좌표 추출
//    for (int i = 0; i <= n; i++) {
//        for (int j = 0; j <= n; j++) {
//            if (colBoard[i][j] == 1) {
//                //기둥
//                answer.push_back({ i, j, 0 });
//            }
//            if (damBoard[i][j] == 1){
//                //보
//                answer.push_back({ i, j, 1 });
//            }
//        }
//    }
//
//    //정렬
//    sort(answer.begin(), answer.end(), cmp);
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    * 2차원 가상 벽면에 길이가 1인 선분으로 표현
//    */
//
//    /*
//    0 0 0 0 0 0 
//    0 0 0 0 0 0
//    0 0 0 0 0 0
//    0 0 2 2 2 0
//    0 2 1 0 0 1
//    0 1 0 0 0 1
//    */
//    return 0;
//}