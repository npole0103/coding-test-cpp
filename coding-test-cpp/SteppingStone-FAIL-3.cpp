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
//    vector<int> answer;
//
//    for (int i = 0; i <= stones.size() - k; i++) {
//        int maxNum = *max_element(&stones[i], &stones[i + k]);
//        answer.push_back(maxNum);
//    }
//
//    return *min_element(answer.begin(), answer.end());
//}
//
//int main() {
//
//    vector<int> v1 = { 2,4,5,3,2,1,4,2,5,1};
//    cout << solution(v1, 3) << endl;
//
//    return 0;
//}