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
//int solution(vector<int> topping) {
//    int answer = 0;
//
//    map<int, int> m1;
//    map<int, int> m2;
//
//    for (const auto& e : topping) {
//        m2[e]++;
//    }
//
//    for (auto it = topping.begin(); it != topping.end(); it++) {
//        
//        m1[*it]++;
//
//        if (m2.count(*it) != 0) {
//            m2[*it]--;
//            if (m2[*it] == 0) {
//                m2.erase(*it);
//            }
//        }
//
//        if (m1.size() == m2.size()) {
//            answer++;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    
//    롤케잌에 올려진 토핑을 동일한 가짓수로 나누는 것
//
//    */
//
//    return 0;
//}