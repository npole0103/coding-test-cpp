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
//    int answer = 0;
//
//    int n;
//    cin >> n;
//    deque<int> dq(n, 0);
//
//    for (int i = 0; i < n; i++) {
//        cin >> dq[i];
//    }
//
//    //���� ª�� ü�κ��� �׸����ϰ�
//    sort(dq.begin(), dq.end());
//
//    while (true) {
//
//        //���� ��� ����Ǿ��ٸ�
//        if (dq.size() == 1 || dq.size() == 0) {
//            cout << answer << endl;
//            break;
//        }
//
//        dq[0]--; //�� �� �� �ϳ��� ����
//        dq.pop_back(); //�� �ڿ� ü�� ����(����)
//        answer++; //������ ü�� ���� ����
//
//        //�� �� ���� ��� �����ߴٸ�
//        if (dq[0] == 0) {
//            dq.pop_front();
//        }
//    }
//
//    return 0;
//}