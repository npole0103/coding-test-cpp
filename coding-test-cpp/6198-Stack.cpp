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
//    /*
//    1. 매번 자기보다 높은 빌딩만 남기고 전부 pop
//    2. 높은 애들만 남은 stack.size()를 합
//    */
//
//    stack<int> s;
//    long long answer = 0;
//    int h = 0;
//
//    int n;
//    cin >> n;
//
//    while (n-- > 0) {
//        cin >> h;
//        
//        while (!s.empty() && s.top() <= h) {
//            s.pop();
//        }
//
//        //나보다 큰 빌딩만 스택에 남았으므로, 모두 다 나를 카운팅 해야하기 때문에 += s.size()
//        answer += (long long)s.size();
//        s.push(h);
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}