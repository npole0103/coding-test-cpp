//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int cnt = 0;
//int chess[15]; //chess[1] = 2 <- 1���� 2��
//
//bool isPromising(int row) {
//	//���� �� ���� ��ǥ i�� ���� �˻�
//	for (int i = 0; i < row; i++) {
//		//���� ���̰ų�, ��ǥ ���밪�� ������(�밢��)
//		if (chess[row] == chess[i] || abs(row - i) == abs(chess[row] - chess[i])) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void nQueen(int row) {
//
//	//������ ��˻���� ����� ���¶�� ex) n=4 0,1,2,3 ���� 3 + 1 == 4�� ��Ȳ
//	if (row == n) {
//		cnt++;
//		return;
//	}
//	//��� ����� ��
//	else {
//		//���� �࿡�� ��� �� �˻�
//		for (int col = 0; col < n; col++) {
//			//���� �ϳ��� �ø��鼭 �ݺ� �˻�
//			chess[row] = col;
//
//			//���� ��, �� ��ġ�� ���� ��ġ�� ������ ���ٸ� ���� �� �˻�
//			if (isPromising(row)) {
//				nQueen(row + 1);
//			}
//		}
//	}
//}
//
//int main() {
//
//	cin >> n;
//
//	nQueen(0);
//
//	cout << cnt << endl;
//
//	return 0;
//}