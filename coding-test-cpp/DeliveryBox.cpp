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
//int solution(vector<int> order) {
//    int answer = 0;
//
//    queue<int> mainCon;
//    stack<int> subCon;
//
//    //mainContainer 초기화
//    for (int i = 0; i < order.size(); i++) {
//        mainCon.push(i + 1);
//    }
//
//    //작업 처리
//    for (int i = 0; i < order.size(); i++) {
//        int curValue = order[i];
//
//        //서브 컨테이너에 curValue 있는지 확인
//        if (!subCon.empty() && subCon.top() == curValue) {
//            subCon.pop();
//            answer++;
//            continue;
//        }
//
//        //메인 컨테이너 물류 찾을 때까지 subCon에 넣음
//        while (!mainCon.empty() && mainCon.front() != curValue) {
//            subCon.push(mainCon.front());
//            mainCon.pop();
//        }
//
//        //mainCon.front()와 상자 번호 일치한다면
//        if (!mainCon.empty() && mainCon.front() == curValue) {
//            mainCon.pop();
//            answer++;
//            continue;
//        }
//
//        //여기까지 왔다는 건 mainCon, subCon 둘 다 없다는 말
//        break;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    // 1 2 3 4 5
//    // 4 3 1 2 5
//    // 
//    // 
//    // 
//    // 
//    // 4 3 1 2 5
//    // 3 1 2
//    // 4 5
//
//    //5 4 3 2 1
//    // 1 2 3 4 
//    // 5
//
//    return 0;
//}