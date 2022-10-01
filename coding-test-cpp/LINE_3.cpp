//#include <string>
//#include <vector>
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int minutes = 0;
//int visited[31][31];
//
//void makeIce(int n, int m, int x, int y, vector<vector<long long>>& answer) {
//
//    if (m == minutes) {
//        return;
//    }
//
//    if (!visited[x][y]) {
//        visited[x][y] = true;
//        answer[x][y]++;
//        makeIce(n, m + 1, x, y, answer);
//    }
//
//    if (x - 1 >= 0 && !visited[x - 1][y]) {
//        visited[x - 1][y] = true;
//        answer[x - 1][y]--;
//        makeIce(n, m + 1, x - 1, y, answer);
//    }
//
//    if (n > x + 1 && !visited[x + 1][y]) {
//        visited[x + 1][y] = true;
//        answer[x + 1][y]--;
//        makeIce(n, m + 1, x + 1, y, answer);
//    }
//
//    if (y - 1 >= 0 && !visited[x][y - 1]) {
//        visited[x][y - 1] = true;
//        answer[x][y - 1]--;
//        makeIce(n, m + 1, x, y - 1, answer);
//    }
//
//    if (n > y + 1 && !visited[x][y + 1]) {
//        visited[x][y + 1] = true;
//        answer[x][y + 1]--;
//        makeIce(n, m + 1, x, y + 1, answer);
//    }
//}
//
//void makeFire(int n, int m, int x, int y, vector<vector<long long>>& answer) {
//    if (m == minutes) {
//        return;
//    }
//
//    if (!visited[x][y]) {
//        visited[x][y] = true;
//        answer[x][y]++;
//        makeFire(n, m + 1, x, y, answer);
//    }
//
//    //상하좌우
//    if (x - 1 >= 0 && !visited[x - 1][y]) {
//        visited[x - 1][y] = true;
//        answer[x - 1][y]++;
//        makeFire(n, m + 1, x - 1, y, answer);
//    }
//
//    if (n > x + 1 && !visited[x + 1][y]) {
//        visited[x + 1][y] = true;
//        answer[x + 1][y]++;
//        makeFire(n, m + 1, x + 1, y, answer);
//    }
//
//    if (y - 1 >= 0 && !visited[x][y - 1]) {
//        visited[x][y - 1] = true;
//        answer[x][y - 1]++;
//        makeFire(n, m + 1, x, y - 1, answer);
//    }
//
//    if (n > y + 1 && !visited[x][y + 1]) {
//        visited[x][y + 1] = true;
//        answer[x][y + 1]++;
//        makeFire(n, m + 1, x, y + 1, answer);
//    }
//
//    //대각선
//    if (x - 1 >= 0 && y - 1 >= 0 && !visited[x - 1][y - 1]) {
//        visited[x - 1][y - 1] = true;
//        answer[x - 1][y - 1]++;
//        makeFire(n, m + 1, x - 1, y - 1, answer);
//    }
//
//    if (x - 1 >= 0 && n > y + 1 && !visited[x - 1][y + 1]) {
//        visited[x - 1][y + 1] = true;
//        answer[x - 1][y + 1]++;
//        makeFire(n, m + 1, x - 1, y + 1, answer);
//    }
//
//    if (n > x + 1 && y - 1 >= 0 && !visited[x + 1][y - 1]) {
//        visited[x + 1][y - 1] = true;
//        answer[x + 1][y - 1]++;
//        makeFire(n, m + 1, x + 1, y - 1, answer);
//    }
//
//    if (n > x + 1 && n > y + 1 && !visited[x + 1][y + 1]) {
//        visited[x + 1][y + 1] = true;
//        answer[x + 1][y + 1]++;
//        makeFire(n, m + 1, x + 1, y + 1, answer);
//    }
//}
//
//vector<vector<long long>> solution(int n, int m, vector<vector<int>> fires, vector<vector<int>> ices) {
//    minutes = m + 1;
//    vector<vector<long long>> answer(n, vector<long long>(n, 0));
//
//    for (int i = 0; i < ices.size(); i++) {
//        makeIce(n, 0, ices[i][0] - 1, ices[i][1] - 1, answer);
//        memset(visited, 0, sizeof(visited));
//    }
//
//    for (int i = 0; i < fires.size(); i++) {
//        makeFire(n, 0, fires[i][0] - 1, fires[i][1] - 1, answer);
//        memset(visited, 0, sizeof(visited));
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << answer[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return answer;
//}