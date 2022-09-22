//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> answer = { -1 }; //default -1
//int maxDiff = 0; //���� ����
//int arr[11]; //idx: cnt / value: 1~10�� ǥ��
//
//int getDiff(vector<int> ryan, vector<int> apeach) {
//	int ryanScore = 0, apeachScore = 0;
//
//	//���� �� ���ϱ�
//	for (int i = 0; i < 11; i++) {
//		//����ġ�� ������ ȹ��: �� ���ų� ���ų�
//		if (ryan[i] <= apeach[i]) {
//			//����ġ�� 0���� ���� ���� ���� ȹ�� x
//			if (apeach[i] != 0) {
//				apeachScore += 10 - i;
//			}
//		}
//		//���̾��� ������ ȹ��: ����ġ�� ���� Ƚ������ �ʰ�
//		else {
//			ryanScore += 10 - i;
//		}
//	}
//
//	return ryanScore - apeachScore;
//}
//
////���� Ž�� - (�ߺ� ����) //ex) n = 5���, 0,0,0,0,0(0-5��) ~ 10,10,10,10,10(10-5��) ���� ��� Ž��
//void dfs(int n, int idx, int cnt, vector<int> ryan, vector<int> apeach) {
//
//	//���� ����
//	if (n == cnt) {
//		//������� ������ ryan�� ǥ��: 0, 0, 0, 6, 10 �̶�� -> 10�� 3�� / 4�� 1�� / 0�� 1��
//		vector<int> v;
//		for (int i = 0; i < n; i++) {
//			v.push_back(arr[i]);
//		}
//
//		for (int i = 0; i < n; i++) {
//			ryan[10 - v[i]]++;
//		}
//
//		int diff = getDiff(ryan, apeach);
//
//		if (maxDiff < diff) {
//			maxDiff = diff;
//			answer = ryan;
//		}
//		return;
//	}
//
//	//dfs
//	for (int i = idx; i < 11; i++) {
//		arr[cnt] = i;
//		dfs(n, i, cnt + 1, ryan, apeach);
//	}
//}
//
//vector<int> solution(int n, vector<int> info) {
//	vector<int> apeach = info;
//	vector<int> ryan(11, 0); //11������ ��� 0���� �ʱ�ȭ
//
//	dfs(n, 0, 0, ryan, apeach);
//
//	return answer;
//}
//
//int main() {
//	
//	int n = 5;
//	vector<int> answer;
//	vector<int> apeach({ 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 });
//
//	answer = solution(n, apeach);
//
//	for (const auto& e : answer) {
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}