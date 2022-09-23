//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//using namespace std;
//
////10진수 변환 함수
//string numberStr = "0123456789";
//string decToK(int num, int binary) {
//    string result;
//    if (num == 0) {
//        return "0";
//    }
//    while (num > 0) {
//        result = numberStr[num % binary] + result;
//        num /= binary;
//    }
//    return result;
//}
//
////소수 판별 함수
//bool isPrime(long n) {
//    if (n <= 1) {
//        return false;
//    }
//
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int solution(int n, int k) {
//    int answer = 0;
//
//    string kNum = decToK(n, k);
//    string temp = "";
//
//    for (int i = 0; i < kNum.size(); i++) {
//
//        //0P인 경우
//        if (i == kNum.size() - 1) {
//            temp += kNum[i];
//            if (!temp.empty() && isPrime(stol(temp))) {
//                answer++;
//            }
//        }
//
//        //PO + OPO인 경우
//        if (kNum[i] == '0') {
//            if (!temp.empty() && isPrime(stol(temp))) {
//                answer++;
//            }
//            temp = "";
//            continue;
//        }
//        temp += kNum[i];
//    }
//
//    return answer;
//}
//
//int main() {
//    
//    int n = 437674, k = 3;
//
//    string str;
//    while (n) {
//        str += n % k + 48;
//        n /= k;
//    }
//    reverse(str.begin(), str.end());
//    str += 48;
//
//    cout << str << endl;
//	
//    return 0;
//}