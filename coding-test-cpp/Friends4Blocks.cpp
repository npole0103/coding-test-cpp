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
//vector<vector<char>> v(30, vector<char>(30, 0));
//set<pair<int, int>> pos; //����� ��ǥ�� ����
//int answer = 0;
//int gM = 0, gN = 0;
//int dx[3] = { 1,0,1 };
//int dy[3] = { 0,1,1 };
//
//void checkPos(int x, int y) {
//    if (v[x][y] == 0) {
//        return;
//    }
//    if (x < 0 || y < 0 || x >= gM || y >= gN) {
//        return;
//    }
//
//    char c = v[x][y];
//
//    for (int dir = 0; dir < 3; dir++) {
//        int nx = x + dx[dir];
//        int ny = y + dy[dir];
//
//        if (nx < 0 || ny < 0 || nx >= gM || ny >= gN) {
//            return;
//        }
//
//        if (c != v[nx][ny]) {
//            return;
//        }
//    }
//
//    //��� ������ ����ߴٸ� pos�� ����
//    pos.insert({ x,y });
//    for (int dir = 0; dir < 3; dir++) {
//        int nx = x + dx[dir];
//        int ny = y + dy[dir];
//        pos.insert({ nx, ny });
//    }
//}
//
//void saveBoard(vector<string> board) {
//    for (int i = 0; i < board.size(); i++) {
//        for (int j = 0; j < board[i].size(); j++) {
//            v[i][j] = board[i][j];
//        }
//    }
//}
//
//void refreshBoard() {
//    for (int c = 0; c < gN; c++) {
//        vector<char> temp;
//        int cnt = 0;
//        for (int r = 0; r < gM; r++) {
//            if (v[r][c] != 0) {
//                temp.push_back(v[r][c]);
//            }
//            else {
//                cnt++;
//            }
//        }
//        reverse(temp.begin(), temp.end());
//        while (cnt--) {
//            temp.push_back(0);
//        }
//        reverse(temp.begin(), temp.end());
//
//        for (int r = 0; r < gM; r++) {
//            v[r][c] = temp[r];
//        }
//    }
//}
//
//int solution(int m, int n, vector<string> board) {
//    gM = m;
//    gN = n;
//
//    //2���� ���ͷ� ��ȯ
//    saveBoard(board);
//
//    while (true) {
//        //2x2 �˻��� ��ǥ�� ���Ϳ� �����س��� �Լ�
//        for (int i = 0; i < board.size(); i++) {
//            for (int j = 0; j < board[i].size(); j++) {
//                checkPos(i, j);
//            }
//        }
//
//        //�� �̻� 2x2�� ���ٸ� Ż��
//        if (pos.empty()) {
//            break;
//        }
//        else {
//            answer += pos.size();
//            
//            for (const auto& e : pos) {
//                v[e.first][e.second] = 0;
//            }
//
//            pos.clear();
//
//            //���� ��������
//            refreshBoard();
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}