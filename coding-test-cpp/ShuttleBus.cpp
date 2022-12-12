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
//map<string, vector<string>> msi;
//
//string addMinutes(string time, int min) {
//    istringstream iss(time);
//    string buf;
//
//    vector<int> v;
//    while (getline(iss, buf, ':')) {
//        v.push_back(stoi(buf));
//    }
//
//    if (min < 0) {
//        v[0]--;
//        v[1] += 60;
//    }
//
//    v[1] += min;
//    v[0] += v[1] / 60;
//    v[1] %= 60;
//
//    buf = "";
//    buf.append(v[0] < 10 ? "0" + to_string(v[0]) : to_string(v[0]))
//       .append(":")
//       .append(v[1] < 10 ? "0" + to_string(v[1]) : to_string(v[1]));
//    
//    return buf;
//}
//
//string solution(int n, int t, int m, vector<string> timetable) {
//    string answer = "";
//
//    //운행시간 map
//    string time = "09:00";
//    for (int i = 0; i < n; i++) {
//        msi[time];
//        time = addMinutes(time, t);
//    }
//
//    sort(timetable.begin(), timetable.end());
//
//    for (const auto& et : timetable) {
//        for (const auto& em : msi) {
//            //여석이 있고 셔틀 도착 전이라면
//            if (em.second.size() < m && et <= em.first) {
//                msi[em.first].push_back(et);
//                break;
//            }
//        }
//    }
//
//    for (const auto& e : msi) {
//        cout << e.first << " : ";
//        for (const auto& ee : e.second) {
//            cout << ee << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//
//    
//    if (prev(msi.end())->second.size() < m) {
//        //맨 마지막 셔틀이 여석이 있다면
//        return prev(msi.end())->first;
//    }
//    else {
//        //맨 마지막 셔틀에 여석이 없다면
//        //timetable의 사람들 정렬 후 마지막보다 1분 전 탑승
//        vector<string> v = prev(msi.end())->second;
//        sort(v.begin(), v.end());
//        return addMinutes(v.back(), -1);
//    }
//}
//
//int main() {
//
//    /*
//    1. 셔틀은 9시부터 n회 t분 간격 m명 탈 수 있다.
//    2. 대기 순서에 있는 크루들도 다 태우고 간다.
//
//    */
//
//    return 0;
//}