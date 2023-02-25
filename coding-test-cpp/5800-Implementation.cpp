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
//void showInfo(int idx, vector<int>& v) {
//    cout << "Class " << idx << endl;
//    int maxE = *max_element(v.begin(), v.end());
//    int minE = *min_element(v.begin(), v.end());
//    int gap = 0;
//    sort(v.begin(), v.end());
//    for (int i = 1; i < v.size(); i++) {
//        gap = max(gap, abs(v[i - 1] - v[i]));
//    }
//    cout << "Max " << maxE << ", Min " << minE << ", Largest gap " << gap << endl;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int cnt;
//    cin >> cnt;
//
//    vector<vector<int>> v(cnt);
//
//    for (int i = 0; i < cnt; i++) {
//        int n;
//        cin >> n;
//        for (int j = 0; j < n; j++) {
//            int temp;
//            cin >> temp;
//            v[i].push_back(temp);
//        }
//    }
//
//    for (int i = 0; i < v.size(); i++) {
//        showInfo(i + 1, v[i]);
//    }
//
//    return 0;
//}