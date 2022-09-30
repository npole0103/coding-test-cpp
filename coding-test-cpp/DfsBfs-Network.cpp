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
//    //��� ��� �ϳ��� Ž��
//    for (int i = 0; i < n; i++) {
//
//        //������ ����� �Ѿ
//        if (visited[i] == true) {
//            continue;
//        }
//
//        //�湮 ǥ�� �� ��Ʈ��ũ ���� ����
//        visited[i] = true;
//        answer++;
//
//        //���⼭���� ����� ��� ó��
//        queue<int> q;
//
//        //���� ���� ����� �͵� queue�� ����
//        for (int j = 0; j < n; j++) {
//            if (computers[i][j] == 1) {
//                q.push(j);
//            }
//        }
//
//        //ť�� ��� ���� �湮ó��
//        while (!q.empty()) {
//            int current = q.front();
//            q.pop();
//            
//            //���� ��尡 �̹� ������ �����
//            if (visited[current] == true) {
//                continue;
//            }
//
//            //�湮 ǥ��
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