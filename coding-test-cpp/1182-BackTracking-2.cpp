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
//int n, s;
//int arr[20];
//int answer = 0;
//
//void dfs(int cnt, int total) {
//    if (cnt == n) {
//        if (total == s) {
//            answer++;
//        }
//        return;
//    }
//
//    dfs(cnt + 1, total);
//    dfs(cnt + 1, total + arr[cnt]);
//}
//
//
//int main() {
//
//    cin >> n >> s;
//
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    dfs(0, 0);
//
//    cout << (s == 0 ? answer - 1 : answer) << endl;
//
//    return 0;
//}