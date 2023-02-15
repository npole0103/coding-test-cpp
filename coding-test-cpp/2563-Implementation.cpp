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
//vector<vector<int>> board(100, vector<int>(100, 0));
//
//void draw(int x, int y) {
//    for (int i = x; i < x + 10; i++) {
//        for(int j = y; j < y + 10; j++) {
//            board[i][j] = 1;
//        }
//    }
//}
//
//int countBoard() {
//    int cnt = 0;
//    for (int i = 0; i < 100; i++) {
//        for (int j = 0; j < 100; j++) {
//            if (board[i][j] == 1) {
//                cnt++;
//            }
//        }
//    }
//
//    return cnt;
//}
//
//int main() {
//
//    int n;
//    int x, y;
//
//    cin >> n;
//
//    while (n--) {
//        cin >> x >> y;
//        draw(x, y);
//    }
//
//    cout << countBoard() << endl;
//
//    return 0;
//}