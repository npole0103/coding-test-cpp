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
//int n = 0, r = 0;
//vector<string> gUserId;
//vector<string> gBannedId;
//vector<string> gTemp;
//vector<int> visited;
//set<set<string>> s;
//
//bool isRightIdPattern(string userId, string bannedId) {
//    if (userId.size() == bannedId.size()) {
//        for (int i = 0; i < userId.size(); i++) {
//            if (bannedId[i] == '*') {
//                continue;
//            }
//
//            if (userId[i] != bannedId[i]) {
//                return false;
//            }
//        }
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//
//void dfs(int cnt) {
//    if (cnt == r) {
//        for (int i = 0; i < r; i++) {
//            if (!isRightIdPattern(gTemp[i], gBannedId[i])) {
//                return;
//            }
//        }
//
//        set<string> sTemp;
//        for (int i = 0; i < r; i++) {
//            sTemp.insert(gTemp[i]);
//        }
//        s.insert(sTemp);
//
//        return;
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (visited[i] == 0) {
//            gTemp[cnt] = gUserId[i];
//            visited[i] = 1;
//            dfs(cnt + 1);
//            visited[i] = 0;
//        }
//    }
//}
//
//int solution(vector<string> user_id, vector<string> banned_id) {
//
//    n = user_id.size();
//    r = banned_id.size();
//    gUserId = user_id;
//    gBannedId = banned_id;
//    vector<string> t(n, "");
//    gTemp = t;
//    vector<int> v(n, 0);
//    visited = v;
//
//    dfs(0);
//
//    return s.size();
//}
//
//int main() {
//
//    return 0;
//}