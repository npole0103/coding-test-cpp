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
//vector<vector<int>> answer;
//
//void hanoi(int n, int from, int by, int to) {
//    //from - 출발지, by - 경유지, to - 목적지
//
//    if (n == 1) {
//        answer.push_back({ from, to });
//    }
//    else {
//        hanoi(n - 1, from, to, by);
//        answer.push_back({ from, to });
//        hanoi(n - 1, by, from, to);
//    }
//}
//
//vector<vector<int>> solution(int n) {
//
//    hanoi(n, 1, 2, 3);
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}