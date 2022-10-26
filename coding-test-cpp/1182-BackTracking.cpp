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
//int combi[20]; //조합 원본
//int temp[20]; //임시 조합
//int sum = 0; //누적합
//int answer = 0; //정답 카운트
//
//void dfs(int cnt, int idx, int r) {
//    if (cnt == r) {
//        if (sum == s) {
//            answer++;
//        }
//        return;
//    }
//
//    for (int i = idx; i < n; i++) {
//        temp[cnt] = combi[i];
//
//        sum += temp[cnt];
//        dfs(cnt + 1, i + 1, r);
//        sum -= temp[cnt];
//    }
//}
//
//int main() {
//
//    cin >> n >> s;
//
//    for (int i = 0; i < n; i++) {
//        cin >> combi[i];
//    }
//
//    for (int i = 1; i <= n; i++) {
//        dfs(0, 0, i); //1개 ~ n개 뽑는 경우
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}