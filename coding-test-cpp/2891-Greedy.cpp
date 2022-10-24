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
//    int n, desN, extraN;
//    cin >> n >> desN >> extraN;
//
//    vector<int> v(n+1, 1);
//
//    for (int i = 0; i < desN; i++) {
//        int temp = 0;
//        cin >> temp;
//        v[temp] = 0;
//    }
//
//    for (int i = 0; i < extraN; i++) {
//        int temp = 0;
//        cin >> temp;
//        v[temp]++;
//    }
//
//    for (int i = 1; i <= n; i++) {
//        if (v[i] == 0) {
//            if (1 <= i - 1 && v[i - 1] == 2) {
//                v[i - 1]--;
//                v[i]++;
//            }
//            else if (i + 1 < n + 1 && v[i + 1] == 2) {
//                v[i + 1]--;
//                v[i]++;
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        if (v[i] == 0) {
//            answer++;
//        }
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}