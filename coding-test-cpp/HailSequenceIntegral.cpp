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
//double getArea(int u, int d) {
//    return (double)((u + d) * 1) / (double)2;
//}
//
//vector<double> solution(int k, vector<vector<int>> ranges) {
//    vector<double> answer;
//    vector<int> v;
//    vector<double> area;
//    
//    int n = k;
//    //콜라츠 추측 실행
//    v.push_back(n);
//    while (n != 1) {
//        if (n % 2 == 0) {
//            n /= 2;
//            v.push_back(n);
//        }
//        else {
//            n = 3 * n + 1;
//            v.push_back(n);
//        }
//    }
//
//    //넓이 구하기
//    for (int i = 0; i < v.size() - 1; i++) {
//        area.push_back(getArea(v[i], v[i + 1]));
//    }
//
//    //누적합 계산
//    for (int i = 1; i < area.size(); i++) {
//        area[i] += area[i - 1];
//    }
//
//    area.insert(area.begin(), 0);
//
//    for (const auto& e : ranges) {
//        int start = e[0];
//        int end = v.size() - 1 + e[1];
//
//        if (start > end) {
//            answer.push_back(-1.0);
//            continue;
//        }
//
//        answer.push_back((double)(area[end] - area[start]));
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    
//    5 16 8 4 2 1
//    
//    */
//
//    return 0;
//}