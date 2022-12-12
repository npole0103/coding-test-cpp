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
//    //����ð� map
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
//            //������ �ְ� ��Ʋ ���� ���̶��
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
//        //�� ������ ��Ʋ�� ������ �ִٸ�
//        return prev(msi.end())->first;
//    }
//    else {
//        //�� ������ ��Ʋ�� ������ ���ٸ�
//        //timetable�� ����� ���� �� ���������� 1�� �� ž��
//        vector<string> v = prev(msi.end())->second;
//        sort(v.begin(), v.end());
//        return addMinutes(v.back(), -1);
//    }
//}
//
//int main() {
//
//    /*
//    1. ��Ʋ�� 9�ú��� nȸ t�� ���� m�� Ż �� �ִ�.
//    2. ��� ������ �ִ� ũ��鵵 �� �¿�� ����.
//
//    */
//
//    return 0;
//}