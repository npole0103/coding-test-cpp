//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//using namespace std;
//
//	//체육복 도난
//	//여벌을 빌려주려고 함
//	//학생들 번호는 체격 순으로
//	//앞번호 학생이 바로 뒷번호 학생에게만 빌려줄 수 있음
//
//	//전체 학생 n
//	//도난 당한 학생 lost
//	//여벌 가져온 학생 reserve
//	//체육들을 수 있는 학생 수
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