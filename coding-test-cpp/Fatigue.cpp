//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//int answer = 0; //��
//int dungeonCnt = 0; //���� �� ����
//bool visited[8]; //�湮 ǥ��
//
//void dfs(int k, int idx, int cnt, vector<vector<int>> dungeons) {
//    if (answer < cnt) {
//        answer = cnt;
//    }
//
//    for (int i = 0; i < dungeonCnt; i++) {
//        //k�� ���� ������ �ּ� �ʿ䵵���� ũ�� �湮���� �ʾҴٸ�
//        if (k >= dungeons[i][0] && !visited[i]) {
//            visited[i] = true; //�湮 �� ǥ��
//            dfs(k - dungeons[i][1], i, cnt + 1, dungeons);
//            visited[i] = false; //��� ���� �� �湮 ǥ�� ����
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