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
//vector<int> solution(vector<int> numbers) {
//    vector<int> answer(numbers.size(), 0);
//
//    stack<int> s;
//
//    for (int i = numbers.size() - 1; i >= 0; i--) {
//        while (true) {
//            if (!s.empty()) {
//                if (numbers[i] < s.top()) {
//                    answer[i] = s.top();
//                    break;
//                }
//                else {
//                    s.pop();
//                }
//            }
//            else {
//                answer[i] = -1;
//                break;
//            }
//        }
//
//        s.push(numbers[i]);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}