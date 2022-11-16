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
//void toLower(string& str) {
//    transform(str.begin(), str.end(), str.begin(), ::tolower);
//}
//
//void splitStr(multiset<string>& s, const string str) {
//    for (int i = 0; i < str.size() - 1; i++) {
//        string temp;
//        if (('a' <= str[i] && str[i] <= 'z') && ('a' <= str[i + 1] && str[i + 1] <= 'z')) {
//            temp += str[i];
//            temp += str[i + 1];
//            s.insert(temp);
//        }
//        else {
//            cout << str[i] << str[i + 1] << endl;
//        }
//    }
//}
//
//int getIntersectionSize(const multiset<string>& s1, const multiset<string>& s2) {
//    multiset<string> temp;
//    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(temp, temp.begin()));
//    return temp.size();
//}
//
//int getUnionSize(const multiset<string>& s1, const multiset<string>& s2) {
//    multiset<string> temp;
//    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(temp, temp.begin()));
//    return temp.size();
//}
//
//int solution(string str1, string str2) {
//    int answer = 0;
//
//    toLower(str1);
//    toLower(str2);
//
//    multiset<string> s1, s2;
//
//    splitStr(s1, str1);
//    splitStr(s2, str2);
//
//    for (const auto& e : s1) {
//        cout << e << " ";
//    }
//    cout << endl;
//
//    for (const auto& e : s2) {
//        cout << e << " ";
//    }
//    cout << endl;
//
//    int iSize = getIntersectionSize(s1, s2);
//    int uSize = getUnionSize(s1, s2);
//
//    cout << iSize << " " << uSize << endl;
//
//    if (iSize == 0 && uSize == 0) {
//        return 65536;
//    }
//    else {
//        answer = 65536 * (((double)iSize / (double)uSize) * 100 / 100);
//        return answer;
//    }
//}
//
//int main() {
//
//    cout << solution("FRANCE", "french") << endl; 
//
//    return 0;
//}