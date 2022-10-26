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
//int n, s;
//int combi[20]; //���� ����
//int temp[20]; //�ӽ� ����
//int sum = 0; //������
//int answer = 0; //���� ī��Ʈ
//
//void dfs(int cnt, int idx, int r) {
//    if (cnt == r) {
//        if (sum == s) {
//            answer++;
//        }
//        return;
//    }
//
//    for (int i = idx; i < n; i++) {
//        temp[cnt] = combi[i];
//
//        sum += temp[cnt];
//        dfs(cnt + 1, i + 1, r);
//        sum -= temp[cnt];
//    }
//}
//
//int main() {
//
//    cin >> n >> s;
//
//    for (int i = 0; i < n; i++) {
//        cin >> combi[i];
//    }
//
//    for (int i = 1; i <= n; i++) {
//        dfs(0, 0, i); //1�� ~ n�� �̴� ���
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}