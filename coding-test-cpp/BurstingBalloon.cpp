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
//int solution(vector<int> a) {
//    int answer = 0;
//    int minNum = 2e9;
//
//    //�ε��� ���� ���� ��� �� ���� ���� ��
//    vector<int> left(a.size());
//
//    //�ε��� ���� ������ ��� �� ���� ���� ��
//    vector<int> right(a.size());
//
//    //���� �ε������� ���� �ּڰ�
//    for (int i = 0; i < a.size(); i++) {
//        minNum = min(minNum, a[i]);
//        left[i] = minNum;
//    }
//
//    minNum = 2e9;
//
//    //���� �ε������� ������ �ּڰ�
//    for (int i = a.size() - 1; i >= 0; i--) {
//        minNum = min(minNum, a[i]);
//        right[i] = minNum;
//    }
//
//    for (int i = 0; i < a.size(); i++) {
//        //�ش� �ε��� �� a[i]�� left �ּ� Ȥ�� right �ּҺ��� �۰ų� ���ٸ� ������ ���� �� ����
//        //��ü 1���� �����ϱ� ����
//        if (a[i] <= left[i] || a[i] <= right[i]) {
//            answer++;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    * https://mind-devlog.tistory.com/74
//    * 
//    * 
//    * [-16, 27, 65, -2, 58, -92, -71, -68, -61, -33]
//    * 
//    * -2 �������� �Ǵ����� ��
//    * ���ʿ��� ���� ���� ���� -16
//    * �����ʿ��� ���� ���� ���� -92
//    * 
//    * -2 <= -16 || -2 <= -92
//    * ��� �ȵ�
//    * 
//    * ���ʰ� ������ �� �ϳ��� ������ ���� �ּڰ� ���� �۴ٸ�, ������ ������ ���� �Ἥ Ŀ�� ����
//    * 
//    �Ͽ��� ������ ǳ��
//    ���� �ٸ� ����
//    ǳ���� �� 1���� ���� ������ ��Ʈ��
//
//    ������ ������ �� ǳ���� �� �� �� ǳ�� �� �ϳ��� ��Ʈ��
//    ���� ǳ������ ���� ǳ���� ���̿� �� ������ ����ٸ�, �� ������ ������ ǳ���� �߾ӿ� ����
//    */
//
//    return 0;
//}