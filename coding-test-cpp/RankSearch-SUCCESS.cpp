//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <unordered_map>
//#include <sstream>
//using namespace std;
//
//unordered_map <string, vector<int>> um;
//
//void addAllCase(string s[], int score) {
//	// "- - - -" ~ "java backend junior chicken" �� 16���� ����� ��
//	vector<vector<string>> str(4, vector<string>(2, "-"));
//	for (int i = 0; i < 4; i++) {
//		str[i][0] = s[i];
//	}
//
//	//����� ���� �°� 16�� um[str].push_back()
//	string t1, t2, t3, t4;
//	for (int i = 0; i < 2; i++) {
//		t1 = str[0][i];
//		for (int j = 0; j < 2; j++) {
//			t2 = str[1][j];
//			for (int k = 0; k < 2; k++) {
//				t3 = str[2][k];
//				for (int l = 0; l < 2; l++) {
//					t4 = str[3][l];
//					um[t1 + t2 + t3 + t4].push_back(score);
//				}
//			}
//		}
//	}
//}
//
//vector<int> solution(vector<string> info, vector<string> query) {
//	vector<int> answer;
//	string tempStr[4], scoreStr = "";
//
//	//������� �� �ִ� ��� ����� �� ���
//	for (auto& e : info) {
//		istringstream iss(e);
//		iss >> tempStr[0] >> tempStr[1] >> tempStr[2] >> tempStr[3] >> scoreStr;
//		addAllCase(tempStr, stoi(scoreStr));
//	}
//
//	//ȿ������ ���� map[key]�� vector<int> �������� ����
//	for (auto& e : um) {
//		sort(e.second.begin(), e.second.end());
//	}
//
//	//���� �м�
//	for (auto& e : query) {
//		string temp, str;
//		istringstream iss(e);
//		int idx = 0, score = 0;
//
//		//������ �м�
//		while (iss >> temp) {
//			if (temp == "and") {
//				continue;
//			}
//
//			if (idx == 4) {
//				score = stoi(temp);
//			}
//			else {
//				str += temp;
//				idx++;
//			}
//		}
//
//		//score ������ ũ�ų� ���� ����� �ε��� iter
//		auto iter = lower_bound(um[str].begin(), um[str].end(), score);
//		answer.push_back(um[str].size() - (iter - um[str].begin()));
//	}
//
//	return answer;
//}
//
//int main() {
//
//	string tempStr[4], scoreStr = "96";
//	tempStr[0] = "java"; tempStr[1] = "backend"; tempStr[2] = "junior"; tempStr[3] = "pizza";
//	addAllCase(tempStr, stoi(scoreStr));
//
//	cout << tempStr->size() << endl;
//
//	return 0;
//}