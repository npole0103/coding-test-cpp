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
//vector<vector<int>> graph(102, vector<int>());
//vector<bool> visited(102, false);
//
////����ư �Ÿ� ���
//int getDistance(pair<int, int> a, pair<int, int> b) {
//    return abs(a.first - b.first) + abs(a.second - b.second);
//}
//
////dfs Ž��
//void dfs(int x) {
//    //x��ǥ �湮ǥ��
//    visited[x] = true;
//
//    for (int i = 0; i < graph[x].size(); i++) {
//        int next = graph[x][i];
//        if (!visited[next]) {
//            dfs(next);
//        }
//    }
//
//}
//
//int main() {
//    int tc;
//    cin >> tc;
//
//    while (tc--) {
//        //�ѹ� �� ������ �ʱ�ȭ
//        for (int i = 0; i < 102; i++) {
//            graph[i].clear();
//            visited[i] = false;
//        }
//
//        int martNum;
//        vector<pair<int, int>> pos;
//        cin >> martNum;
//
//        //����� + ������ + ������ ����
//        for (int i = 0; i < martNum + 2; i++) {
//            int x, y;
//            cin >> x >> y;
//            pos.push_back({ x, y });
//        }
//
//        //���� 20������ �� �� �ִ� �Ÿ� ���� �ִٸ�
//
//        for (int i = 0; i < martNum + 2; i++) {
//            for (int j = i + 1; j < martNum + 2; j++) {
//                if (getDistance(pos[i], pos[j]) <= 50 * 20) {
//                    graph[i].push_back(j);
//                    graph[j].push_back(i);
//                }
//            }
//        }
//
//        dfs(0);
//
//        //0�� �����, martNum+1�� ������
//        if (visited[martNum + 1]) {
//            cout << "happy" << endl;
//        }
//        else {
//            cout << "sad" << endl;
//        }
//    }
//
//    return 0;
//}