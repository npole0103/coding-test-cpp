//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int line[11];
//
//int main() {
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int count;
//		cin >> count; //���ʿ� �ִ� ��� ��
//
//		for (int j = 1; j <= n; j++) {
//			if (count == 0 && line[j] == 0) { //ī��Ʈ ��� ���� + �� �ڸ����
//				line[j] = i; //�ڸ��� ����
//				break;
//			}
//			
//			if (line[j] == 0) { //������
//				count--;
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		cout << line[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}