//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//int answer = 0;
//map<int, pair<int, int>> m; //number - pair<pow, acc>
//
//int getPow(int num) {
//    int result = 1;
//
//    while (result < num) {
//        result *= 2;
//    }
//    return result;
//}
//
//int solution(vector<vector<int>> queries) {
//
//    //배열에 원소를 추가하는 작업
//    //배열의 크기는 배열이 생성될 때 결정되어 변치 않음
//    //원소를 추가했을 때 배열의 크기가 원소의 수보다 작다면
//    //모든 원소를 담을 수 있는 더 큰 배열을 준비해서 기존 배열 이동
//
//    //초기 배열 크기 0
//
//
//    for (int i = 0; i < queries.size(); i++) {
//        //만약 m에서 찾았다면
//        if (m.find(queries[i][0]) != m.end()) {
//            //배열 크기 >= 담을 갯수 + 현재 들어있는 갯수
//            if (m[i].first >= queries[i][1] + m[i].second) {
//                m[i].second += queries[i][1];
//            }
//            //pow 업데이트
//            else {
//                m[i].first = getPow(queries[i][1] + m[i].second);
//                //현재까지 저장된 갯수 복사
//                answer += m[i].second;
//                m[i].second += queries[i][1];
//            }
//        }
//        //m에서 못 찾았다면 사용된 적 없는 것 - 초기화
//        else {
//            m.insert({ queries[i][0] , { getPow(queries[i][1]), queries[i][1]} }); //제곱 + 
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    int num = 9;
//    int result = 1;
//
//    while (result < num) {
//        result *= 2;
//    }
//
//    cout << result << endl;
//
//    return 0;
//}