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
//char perm[8] = { 'A', 'C', 'F', 'J', 'M', 'N', 'R', 'T' };
//char temp[8];
//int visited[8];
//int answer = 0;
//vector<string> gData;
//
//int getDist(int a, int b) {
//    return abs(a - b) - 1;
//}
//
//bool isRight() {
//    for (const auto& e : gData) {
//        int a = 0, b = 0;
//        for (int i = 0; i < 8; i++) {
//            if (e[0] == temp[i]) {
//                a = i;
//            }
//            
//            if (e[2] == temp[i]) {
//                b = i;
//            }
//        }
//
//        if (e[3] == '=') {
//            if (getDist(a, b) != e[4] - 48) {
//                return false;
//            }
//        }
//        else if (e[3] == '<') {
//            if (getDist(a, b) >= e[4] - 48) {
//                return false;
//            }
//        }
//        else if (e[3] == '>') {
//            if (getDist(a, b) <= e[4] - 48) {
//                return false;
//            }
//        }
//    }
//
//    return true;
//}
//
//void dfs(int cnt) {
//    if (cnt == 8) {
//        answer += (isRight() ? 1 : 0);
//        return;
//    }
//
//    for (int i = 0; i < 8; i++) {
//        if (visited[i] == false) {
//            temp[cnt] = perm[i];
//            visited[i] = true;
//            dfs(cnt + 1);
//            visited[i] = false;
//        }
//    }
//}
//
//int solution(int n, vector<string> data) {
//    answer = 0;
//    gData = data;
//
//    dfs(0);
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}