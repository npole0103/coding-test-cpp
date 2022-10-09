//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//vector<int> a, b;
//int n;
//
//int main() {
//
//    int answer = 0;
//
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int num;
//        cin >> num;
//        a.push_back(num);
//    }
//    for (int i = 0; i < n; i++) {
//        int num;
//        cin >> num;
//        b.push_back(num);
//    }
//
//    sort(a.begin(), a.end(), greater<int>());
//    sort(b.begin(), b.end(), less<int>());
//
//    for (int i = 0; i < n; i++) {
//        answer += a[i] * b[i];
//    }
//    
//    cout << answer << endl;
//
//    return 0;
//}