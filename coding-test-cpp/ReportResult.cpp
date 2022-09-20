//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <map>
//#include <set>
//using namespace std;
//
//map<string, set<string>> ms;
//
//
//#include <string>
//#include <vector>
//#include <map>
//#include <set>
//#include <iostream>
//using namespace std;
//
//int cnt[1001];
//map<string, set<string>> ms;
//
//vector<int> solution(vector<string> id_list, vector<string> report, int k) {
//    vector<int> answer;
//
//    //reporter와 respondent로 map<string, set<string>> 자료구조 생성
//    for (int i = 0; i < report.size(); i++) {
//        string reporter = "";
//        string respondent = "";
//        for (int j = 0; j < report[i].size(); j++) {
//            if (report[i][j] == 32) {
//                reporter = respondent;
//                respondent = "";
//                continue;
//            }
//            respondent += report[i][j];
//        }
//
//        ms[reporter].insert(respondent);
//    }
//
//    //@@@@@@@@@@@@
//    for (auto it = ms.begin(); it != ms.end(); it++) {
//        cout << it->first << " : ";
//        set<string> st = it->second;
//        for (auto it2 = st.begin(); it2 != st.end(); it2++) {
//            cout << *it2 << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < id_list.size(); i++) {
//        int acc = 0;
//
//        //신고 누적 횟수 카운트
//        for (int j = 0; j < id_list.size(); j++) {
//            acc += ms[id_list[j]].count(id_list[i]);
//        }
//
//        //누적값이 신고 횟수 제한 이상이라면
//        if (acc >= k) {
//            //신고한 사람에게 메일 전송 카운트 추가
//            for (int j = 0; j < id_list.size(); j++) {
//                if (ms[id_list[j]].count(id_list[i]) > 0) {
//                    cout << id_list[i] << "를 신고한 사람" << id_list[j] << endl;
//                    cnt[j]++;
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < id_list.size(); i++) {
//        answer.push_back(cnt[i]);
//    }
//
//    return answer;
//}
//
//int main() {
//
//
//	//ms.insert({ "aa", { "bb" } });
//	//ms.insert({ "aa", { "cc" } });
//
//	ms["aa"].insert("bb");
//	ms["aa"].insert("cc");
//
//	ms["bb"].insert("1234");
//	ms["bb"].insert("1234");
//	ms["bb"].insert("1234");
//	ms["bb"].insert("12345");
//	ms["bb"].insert("123456");
//
//	cout << ms["bb"].count("1234") << endl;
//
//	for (auto it = ms.begin(); it != ms.end(); it++) {
//		cout << "신고자" << " " << it->first << endl;
//		cout << "피신고자" << " ";
//		set<string> st = it->second;
//		for (auto it2 = st.begin(); it2 != st.end(); it2++) {
//			cout << *it2 << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}