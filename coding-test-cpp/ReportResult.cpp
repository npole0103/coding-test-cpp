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
//    //reporter�� respondent�� map<string, set<string>> �ڷᱸ�� ����
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
//        //�Ű� ���� Ƚ�� ī��Ʈ
//        for (int j = 0; j < id_list.size(); j++) {
//            acc += ms[id_list[j]].count(id_list[i]);
//        }
//
//        //�������� �Ű� Ƚ�� ���� �̻��̶��
//        if (acc >= k) {
//            //�Ű��� ������� ���� ���� ī��Ʈ �߰�
//            for (int j = 0; j < id_list.size(); j++) {
//                if (ms[id_list[j]].count(id_list[i]) > 0) {
//                    cout << id_list[i] << "�� �Ű��� ���" << id_list[j] << endl;
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
//		cout << "�Ű���" << " " << it->first << endl;
//		cout << "�ǽŰ���" << " ";
//		set<string> st = it->second;
//		for (auto it2 = st.begin(); it2 != st.end(); it2++) {
//			cout << *it2 << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}