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
//int perm[13];
//int temp[13];
//int gN = 0;
//int answer = 0;
//
//bool isPromising(int row) {
//
//    for (int i = 1; i < row; i++) {
//        if (temp[row] == temp[i] || abs(row - i) == abs(temp[row] - temp[i])) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//void dfs(int cnt) {
//    if (cnt == gN + 1) {
//        answer++;
//        return;
//    }
//
//    for (int i = 1; i <= gN; i++) {
//        temp[cnt] = perm[i];
//        if (isPromising(cnt)) {
//            dfs(cnt + 1);
//        }
//    }
//}
//
//int solution(int n) {
//    gN = n;
//
//    for (int i = 1; i <= gN; i++) {
//        perm[i] = i;
//    }
//
//    dfs(1);
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}