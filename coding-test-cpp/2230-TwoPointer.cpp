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
//    vector<int> v;
//    int n, m;
//    cin >> n >> m;
//
//    int answer = 2100000000;
//
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        v.push_back(temp);
//    }
//
//    sort(v.begin(), v.end());
//
//    int end = 0;
//    for (int start = 0; start < n; start++) {
//        while (end < n && v[end] - v[start] < m) {
//            end++;
//        }
//
//        if (end == n) {
//            break;
//        }
//
//        answer = min(answer, v[end] - v[start]);
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}