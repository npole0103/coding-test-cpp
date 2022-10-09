//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//vector<int> solution(int brown, int yellow) {
//    vector<int> answer;
//
//    int outSide = (brown + 4) / 2;
//
//    for (int i = 1; i < outSide / 2 + 1; i++) {
//        if (i * abs(i - outSide) - brown == yellow) {
//            answer.push_back(abs(i - outSide));
//            answer.push_back(i);
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