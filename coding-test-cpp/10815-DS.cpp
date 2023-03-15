//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//#include <unordered_set>
//using namespace std;
//
//vector<int> myCard;
//vector<int> card;
//unordered_set<int> us;
//
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n, m;
//    cin >> n;
//    myCard.resize(n, 0);
//    for (int i = 0; i < n; i++) {
//        cin >> myCard[i];
//        us.insert(myCard[i]);
//    }
//
//    cin >> m;
//    card.resize(m, 0);
//    for (int i = 0; i < m; i++) {
//        cin >> card[i];
//        if (us.find(card[i]) != us.end()) {
//            cout << 1 << ' ';
//        }
//        else {
//            cout << 0 << ' ';
//        }
//    }
//
//    return 0;
//}