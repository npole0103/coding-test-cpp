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
//int parent[101];
//
//int getParent(int x) {
//    if (parent[x] == x) {
//        return x;
//    }
//    return parent[x] = getParent(parent[x]);
//}
//
//void unionParent(int a, int b) {
//    a = getParent(a);
//    b = getParent(b);
//
//    if (a == b) {
//        return;
//    }
//
//    if (a < b) {
//        parent[b] = a;
//    }
//    else {
//        parent[a] = b;
//    }
//}
//
//int solution(int n, vector<vector<int>> wires) {
//    int answer = 1e9;
//
//    for (int i = 0; i < wires.size(); i++) {
//
//        for (int j = 1; j <= n; j++) {
//            parent[j] = j;
//        }
//
//        for (int j = 0; j < wires.size(); j++) {
//            if (i == j) {
//                continue;
//            }
//            unionParent(wires[j][0], wires[j][1]);
//        }
//
//        //1번 노드와 연결된 것 구함
//        int cnt = 0;
//        for (int j = 1; j <= n; j++) {
//            if (getParent(parent[j]) == 1) {
//                cnt++;
//            }
//        }
//        answer = min(answer, abs((n - cnt) - cnt));
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}