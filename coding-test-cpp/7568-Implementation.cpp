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
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int rank = 1;
//    int num;
//    cin >> num;
//    
//    vector<pair<int, int>> v(num);
//
//    for (int i = 0; i < num; i++) {
//        cin >> v[i].first >> v[i].second;
//    }
//
//    for (int i = 0; i < num; i++) {
//        for (int j = 0; j < num; j++) {
//            if (v[i].first < v[j].first && v[i].second < v[j].second) {
//                rank++;
//            }
//        }
//        cout << rank << ' ';
//        rank = 1;
//    }
//
//    return 0;
//}