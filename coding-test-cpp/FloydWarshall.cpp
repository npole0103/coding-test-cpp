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
//const int n = 4; //��� 4��
//int INF = 1e9;
//
//int a[4][4] = {
//    {0, 5, INF, 8},
//    {7, 0, 9, INF},
//    {2, INF, 0, 4},
//    {INF, INF, 3, 0}
//};
//
//void floydWarshall() {
//    //��� �迭 �ʱ�ȭ
//    int d[n][n];
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            d[i][j] = a[i][j];
//        }
//    }
//
//    // k�� ���İ��� ���
//    for (int k = 0; k < n; k++) {
//        // i�� ��� ���
//        for (int i = 0; i < n; i++) {
//            //j�� ���� ���
//            for (int j = 0; j < n; j++) {
//                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//            }
//        }
//    }
//
//    //����� ���
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << d[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//
//    floydWarshall();
//
//    /*
//    0 5 11 8
//    7 0 9 13
//    2 7 0 4
//    5 10 3 0
//    */
//
//    return 0;
//}