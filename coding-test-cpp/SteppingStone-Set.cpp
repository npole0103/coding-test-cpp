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
//int solution(vector<int> stones, int k) {
//    
//    int answer = 1e9;
//    multiset<int> s;
//
//    //n개를 순회하면서 K개씩 집합으로 묶고, 해당 집합에서의 최댓값과 answer 중 작은 값 저장
//    for (int i = 0; i <= stones.size(); i++) {
//        if (s.size() == k) {
//            auto it = prev(s.end());
//            answer = min(answer, *it);
//            s.erase(s.find(stones[i - k]));
//        }
//        s.insert(stones[i]);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    vector<int> v1 = { 2,4,5,3,2,1,4,2,5,1};
//    cout << solution(v1, 3) << endl;
//
//    return 0;
//}