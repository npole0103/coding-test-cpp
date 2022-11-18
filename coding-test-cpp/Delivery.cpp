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
//vector<pair<int, int>> a[51];
//int d[51];
//int n;
//
//void dijkstra(int start) {
//    d[start] = 0; //�ڱ� �ڽ�
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//    pq.push({ 0, start });
//
//    //����� ������� ó��
//	while (!pq.empty()) {
//		// ť�� ���� ���� ���� ���� ����� ������ ����� ����
//		//first: �Ÿ�, second: ���
//		pair<int, int> cur = pq.top();
//		pq.pop();
//
//		//�ִ� �Ÿ��� �ƴ� ��� ��ŵ
//		if (d[cur.second] < cur.first) {
//			continue;
//		}
//
//		for (int i = 0; i < a[cur.second].size(); i++) {
//			int nextNode = a[cur.second][i].second;
//			int nextDistance = cur.first + a[cur.second][i].first;
//
//			if (nextDistance < d[nextNode]) { //nextDistance�� ����� �� ���ٸ�?
//				d[nextNode] = nextDistance; //����
//				pq.push({ nextDistance, nextNode }); //pq�� push
//			}
//		}
//	}
//}
//
//int solution(int N, vector<vector<int>> road, int K) {
//    int answer = 0;
//    int n = N;
//
//    for (int i = 1; i <= 50; i++) {
//		d[i] = 1e9;
//	}
//
//    for (const auto& e : road) {
//        a[e[0]].push_back({ e[2], e[1] });
//        a[e[1]].push_back({ e[2], e[0] });
//    }
//
//    dijkstra(1);
//
//    for (int i = 1; i <= N; i++) {
//        answer += (d[i] <= K ? 1 : 0);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}