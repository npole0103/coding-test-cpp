//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[9];
//bool visited[9];
//
//void dfs(int n, int m, int current) {
//
//	//���� ȣ��Ƚ���� ����� �ڸ� ������ ���ٸ�
//	if (m < current) {
//		//�Է¹��� �ڸ�����ŭ������ ����� �迭�� ���
//		for (int i = 1; i <= m; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << '\n';
//		return;
//	}
//
//	//���� �ڸ����� �� ä������ �ʾҴٸ�
//	for (int i = 1; i <= n; i++) {
//		//�ߺ� ����� ���� ���� �湮���� ���� ��츸 ���
//		if (!visited[i]) {
//			arr[current] = i; //���� �ڸ��� ����
//			visited[i] = true; //�湮 ó��
//			dfs(n, m, current + 1); //�ٸ� ��� �� Ž��
//			visited[i] = false; //���� ����� ���� ���� ���� ����� ���� �����ٸ� �湮 ���
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	dfs(n, m, 1);
//
//	return 0;
//}