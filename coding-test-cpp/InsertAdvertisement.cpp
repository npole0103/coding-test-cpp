//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//#include <sstream>
//using namespace std;
//
//vector<int> videoFullTime(360000, 0);
//
//string secToTime(int sec) {
//    int h = sec / 3600;
//    sec %= 3600;
//
//    int m = sec / 60;
//    sec %= 60;
//
//    int s = sec;
//
//    string time;
//    time += h < 10 ? "0" + to_string(h) + ":" : to_string(h) + ":";
//    time += m < 10 ? "0" + to_string(m) + ":" : to_string(m) + ":";
//    time += s < 10 ? "0" + to_string(s) : to_string(s);
//
//    return time;
//}
//
//int timeToSec(string time) {
//    
//    istringstream iss(time);
//    vector<string> t;
//    string buf;
//
//    while (getline(iss, buf, ':')) {
//        t.push_back(buf);
//    }
//
//    return 3600 * stoi(t[0]) + 60 * stoi(t[1]) + stoi(t[2]);
//}
//
//void writeLogToVideoTime(string log) {
//
//    istringstream iss(log);
//    vector<string> times;
//    string buf;
//
//    while (getline(iss, buf, '-')) {
//        times.push_back(buf);
//    }
//    
//    //imos 기록
//    videoFullTime[timeToSec(times[0])] += 1;
//    videoFullTime[timeToSec(times[1])] -= 1;
//}
//
//string solution(string play_time, string adv_time, vector<string> logs) {
//    string answer = "";
//    long long sumSec = 0;
//    long long maxSumSec = 0;
//    int maxIdxSec = 0;
//
//    int playSec = timeToSec(play_time);
//    int advSec = timeToSec(adv_time);
//
//    for (const auto& log : logs) {
//        writeLogToVideoTime(log);
//    }
//
//    //imos 누적합 구하기
//    for (int i = 1; i < playSec; i++) {
//        videoFullTime[i] += videoFullTime[i - 1];
//    }
//
//    //초기 공익 광고 sum 구하기
//    for (int i = 0; i < advSec; i++) {
//        sumSec += (long long)videoFullTime[i];
//    }
//
//    //sum 정보를 이용한 투포인터
//    maxSumSec = sumSec;
//    for (int i = advSec; i < playSec; i++) {
//        sumSec -= (long long)videoFullTime[i - advSec]; //sum의 HEAD 제거
//        sumSec += (long long)videoFullTime[i]; //sum에 새로운 값 추가
//
//        if (sumSec > maxSumSec) {
//            maxSumSec = sumSec;
//            maxIdxSec = i - advSec + 1;
//        }
//    }
//
//    return secToTime(maxIdxSec);
//}
//
//int main() {
//
//    /*
//    
//    시청자들이 가장 많이 보는 구간에 공익광고
//    - 시청자들이 해당 동영상의 어떤 구간을 재생했는지에 대한 기록
//    - 
//
//    0 1 0 1 0 -2 0 0
//    0 1 1 2 2 0 0 0
//    0 1 2 4 6 6 6 6
//
//    0 1 2 3
//    0 1 1 1
//
//    투포인터 참고
//    https://wadekang.tistory.com/18
//
//    */
//
//    return 0;
//}