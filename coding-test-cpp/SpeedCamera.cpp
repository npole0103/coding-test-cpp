//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int solution(vector<vector<int>> routes) {
//	int answer = 1; //������ �ϳ��� ī�޶�� �ʿ�
//
//	sort(routes.begin(), routes.end());
//
//	//�ʱ� ī�޶� ��ǥ ����
//	int cam = routes[0][1];
//
//	for (int i = 1; i < routes.size(); i++) {
//		//���� ī�޶� ������ ��ǥ���� ���� ���ʿ� �ִ� ���
//		if (routes[i][1] < cam) {
//			cam = routes[i][1]; //���� ��ǥ�� ������Ʈ
//		}
//		//���� ���� ��ǥ�� ���� ������ ��ǥ���� ū ���
//		else if (cam < routes[i][0]) {
//			answer++; //ī�޶� ��ġ ��
//			cam = routes[i][1]; //������ ��ǥ ������Ʈ
//		}
//	}
//
//	return answer;
//}
//
////https://yabmoons.tistory.com/520 ����
//int main() {
//
//	vector<vector<int>> v{ {-20, -15}, { -14, -5 }, { -18, -13 }, { -5, -3 } };
//
//	cout << solution(v) << endl;
//
//	return 0;
//}