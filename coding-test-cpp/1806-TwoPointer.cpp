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
//    int n, s;
//    cin >> n >> s;
//
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        v.push_back(temp);
//    }
//
//    int answer = 2e9;
//
//    int sum = v[0];
//    int end = 0;
//
//    for (int start = 0; start < n; start++) {
//        while (end < n && sum < s) {
//            end++;
//            if (end != n) {
//                sum += v[end];
//            }
//        }
//        if (end == n) {
//            break;
//        }
//        answer = min(answer, end - start + 1);
//        sum -= v[start];
//    }
//    
//    cout << (answer == 2e9 ? 0 : answer) << endl;
//
//    return 0;
//}