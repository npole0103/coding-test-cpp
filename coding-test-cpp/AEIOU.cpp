//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//char arr[5] = { 'A', 'E', 'I', 'O', 'U' };
//char pi[5];
//set<string> ss;
//
//void dfs(int cnt, int len) {
//    if (cnt == len) {
//        string temp = "";
//        for (int i = 0; i < len; i++) {
//            temp += pi[i];
//        }
//        ss.insert(temp);
//        return;
//    }
//    for (int i = 0; i < 5; i++) {
//        pi[cnt] = arr[i];
//        dfs(cnt + 1, len);
//    }
//}
//
//int solution(string word) {
//    int answer = 0;
//
//    for (int i = 1; i <= 5; i++) {
//        dfs(0, i);
//    }
//
//    answer = distance(ss.begin(), ss.find(word)) + 1;
//
//    return answer;
//}
//
//int main() {
//
//    solution("AAAAA");
//
//    for (const auto& e : ss) {
//        cout << e << " ";
//    }
//    cout << endl;
//
//    return 0;
//}