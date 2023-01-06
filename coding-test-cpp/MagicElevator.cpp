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
//int solution(int storey) {
//    int answer = 0;
//    int n;
//
//    while (storey > 0) {
//        if (storey % 10 == 5) {
//            
//            n = storey / 10;
//
//            //옆 자리수
//            if (n % 10 >= 5) {
//                answer += 5;
//                storey += 5; // 올림
//            }
//            else {
//                answer += 5;
//            }
//        }
//        else if (storey % 10 > 5) {
//            answer += 10 - (storey % 10);
//            storey += 10 - (storey % 10); //올림
//        }
//        else {
//            answer += (storey % 10);
//        }
//
//        storey /= 10;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//
//    65 -> 70
//
//    45 -> 40
//    
//    */
//
//    return 0;
//}