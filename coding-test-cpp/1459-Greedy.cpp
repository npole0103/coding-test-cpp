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
//int main() {
//
//    long long x, y, w, s;
//    cin >> x >> y >> w >> s;
//
//    //모두 도로로 가는 경우
//    long long road = (x + y) * w;
//
//    //대각선으로 가는 경우
//    long long cross = min(x, y) * s;
//    long long leftover = abs(x - y);
//
//    //1은 도로가 작은 경우, 2+3은 잔여 거리가 가중치가 작은 경우
//    //1. 잔여 거리 모두 도로로
//    //2. 잔여 거리가 짝수라면 잔여 거리 모두 대각선으로
//    //3. 잔여 거리가 홀수라면 (잔여 거리 - 1)*대각 + 도로
//    cross += min(leftover * w, (leftover % 2 == 0 ? leftover * s : (leftover - 1) * s + w));
//
//    cout << min(cross, road) << endl;
//
//    return 0;
//}