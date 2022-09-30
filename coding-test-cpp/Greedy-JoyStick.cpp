//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//int solution(string name) {
//    int answer = 0;
//    int len = name.size() - 1;
//
//    for (int i = 0; i < name.size(); i++) {
//        //좌 우
//        int idx = i + 1;
//        //A말고 다른 문자가 나올 때까지 증가
//        while (idx < name.size() && name[idx] == 'A') {
//            idx++;
//        }
//        int a = i, b = name.size() - idx;
//        len = min(len, min(2 * a + b, a + 2 * b));
//
//        //상 하
//        answer += name[i] - 'A' < 14 ? name[i] - 'A' : 'Z' - name[i] + 1;
//    }
//    answer += len;
//    return answer;
//}
//int main() {
//
//    cout << 'J' - 'A' << endl;
//    cout << 'E' - 'A' << endl;
//    cout << 'R' - 'A' << endl;
//    cout << 'O' - 'A' << endl;
//    cout << 'E' - 'A' << endl;
//    cout << 'N' - 'A' << endl;
//
//    return 0;
//}