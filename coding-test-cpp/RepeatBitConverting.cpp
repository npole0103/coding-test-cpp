//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <bitset>
//using namespace std;
//
//int countTrueBit(string s) {
//    int cnt = 0;
//    for (const auto& e : s) {
//        if (e == '1') {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//
//int countFalseBit(string s) {
//    int cnt = 0;
//    for (const auto& e : s) {
//        if (e == '0') {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//
//string decToBit(int n) {
//    string temp;
//    if (n == 0) {
//        return "0";
//    }
//    while (n != 0) {
//        temp += to_string(n % 2);
//        n /= 2;
//    }
//    reverse(temp.begin(), temp.end());
//    return temp;
//}
//
//vector<int> solution(string s) {
//    vector<int> answer;
//
//    int num = 0, zeroCnt = 0, cnt = 0, strSize = s.size();
//
//    while (num != 1) {
//        num = countTrueBit(s);
//        zeroCnt += countFalseBit(s);
//
//        s = decToBit(num);
//
//        cnt++;
//    }
//    answer.push_back(cnt);
//    answer.push_back(zeroCnt);
//    return answer;
//}
//
//int main() {
//
//    cout << countTrueBit("110010101001") << endl;
//    cout << decToBit(6) << endl;
//
//    return 0;
//}