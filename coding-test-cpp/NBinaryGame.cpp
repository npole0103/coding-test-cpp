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
//string getNChar(int n) {
//    switch (n)
//    {
//    case 10: return "A";
//    case 11: return "B";
//    case 12: return "C";
//    case 13: return "D";
//    case 14: return "E";
//    case 15: return "F";
//    }
//}
//
//string getNBinary(int n, int t, int m, int p) {
//
//    //최소 구해야하는 숫자
//    int num = t * m;
//
//    string str;
//    str += "0";
//
//    for (int i = 1; i < num; i++) {
//        string temp;
//        int tempNum = i;
//        while (tempNum > 0) {
//            temp += (tempNum % n >= 10 ? getNChar(tempNum % n) : to_string(tempNum % n));
//            tempNum /= n;
//        }
//        reverse(temp.begin(), temp.end());
//        str += temp;
//    }
//
//    string answer;
//    for (int i = p - 1; i < str.size(); i += m) {
//        answer += str[i];
//        if (answer.size() == t) {
//            break;
//        }
//    }
//    
//    return answer;
//}
//
//string solution(int n, int t, int m, int p) {
//    string answer = "";
//
//    answer = getNBinary(n, t, m, p);
//
//    return answer;
//}
//
//int main() {
//
//    cout << solution(2, 4, 2, 1) << endl;
//
//    //string s = "abcdedfg";
//    ////a d f를 출력하고 싶다면
//    //for (int i = 1; i < s.size(); i++) {
//    //    if (i % 3 == 0) {
//    //        cout << s[i] << endl;
//    //    }
//    //}
//
//    // 1 3 5 7
//
//    return 0;
//}