//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//    vector<int> answer;
//
//    for (const auto& e : commands) {
//        vector<int> v;
//
//        for (int i = e[0] - 1; i < e[1]; i++) {
//            v.push_back(array[i]);
//        }
//
//        sort(v.begin(), v.end());
//        answer.push_back(v[e[2] - 1]);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}