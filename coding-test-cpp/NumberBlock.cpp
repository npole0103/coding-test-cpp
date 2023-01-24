//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//using namespace std;
//
//int checkNum(int n) {
//    //소수라면 1리턴, 소수가 아니라면 최대 약수(원래 수를 최소 약수로 나눈 수) 리턴
//    int num = sqrt(n);
//
//    for (int i = 2; i <= num; i++) {
//        if (n % i == 0 && n / i <= 10000000) {
//            return n / i;
//        }
//    }
//
//    return 1;
//}
//
//vector<int> solution(long long begin, long long end) {
//    vector<int> answer;
//
//    for (int i = begin; i <= end; i++) {
//        answer.push_back(checkNum(i));
//    }
//
//    if (begin == 1) {
//        answer[0] = 0;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    //https://hwan-shell.tistory.com/306
//
//    return 0;
//}