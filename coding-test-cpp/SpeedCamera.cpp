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
//	int answer = 1; //무조건 하나의 카메라는 필요
//
//	sort(routes.begin(), routes.end());
//
//	//초기 카메라 좌표 설정
//	int cam = routes[0][1];
//
//	for (int i = 1; i < routes.size(); i++) {
//		//이전 카메라 마지막 좌표보다 범위 안쪽에 있는 경우
//		if (routes[i][1] < cam) {
//			cam = routes[i][1]; //안쪽 좌표로 업데이트
//		}
//		//현재 시작 좌표가 기존 마지막 좌표보다 큰 경우
//		else if (cam < routes[i][0]) {
//			answer++; //카메라 설치 후
//			cam = routes[i][1]; //마지막 좌표 업데이트
//		}
//	}
//
//	return answer;
//}
//
////https://yabmoons.tistory.com/520 참고
//int main() {
//
//	vector<vector<int>> v{ {-20, -15}, { -14, -5 }, { -18, -13 }, { -5, -3 } };
//
//	cout << solution(v) << endl;
//
//	return 0;
//}