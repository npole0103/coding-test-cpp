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
//void createWantSet(multiset<string>& wantSet, const vector<string> want, vector<int> number) {
//    for (int i = 0; i < want.size(); i++) {
//        while (number[i]-- > 0) {
//            wantSet.insert(want[i]);
//        }
//    }
//}
//
//int solution(vector<string> want, vector<int> number, vector<string> discount) {
//    int answer = 0;
//
//    multiset<string> ws;
//    multiset<string> ds;
//
//    createWantSet(ws, want, number);
//
//    int idx = 0;
//    while (idx < discount.size()) {
//        if (ds.size() < 10) {
//            ds.insert(discount[idx]);
//        }
//
//        if (ds.size() == 10) {
//            if (ws == ds) {
//                answer++;
//            }
//            auto it = ds.find(discount[idx - 10 + 1]);
//            ds.erase(it);
//        }
//
//        idx++;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    * ������ �ݾ� �����ϸ� 10�ϰ� ȸ��
//    * ���� �� ���� ��ǰ ���� ���
//    * �����ϴ� ��ǰ�� �Ϸ翡 �ϳ����� ���� ����
//    * �ڽ��� ���ϴ� ��ǰ�� ������ �����ϴ� ��¥�� 10�� �������� ��ġ�� ��쿡 ���缭 ȸ������
//
//    */
//
//    return 0;
//}