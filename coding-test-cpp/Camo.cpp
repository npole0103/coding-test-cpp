//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//map<string, int> m;
//
//int solution(vector<vector<string>> clothes) {
//    int answer = 1;
//
//    for (const auto& e : clothes) {
//        m[e[1]]++;
//    }
//
//    //아무것도 선택 안하는 경우 + 1해서 전체 경우의 수 구함
//    for (const auto& e : m) {
//        answer *= (e.second + 1);
//    }
//    //모두 아무것도 안 입는 경우 1가지를 제외해 줌
//    return answer - 1;
//}
//int main() {
//
//    return 0;
//}