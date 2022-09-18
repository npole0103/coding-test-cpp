//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<pair<int, int>> ranks;
//
//int main() {
//
//	int tc;
//	cin >> tc;
//	while (tc-- > 0) {
//		int peoples, min = 100001, passCount = 0;
//		cin >> peoples;
//
//		for (int i = 0; i < peoples; i++) {
//			int resumeRank, interviewRank;
//			cin >> resumeRank >> interviewRank;
//			ranks.push_back({ resumeRank, interviewRank });
//		}
//		
//		sort(ranks.begin(), ranks.end());
//
//		for (int i = 0; i < peoples; i++) {
//			if (min > ranks[i].second) {
//				min = ranks[i].second;
//				passCount++; //서류 순서대로 정렬되어 있으므로, 뒤에 사람들은 면접 점수가 더 높아야 함
//			}
//		}
//
//		cout << passCount << endl;
//
//		ranks.clear();
//	}
//
//	return 0;
//}