//#include <iostream> //https://hgu-can.tistory.com/entry/C-%EB%B0%B1%EC%A4%80-%EC%98%A8%EB%9D%BC%EC%9D%B8-%EC%A0%80%EC%A7%80-1783%EB%B2%88-%EB%B3%91%EB%93%A0-%EB%82%98%EC%9D%B4%ED%8A%B8-%ED%92%80%EC%9D%B4
//#include <algorithm> //https://buzz-program.tistory.com/entry/%ED%8C%8C%EC%9D%B4%EC%8D%AC-BOJ1783%EB%B3%91%EB%93%A0-%EB%82%98%EC%9D%B4%ED%8A%B8
//using namespace std;
//
//int main() {
//	int h, w;
//	cin >> h >> w;
//	int result = 1;
//
//	if (h == 1) { //���̰� 1�̶�� �̵� �Ұ�
//		result = 1;
//	}
//	else if (h == 2) { //2, 3, 4 �� ����
//		result = min(4, (w + 1) / 2);
//	}
//	else if (h >= 3) {
//		if (w < 7) { //7���ϴ� �湮 Ƚ���� 4�����̱� ������ �ִ밡 4
//			result = min(w, 4);
//		}
//		else { //7�̻��� �͵��� w-2��� ��Ģ�� ����
//			result = w - 2;
//		}
//	}
//
//	cout << result << endl;
//
//	return 0;
//}