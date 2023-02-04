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
//int timeToMin(string time) {
//    istringstream iss(time);
//    string buf;
//    vector<int> v;
//
//    while (getline(iss, buf, ':')) {
//        v.push_back(stoi(buf));
//    }
//    
//    return v[0] * 60 + v[1];
//}
//
//int solution(vector<vector<string>> book_time) {
//    int answer = 0;
//
//    vector<int> time(1450, 0);
//
//    for (const auto& e : book_time) {
//        int start = timeToMin(e[0]);
//        int end = timeToMin(e[1]) + 10;
//        time[start] += 1;
//        time[end] += -1;
//    }
//
//    for (int i = 1; i < 1450; i++) {
//        time[i] += time[i - 1];
//        answer = max(answer, time[i]);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}