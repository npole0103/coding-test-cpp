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
//
////dp[i][k] : 1��°���� i��° ���Ǳ��� ������� ��, ���� �� �ִ� ���� �ִ� ��ġ ����
//int n, k;
//int w[101];
//int v[101];
//int dp[101][100001];
//
//int main() {
//    cin >> n >> k;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> w[i] >> v[i];
//    }
//
//    //dp
//    for (int limit = 1; limit <= k; limit++) { //����
//        for (int row = 1; row <= n; row++) { //������ ��ġ
//            //���� �� ���� ��� : ���� ���غ��� ���� �����ٸ�
//            if (w[row] > limit) {
//                dp[row][limit] = dp[row - 1][limit];
//            }
//            //���� �� �ִ� ���
//            else {
//                dp[row][limit] = max(dp[row - 1][limit - w[row]] + v[row], dp[row - 1][limit]);
//            }
//        }
//    }
//
//    cout << dp[n][k] << endl;
//
//    return 0;
//}