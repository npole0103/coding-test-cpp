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
//    //mainContainer �ʱ�ȭ
//    for (int i = 0; i < order.size(); i++) {
//        mainCon.push(i + 1);
//    }
//
//    //�۾� ó��
//    for (int i = 0; i < order.size(); i++) {
//        int curValue = order[i];
//
//        //���� �����̳ʿ� curValue �ִ��� Ȯ��
//        if (!subCon.empty() && subCon.top() == curValue) {
//            subCon.pop();
//            answer++;
//            continue;
//        }
//
//        //���� �����̳� ���� ã�� ������ subCon�� ����
//        while (!mainCon.empty() && mainCon.front() != curValue) {
//            subCon.push(mainCon.front());
//            mainCon.pop();
//        }
//
//        //mainCon.front()�� ���� ��ȣ ��ġ�Ѵٸ�
//        if (!mainCon.empty() && mainCon.front() == curValue) {
//            mainCon.pop();
//            answer++;
//            continue;
//        }
//
//        //������� �Դٴ� �� mainCon, subCon �� �� ���ٴ� ��
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