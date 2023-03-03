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
//int solution(int n, int m, vector<int> section) {
//    int answer = 0;
//
//    vector<int> wall(n, 1);
//
//    for (int sec : section) {
//        wall[sec - 1] = 0;
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (wall[i] == 0) {
//            i += m - 1;
//            answer++;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}