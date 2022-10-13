//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int parent[101]; //부모 배열
//
//int getParent(int x) {
//    if (parent[x] == x) {
//        return x;
//    }
//    else {
//        return parent[x] = getParent(parent[x]);
//    }
//}
//
//void unionParent(int a, int b) {
//    a = getParent(a);
//    b = getParent(b);
//    if (a < b) {
//        parent[b] = a;
//    }
//    else {
//        parent[a] = b;
//    }
//}
//
//bool cmp(vector<int> a, vector<int> b) {
//    return a[2] < b[2];
//}
//
//int solution(int n, vector<vector<int>> costs) {
//    int answer = 0;
//
//    sort(costs.begin(), costs.end(), cmp);
//
//    for (int i = 0; i < 101; i++) {
//        parent[i] = i;
//    }
//
//    for (const auto& e : costs) {
//        int a = getParent(e[0]);
//        int b = getParent(e[1]);
//        if (a == b) { //사이클이므로 고려하지 않음
//            continue;
//        }
//        else {
//            answer += e[2];
//            unionParent(a, b);
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//
//
//    return 0;
//}