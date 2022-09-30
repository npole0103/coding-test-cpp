//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <queue>
//#include <set>
//#include <map>
//using namespace std;
//
//int visited[201];
//int cnt = 0;
//
//int solution(int n, vector<vector<int>> computers) {
//    int answer = 0;
//
//    //모든 노드 하나씩 탐색
//    for (int i = 0; i < n; i++) {
//
//        //조사한 노드라면 넘어감
//        if (visited[i] == true) {
//            continue;
//        }
//
//        //방문 표시 및 네트워크 갯수 증가
//        visited[i] = true;
//        answer++;
//
//        //여기서부터 연결된 노드 처리
//        queue<int> q;
//
//        //현재 노드와 연결된 것들 queue에 저장
//        for (int j = 0; j < n; j++) {
//            if (computers[i][j] == 1) {
//                q.push(j);
//            }
//        }
//
//        //큐에 담긴 노드들 방문처리
//        while (!q.empty()) {
//            int current = q.front();
//            q.pop();
//            
//            //현재 노드가 이미 조사한 노드라면
//            if (visited[current] == true) {
//                continue;
//            }
//
//            //방문 표시
//            visited[current] = true;
//
//            for (int j = 0; j < n; j++) {
//                if (computers[current][j] == 1) {
//                    q.push(j);
//                }
//            }
//
//        }
//    }
//
//    return answer;
//}