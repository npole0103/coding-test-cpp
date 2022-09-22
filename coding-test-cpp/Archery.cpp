//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> answer = { -1 }; //default -1
//int maxDiff = 0; //점수 차이
//int arr[11]; //idx: cnt / value: 1~10점 표시
//
//int getDiff(vector<int> ryan, vector<int> apeach) {
//	int ryanScore = 0, apeachScore = 0;
//
//	//점수 차 구하기
//	for (int i = 0; i < 11; i++) {
//		//어피치가 점수를 획득: 더 많거나 같거나
//		if (ryan[i] <= apeach[i]) {
//			//어피치가 0개를 맞춘 것은 점수 획득 x
//			if (apeach[i] != 0) {
//				apeachScore += 10 - i;
//			}
//		}
//		//라이언이 점수를 획득: 어피치가 맞춘 횟수보다 초과
//		else {
//			ryanScore += 10 - i;
//		}
//	}
//
//	return ryanScore - apeachScore;
//}
//
////완전 탐색 - (중복 순열) //ex) n = 5라면, 0,0,0,0,0(0-5발) ~ 10,10,10,10,10(10-5발) 범위 모두 탐색
//void dfs(int n, int idx, int cnt, vector<int> ryan, vector<int> apeach) {
//
//	//종료 조건
//	if (n == cnt) {
//		//만들어진 순열을 ryan에 표시: 0, 0, 0, 6, 10 이라면 -> 10점 3번 / 4점 1번 / 0점 1번
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
//	vector<int> ryan(11, 0); //11사이즈 모두 0으로 초기화
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