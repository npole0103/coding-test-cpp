//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//using namespace std;
//
//int solution(int n, vector<vector<int>> results) {
//    int answer = 0;
//
//    vector<vector<bool>> graph(n + 1, vector<bool>(n + 1, 0));
//
//    //�¸��� ��츸 üũ
//    for (const auto& e : results) {
//        graph[e[0]][e[1]] = true;
//    }
//
//    //�÷��̵�-�ͼ�
//    for (int k = 1; k <= n; k++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                //(i�� k���� �¸� + k�� j�� �¸�)�� ����� i�� j���� �̱� ������ ����
//                if (graph[i][k] && graph[k][j]) {
//                    graph[i][j] = true;
//                }
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cout << graph[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 1; i <= n; i++) {
//        int winCnt = 0;
//
//        for (int j = 1; j <= n; j++) {
//            if (i == j) {
//                continue;
//            }
//
//            //graph[i][j]�� i�� �̱� ���, i���� �� ��� ī��Ʈ
//            //graph[j][i]�� j�� �̱� ���, i���� �̱� ��� ī��Ʈ
//            if (graph[i][j] || graph[j][i]) {
//                winCnt++;
//            }
//
//            //�̱� ��� + �� ��� = n - 1 �̶�� ������ ���� �� ����
//            if (winCnt == n - 1) {
//                answer++;
//            }
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//    /*
//    * 1 : 2
//    * 2 : 5
//    * 3 : 2
//    * 4 : 2, 3
//    * 5 :
//    * 
//    */
//
//    return 0;
//}