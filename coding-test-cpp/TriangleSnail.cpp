//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//void dfs(vector<vector<int>>& v, int x, int y, int n, int& cnt) {
//    if (n <= 1) {
//        if (n == 1) {
//            v[x][y] = cnt;
//        }
//        return;
//    }
//
//    //상 -> 하
//    for (int i = x; i < x + n; i++) {
//        v[i][y] = cnt++;
//    }
//
//    //대각 테두리
//    for (int i = x + n - 2, j = y + 1 ; i > x && j < y + n - 1; i--, j++) {
//        v[i][j] = cnt++;
//    }
//
//    //우->좌
//    for (int j = y + n - 1; j > y; j--) {
//        v[x][j] = cnt++;
//    }
//
//    dfs(v, x + 1, y + 1, n - 3, cnt);
//}
//
//vector<int> solution(int n) {
//    vector<int> answer;
//
//    vector<vector<int>> v(n, vector<int>(n, 0));
//
//    int cnt = 1;
//
//    dfs(v, 0, 0, n, cnt);
//
//    for (int k = 0; k < n; k++) {
//        for (int i = k, j = 0; i >= 0 && j <= k; i--, j++) {
//            answer.push_back(v[i][j]);
//        }
//    }
//
//
//    //for (int i = 0; i < n; i++) {
//    //    for (int j = 0; j < n; j++) {
//    //        cout << v[i][j] << " ";
//    //    }
//    //    cout << endl;
//    //}
//
//    ////대각 순회 show
//    //for (int k = 0; k < n; k++) {
//    //    for (int i = k, j = 0; i >= 0 && j <= k; i--, j++) {
//    //        cout << v[i][j] << " ";
//    //    }
//    //}
//    //cout << endl;
//
//    //for (const auto& e : answer) {
//    //    cout << e << " ";
//    //}
//    //cout << endl;
//
//    return answer;
//}
//
//int main() {
//
//    solution(4);
//
//    return 0;
//}