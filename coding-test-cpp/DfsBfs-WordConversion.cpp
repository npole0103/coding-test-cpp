//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int answer = 1e9; //max��
//vector<bool> visited; //�湮 ǥ��
//vector<string> gWords; //���� words
//string gTarget; //���� target
//
////�� ���ڿ��� �ϳ��� �ٸ��� �Ǻ����ִ� �Լ�
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
//    //words[i] �߿� �湮���� �ʾ����� 1���� �ٸ��ٸ�
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