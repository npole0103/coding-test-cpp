//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//int solution(vector<int> citations) {
//    int answer = 0;
//
//    sort(citations.begin(), citations.end(), greater<int>());    
//
//    //제일 큰 값이 0이면 0
//    if (!citations[0]) {
//        return 0;
//    }
//
//    for (int i = 0; i < citations.size(); i++) {
//        if (citations[i] > i) {
//            answer++;
//        }
//        else {
//            break;
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