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
//    1. �Ź� �ڱ⺸�� ���� ������ ����� ���� pop
//    2. ���� �ֵ鸸 ���� stack.size()�� ��
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
//        //������ ū ������ ���ÿ� �������Ƿ�, ��� �� ���� ī���� �ؾ��ϱ� ������ += s.size()
//        answer += (long long)s.size();
//        s.push(h);
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}