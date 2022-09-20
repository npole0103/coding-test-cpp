//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[9];
//bool visited[9];
//
//void dfs(int n, int m, int current) {
//
//	//현재 호출횟수가 출력할 자리 수보다 많다면
//	if (m < current) {
//		//입력받은 자리수만큼까지의 저장된 배열을 출력
//		for (int i = 1; i <= m; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << '\n';
//		return;
//	}
//
//	//아직 자릿수가 다 채워지지 않았다면
//	for (int i = 1; i <= n; i++) {
//		//중복 허용을 막기 위해 방문되지 않은 경우만 허용
//		if (!visited[i]) {
//			arr[current] = i; //현재 자리수 저장
//			visited[i] = true; //방문 처리
//			dfs(n, m, current + 1); //다른 경우 수 탐색
//			visited[i] = false; //다음 경우의 수를 위해 현재 경우의 수가 끝났다면 방문 취소
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