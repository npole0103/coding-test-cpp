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
//    int n;
//    vector<int> v;
//    priority_queue<int, vector<int>, greater<int>> pq;
//    cin >> n;
//
//    for (int i = 0; i < 2 * n; i++) {
//        int temp = 0;
//        cin >> temp;
//        v.push_back(temp);
//    }
//
//    sort(v.begin(), v.end());
//
//    for (int i = 0; i < n; i++) {
//        pq.push(v[i] + v[(2 * n) - 1 - i]);
//    }
//
//    cout << pq.top() << endl;
//
//    return 0;
//}