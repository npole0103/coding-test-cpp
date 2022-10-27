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
//
//    int n;
//    cin >> n;
//    vector<int> v(n, 0);
//    
//    for (int i = 0; i < n; i++) {
//        cin >> v[i];
//    }
//    sort(v.begin(), v.end());
//
//    for (int i = 1; i <= n; i++) {
//        answer = max(answer, v[n - i] * i);
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}