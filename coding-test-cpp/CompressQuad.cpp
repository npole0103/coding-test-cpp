//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int trueCnt = 0, falseCnt = 0;
//
//void dfs(vector<vector<int>>& arr, int x, int y, int n) {
//
//    int tempTrueCnt = 0, tempFalseCnt = 0;
//
//    for (int i = x; i < x + n; i++) {
//        for (int j = y; j < y + n; j++) {
//            if (arr[i][j] == 0) {
//                tempFalseCnt++;
//            }
//            else {
//                tempTrueCnt++;
//            }
//        }
//    }
//
//    if (tempFalseCnt == n * n) {
//        falseCnt += 1;
//    }
//    else if (tempTrueCnt == n * n) {
//        trueCnt += 1;
//    }
//    else {
//        dfs(arr, x, y, n / 2);
//        dfs(arr, x, y + n / 2, n / 2);
//        dfs(arr, x + n / 2, y, n / 2);
//        dfs(arr, x + n / 2, y + n / 2, n / 2);
//    }
//}
//
//vector<int> solution(vector<vector<int>> arr) {
//    vector<int> answer;
//
//    int n = arr[0].size();
//    dfs(arr, 0, 0, n);
//
//    answer.push_back(falseCnt);
//    answer.push_back(trueCnt);
//
//    return answer;
//}
//
//int main() {
//
//    vector<vector<int>> arr({ {1,1,0,0}, {1,0,0,0}, {1,0,0,1}, {1,1,1,1} });
//
//    //for (int i = 0; i < 4; i++) {
//    //    for (int j = 0; j < 4; j++) {
//    //        cout << arr[i][j] << " ";
//    //    }
//    //    cout << endl;
//    //}
//
//    solution(arr);
//
//    return 0;
//}