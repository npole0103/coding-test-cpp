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
//vector<int> solution(int n, int s) {
//    vector<int> answer;
//
//    if (s < n) {
//        return { -1 };
//    }
//
//    int num = s / n;
//    int cnt = s % n;
//
//    for (int i = 0; i < n; i++) {
//        if (cnt-- > 0) {
//            answer.push_back(num + 1);
//            continue;
//        }
//        answer.push_back(num);
//    }
//
//    sort(answer.begin(), answer.end());
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}