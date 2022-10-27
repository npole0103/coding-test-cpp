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
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    if (a.second == b.second) {
//        return a.first < b.first;
//    }
//    return a.second < b.second;
//}
//
//int main() {
//    int answer = 0;
//
//    int num;
//    cin >> num;
//    vector<pair<int, int>> v(num, { 0, 0 });
//
//    for (int i = 0; i < num; i++) {
//        int start, end;
//        cin >> start >> end;
//        v[i] = { start, end };
//    }
//    sort(v.begin(), v.end(), cmp);
//
//    int start = 0;
//    for (int i = 0; i < num; i++) {
//        if (start <= v[i].first) {
//            start = v[i].second;
//            answer++;
//        }
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}