//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
//map<string, int> m;
//
//vector<int> solution(string msg) {
//    vector<int> answer;
//
//    //���� �ʱ�ȭ
//    for (int i = 1; i <= 26; i++) {
//        string s;
//        s += (char)64+i;
//        m.insert({ s, i });
//    }
//
//    int lastIdx = 26;
//
//    for (int i = 0; i < msg.size(); i++) {
//        string word, temp;
//        //�ܾ� ã��
//        for (int j = i; j < msg.size(); j++) {
//            temp += msg[j];
//            if (m.find(temp) != m.end()) {
//                word = temp; //���� �� �ܾ ���Ե� ��
//                i = j;
//            }
//        }
//
//        //��� ����
//        answer.push_back(m[word]);
//
//        //���� �߰�
//        if (i < msg.size() - 1) {
//            word += msg[i + 1];
//            m.insert({ word, ++lastIdx });
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    //���� �ʱ�ȭ
//    for (int i = 1; i <= 26; i++) {
//        string s;
//        s += (char)(64 + i);
//        m.insert({ s, i });
//    }
//
//    m.insert({ "KA", 27 });
//
//    for (const auto& e : m) {
//        cout << e.first << " " << e.second << endl;
//    }
//
//    cout << m["b"] << endl;
//
//    return 0;
//}