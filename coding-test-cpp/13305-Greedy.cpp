//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<long long> node;
//    vector<long long> edge;
//    long long money = 0;
//
//    for (int i = 0; i < n - 1; i++) {
//        int temp;
//        cin >> temp;
//        node.push_back(temp);
//    }
//
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        edge.push_back(temp);
//    }
//
//    long long minEdge = 1000000000;
//    for (int i = 0; i < edge.size() - 1; i++) {
//        minEdge = min(minEdge, edge[i]);
//        money += minEdge * node[i];
//    }
//
//    cout << money << endl;
//
//    return 0;
//}