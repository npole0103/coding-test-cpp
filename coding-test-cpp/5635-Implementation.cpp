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
//long dateToDay(int dd, int mm, int yyyy) {
//    return dd + 30 * mm + 365 * yyyy;
//}
//
//int main() {
//
//    vector<pair<long, string>> v;
//
//    int num;
//    cin >> num;
//
//    string name;
//    int dd, mm, yyyy;
//
//    while (num--) {
//        cin >> name >> dd >> mm >> yyyy;
//        v.push_back({ dateToDay(dd, mm, yyyy), name });
//    }
//
//    sort(v.begin(), v.end());
//
//    cout << (*prev(v.end())).second << endl;
//    cout << (*v.begin()).second << endl;
//
//    return 0;
//}