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
//int main() {
//
//    int answer = 0;
//    vector<int> minM;
//
//    int n, m;
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        int p, l;
//        cin >> p >> l;
//        vector<int> v(p);
//
//        for (int i = 0; i < p; i++) {
//            cin >> v[i];
//        }
//        sort(v.begin(), v.end(), greater<>());
//
//        if (p < l) {
//            minM.push_back(1);
//        }
//        else {
//            minM.push_back(v[l - 1]);
//        }
//    }
//
//    sort(minM.begin(), minM.end());
//
//    int total = 0;
//    for (const auto& e : minM) {
//        if (total + e <= m) {
//            total += e;
//            answer++;
//        }
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}