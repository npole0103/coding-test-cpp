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
//long long solution(int n, vector<int> times) {
//    long long answer = 0;
//    long long min = 1;
//    long long max = n * (long long)*max_element(times.begin(), times.end());
//
//    //최대값과 최소값이 바뀌는 구간이 가장 최소 시간
//    while (min <= max) {
//        long long avg = (max + min) / 2;
//        long long possibleNum = 0;
//
//        //현재 avg 시간 기준으로 몇 명의 사람 처리 가능한가?
//        for (int i = 0; i < times.size(); i++) {
//            possibleNum += (avg / (long long)times[i]);
//        }
//
//        //n 보다 많은 사람을 처리할 수 있다면
//        if (possibleNum >= n) {
//            answer = avg;
//            max = avg - 1;
//        }
//        else {
//            min = avg + 1;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}