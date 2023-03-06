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
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    long long answer = 0;
//    long long k;
//
//    int num;
//    cin >> num;
//
//    vector<int> v(num, 0);
//
//    for (int i = 0; i < num; i++) {
//        cin >> v[i];
//    }
//
//    cin >> k;
//
//    //sum 초기값 v[0]
//    int sum = v[0];
//    int end = 0;
//
//    //start, end로 투포인터
//    for (int start = 0; start < num; start++) {
//        //만약 end가 num 범위 미만이며, sum이 k값을 초과하지 않았다면
//        while (end < num && sum <= k) {
//            // v[end]를 계속 sum에 더함
//            end++;
//            if (end != num) {
//                sum += v[end];
//            }
//        }
//
//        //end가 num과 같아졌다면 종료
//        if (end == num) {
//            break;
//        }
//
//        //현재 범위인 start, end가 k를 초과한 범위니까 이후 나머지 값을 다 더해줘도 초과될 것임
//        //그러므로 num(전체) - end(초과한 시점)을 빼서 나머지 자연수들의 갯수만큼 더해주면 됨
//        answer += num - end;
//        
//        //다음 순회를 위해 v[start] 빼주기
//        sum -= v[start];
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}