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
//int n, m, k;
//int r, c;
//int paper[42][42];
//int sticker[12][12];
//
//bool pastable(int x, int y) {
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            //paper와 sticker가 겹친다면?
//            if (paper[x + i][y + j] == 1 && sticker[i][j] == 1) {
//                return false;
//            }
//        }
//    }
//
//    //겹치지 않는다면 스티커 paper에 붙이고 true 반환
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            if (sticker[i][j] == 1) {
//                paper[x + i][y + j] = 1;
//            }
//        }
//    }
//
//    return true;
//}
//
//void rotate() {
//    int temp[12][12];
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            temp[i][j] = sticker[i][j];
//        }
//    }
//    for (int i = 0; i < c; i++) {
//        for (int j = 0; j < r; j++) {
//            sticker[i][j] = temp[r - 1 - j][i];
//        }
//    }
//    swap(r, c);
//}
//
//int getFills() {
//    int cnt = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cnt += paper[i][j];
//        }
//    }
//    return cnt;
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> n >> m >> k;
//
//    while (k--) {
//        cin >> r >> c;
//        
//        for (int i = 0; i < r; i++) {
//            for (int j = 0; j < c; j++) {
//                cin >> sticker[i][j];
//            }
//        }
//
//        //회전 0 90 180 270
//        for (int rot = 0; rot < 4; rot++) {
//            bool isPaste = false;
//
//            for (int x = 0; x <= n - r; x++) {
//                if (isPaste) {
//                    break;
//                }
//
//                for (int y = 0; y <= m - c; y++) {
//                    if (pastable(x, y)) {
//                        isPaste = true;
//                        break;
//                    }
//                }
//            }
//            if (isPaste) {
//                break;
//            }
//            rotate();
//        }
//    }
//
//    cout << getFills() << endl;
//
//    return 0;
//}