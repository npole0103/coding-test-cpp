//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
////index
//queue<int> q;
//
//int solution(vector<int> priorities, int location) {
//    int answer = 0;
//
//    for (int i = 0; i < priorities.size(); i++) {
//        q.push(i);
//    }
//
//    vector<int> v; //출력 순서 벡터
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        if (priorities[cur] != *max_element(priorities.begin(), priorities.end())) {
//            q.push(cur);
//        }
//        else {
//            //해당 인덱스를 원본 벡터에서 가장 작은 값으로 만들기
//            priorities[cur] = 0;
//            v.push_back(cur);
//        }
//    }
//
//    for (int i = 0; i < v.size(); i++) {
//        if (v[i] == location) {
//            return i + 1;
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