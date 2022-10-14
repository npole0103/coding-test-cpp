//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int answer = 1e9; //max값
//vector<bool> visited; //방문 표시
//vector<string> gWords; //전역 words
//string gTarget; //전역 target
//
////두 문자열이 하나만 다른지 판별해주는 함수
//bool isOneDiff(string a, string b) {
//    int cnt = 0;
//
//    for (int i = 0; i < a.size(); i++) {
//        if (a[i] != b[i]) {
//            cnt++;
//        }
//    }
//
//    return cnt == 1 ? true : false;
//}
//
//void dfs(string begin, int cnt) {
//
//    if (begin == gTarget) {
//        answer = min(answer, cnt);
//        return;
//    }
//    
//    //words[i] 중에 방문하지 않았으며 1개만 다르다면
//    for (int i = 0; i < gWords.size(); i++) {
//        if(!visited[i] && isOneDiff(begin, gWords[i])) {
//            visited[i] = true;
//            dfs(gWords[i], cnt + 1);
//            visited[i] = false;
//        }
//    }
//}
//
//int solution(string begin, string target, vector<string> words) {
//    vector<bool> v(words.size(), 0);
//    visited = v;
//    gWords = words;
//    gTarget = target;
//
//    dfs(begin, 0);
//
//    return answer == 1e9 ? 0 : answer;
//}
//
//int main() {
//
//    return 0;
//}