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
//int solution(vector<vector<int>> land) {
//    int i = 0;
//    for (i = 0; i < land.size() - 1; i++) {
//        land[i + 1][0] += max({ land[i][1], land[i][2], land[i][3] });
//        land[i + 1][1] += max({ land[i][0], land[i][2], land[i][3] });
//        land[i + 1][2] += max({ land[i][1], land[i][0], land[i][3] });
//        land[i + 1][3] += max({ land[i][1], land[i][2], land[i][0] });
//    }
//
//    return max({ land[i][0], land[i][1], land[i][2], land[i][3] });
//}
//
////int solution(vector<vector<int>> land) {
////    int answer = 0;
////
////    for (int i = 1; i < land.size(); i++) {
////        land[i][0] += max(max(land[i - 1][1], land[i - 1][2]), land[i - 1][3]);
////        land[i][1] += max(max(land[i - 1][0], land[i - 1][2]), land[i - 1][3]);
////        land[i][2] += max(max(land[i - 1][1], land[i - 1][0]), land[i - 1][3]);
////        land[i][3] += max(max(land[i - 1][1], land[i - 1][2]), land[i - 1][0]);
////    }
////
////    answer = max(land[land.size() - 1][0], max(land[land.size() - 1][1], max(land[land.size() - 1][2], land[land.size() - 1][3])));
////
////    return answer;
////}
//
//int main() {
//
//    return 0;
//}