//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
////중복 순열
//int pSymbol[2] = { 0, 1 }; // 0-Minus, 1-Plus
//int symbol[21];
//
//int answer = 0;
//int n = 0;
//int targetNum = 0;
//vector<int> num;
//
//void dfs(int cnt) {
//
//    if (cnt == n) {
//        int temp = 0;
//
//        for (int i = 0; i < n; i++) {
//            temp += (symbol[i] == 0 ? -num[i] : num[i]);
//        }
//
//        if (temp == targetNum) {
//            answer++;
//        }
//
//        return;
//    }
//
//    for (int i = 0; i < 2; i++) {
//        symbol[cnt] = pSymbol[i];
//        dfs(cnt + 1);
//    }
//}
//
//int solution(vector<int> numbers, int target) {
//
//    n = numbers.size();
//    targetNum = target;
//    num = numbers;
//
//    dfs(0);
//
//    return answer;
//}
//
//int main() {
//
//    vector<int> v1({ 1,1,1,1,1 });
//    vector<int> v3 = v1;
//    cout << v1.size() << " " << v3.size() << endl;
//    v1.clear();
//    cout << v1.size() << " " << v3.size() << endl;
//
//    cout << solution(v1, 3) << endl;
//
//    vector<int> v2({ 4,1,2,1 });
//    cout << solution(v2, 4) << endl;
//
//    return 0;
//}