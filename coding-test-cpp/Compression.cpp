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
//    //사전 초기화
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
//        //단어 찾기
//        for (int j = i; j < msg.size(); j++) {
//            temp += msg[j];
//            if (m.find(temp) != m.end()) {
//                word = temp; //가장 긴 단어가 삽입될 것
//                i = j;
//            }
//        }
//
//        //출력 저장
//        answer.push_back(m[word]);
//
//        //사전 추가
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
//    //사전 초기화
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