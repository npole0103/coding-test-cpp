//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//int answer = 0; //답
//int dungeonCnt = 0; //던전 총 갯수
//bool visited[8]; //방문 표시
//
//void dfs(int k, int idx, int cnt, vector<vector<int>> dungeons) {
//    if (answer < cnt) {
//        answer = cnt;
//    }
//
//    for (int i = 0; i < dungeonCnt; i++) {
//        //k가 현재 상태의 최소 필요도보다 크고 방문하지 않았다면
//        if (k >= dungeons[i][0] && !visited[i]) {
//            visited[i] = true; //방문 중 표시
//            dfs(k - dungeons[i][1], i, cnt + 1, dungeons);
//            visited[i] = false; //재귀 종료 후 방문 표시 해제
//        }
//    }
//}
//
//int solution(int k, vector<vector<int>> dungeons) {
//    dungeonCnt = dungeons.size();
//
//    dfs(k, 0, 0, dungeons);
//
//    return answer;
//}
//
//int main() {
//    cout << "-------------" << endl;
//    return 0;
//}