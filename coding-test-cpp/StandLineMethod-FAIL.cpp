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
//vector<int> answer;
//vector<int> perm;
//vector<int> temp;
//vector<int> visited;
//int gN = 0;
//int gK = 0;
//int tempK = 0;
//
//void dfs(int cnt) {
//    if (cnt == gN) {
//        tempK++;
//
//        if (tempK == gK) {
//            for (int i = 0; i < gN; i++) {
//                answer.push_back(temp[i]);
//            }
//        }
//        return;
//    }
//
//    for (int i = 0; i < gN; i++) {
//        if (!visited[i] && tempK != gK) {
//            temp[cnt] = perm[i];
//            visited[i] = true;
//            dfs(cnt + 1);
//            visited[i] = false;
//        }
//    }
//}
//
//vector<int> solution(int n, long long k) {
//    int cnt = 0;
//    gN = n;
//    gK = k;
//
//    for (int i = 0; i < n; i++) {
//        perm.push_back(i + 1);
//    }
//    temp.resize(n, 0);
//    visited.resize(n, 0);
//
//    dfs(0);
//
//    return temp;
//}
//
//int main() {
//
//    return 0;
//}