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
//int solution(vector<int> elements) {
//    set<int> s;
//    int n = elements.size();
//
//    elements.resize(2 * n);
//
//    for (int i = n; i < elements.size(); i++) {
//        elements[i] = elements[i - n];
//    }
//
//    //i는 부분 수열의 길이
//    for (int i = 1; i <= n; i++) {
//
//        //초기합 만들기
//        int sum = 0;
//        for (int j = 0; j < i; j++) {
//            sum += elements[j];
//        }
//
//        s.insert(sum);
//
//        //투포인터로 sum 종류 구하기
//        for (int j = 0; j < elements.size() - i; j++) {
//            sum -= elements[j];
//            sum += elements[j + i];
//            s.insert(sum);
//        }
//    }
//
//    return s.size();
//}
//
//int main() {
//
//    return 0;
//}