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
//    long long answer = 0;
//    int n, l;
//    cin >> n >> l;
//
//    vector<pair<int, int>> v;
//
//    for (int i = 0; i < n; i++) {
//        int start, end;
//        cin >> start >> end;
//        v.push_back({ start, end });
//    }
//
//    sort(v.begin(), v.end());
//
//    int next = 0;
//    for (int i = 0; i < v.size(); i++) {
//        if (next < v[i].first) {
//            next = v[i].first;
//        }
//
//        while (next < v[i].second) {
//            next += l;
//            answer++;
//        }
//    }
//
//    
//    cout << answer << endl;
//
//    return 0;
//}