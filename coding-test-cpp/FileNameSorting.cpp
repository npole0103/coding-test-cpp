//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <regex>
//#include <sstream>
//using namespace std;
//
//vector<string> v; //number
//
//void sliceStr(string s, string& head, string& num, string& tail) {
//    istringstream iss(s);
//    vector<string> v;
//    string temp;
//
//    while (getline(iss, temp, ',')) {
//        v.push_back(temp);
//    }
//
//    head = v[0];
//    num = v[1];
//    tail = v[2];
//}
//
//bool cmp(string a, string b) {
//
//    string aHead, aNum, aTail, bHead, bNum, bTail;
//    sliceStr(a, aHead, aNum, aTail);
//    sliceStr(b, bHead, bNum, bTail);
//
//    transform(aHead.begin(), aHead.end(), aHead.begin(), ::tolower);
//    transform(bHead.begin(), bHead.end(), bHead.begin(), ::tolower);
//
//    if (aHead == bHead) {
//        aNum = to_string(stoi(aNum));
//        bNum = to_string(stoi(bNum));
//        if (aNum.length() == bNum.length()) {
//            return bNum > aNum;
//        }
//        return aNum.length() < bNum.length();
//    }
//
//    return aHead < bHead;
//}
//
//void saveNumber(string s) {
//    regex re("[0-9]+");
//
//    auto begin = sregex_iterator(s.begin(), s.end(), re);
//    auto end = sregex_iterator();
//
//    for (auto itr = begin; itr != end; ++itr)
//    {
//        smatch match = *itr;
//
//        string name;
//        name += match.prefix();
//        name += ",";
//        name += match.str();
//        name += ",";
//        if (match.suffix().length() == 0) {
//            name += "?";
//        }
//        else {
//            name += match.suffix();
//        }
//        v.push_back(name);
//
//        break;
//    }
//
//    return;
//}
//
//vector<string> solution(vector<string> files) {
//    vector<string> answer;
//
//    //숫자를 추출해서 map, vector에 저장
//    for (const auto& e : files) {
//        saveNumber(e);
//    }
//
//    //순서 유지한채 정렬
//    stable_sort(v.begin(), v.end(), cmp);
//
//    //정렬된 순서로 파일명 리턴
//    for (const auto& e : v) {
//        string name, head, number, tail;
//        sliceStr(e, head, number, tail);
//        name += head;
//        name += number;
//        name += (tail == "?" ? "" : tail);
//        answer.push_back(name);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    vector<string> v = { "12", "10", "02", "1" ,"01", "2"};
//
//    stable_sort(v.begin(), v.end(), cmp);
//
//    for (const auto& e : v) {
//        cout << e << " ";
//    }
//    cout << endl;
//
//    regex re("[0-9]+");
//    string s = "aa123";
//
//    auto begin = sregex_iterator(s.begin(), s.end(), re);
//    auto end = sregex_iterator();
//
//    for (auto itr = begin; itr != end; ++itr)
//    {
//        smatch match = *itr;
//        cout << match.prefix() << " ";
//        cout << match.str() << " ";
//        cout << match.suffix() << " ";
//        break;
//    }
//
//    string b = "BBBA-- .A";
//    transform(b.begin(), b.end(), b.begin(), ::tolower);
//    cout << b << endl;
//
//    return 0;
//}