//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//using namespace std;
//
//	//ü���� ����
//	//������ �����ַ��� ��
//	//�л��� ��ȣ�� ü�� ������
//	//�չ�ȣ �л��� �ٷ� �޹�ȣ �л����Ը� ������ �� ����
//
//	//��ü �л� n
//	//���� ���� �л� lost
//	//���� ������ �л� reserve
//	//ü������ �� �ִ� �л� ��
//
//	int solution(int n, vector<int> lost, vector<int> reserve) {
//		int answer = n - lost.size();
//
//		sort(lost.begin(), lost.end());
//
//		set<int> reserveSet(reserve.begin(), reserve.end());
//		vector<int> lostVector;
//
//		for(const auto & e : lost) {
//			if (reserveSet.find(e) != reserveSet.end()) {
//				reserveSet.erase(e);
//				answer++;
//				continue;
//			}
//			lostVector.push_back(e);
//		}
//
//		for (int i = 0; i < lostVector.size(); i++) {
//			if (reserveSet.find(lostVector[i] - 1) != reserveSet.end()) {
//				reserveSet.erase(lostVector[i] - 1);
//				answer++;
//				continue;
//			}
//			if (reserveSet.find(lostVector[i] + 1) != reserveSet.end()) {
//				reserveSet.erase(lostVector[i] + 1);
//				answer++;
//				continue;
//			}
//		}
//
//		return answer;
//	}