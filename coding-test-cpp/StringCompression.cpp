//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int solution(string s) {
//    int answer = 1e9;
//
//    for (int i = 1; i <= (s.size() / 2) + 1; i++) {
//        string temp; //�ӽ� ���ڿ� ���� ����
//
//        //�ʱ� ����
//        int cnt = 1;
//        string prevStr = s.substr(0, i);
//
//        for (int j = i; j < s.size(); j += i) {
//            //���� ���ڿ��� ���� ���
//            if (prevStr == s.substr(j, i)) {
//                cnt++;
//            }
//            else {
//                //�ѹ� �̻� ���� ���̶��
//                if (cnt > 1) {
//                    temp += to_string(cnt);
//                }
//                temp += prevStr;
//
//                //prevStr ������Ʈ �� cnt = 1 �ʱ�ȭ
//                prevStr = s.substr(j, i);
//                cnt = 1;
//            }
//        }
//        //���ڿ��� �����ִ� ��� ����
//        if (cnt > 1) {
//            temp += to_string(cnt);
//        }
//        temp += prevStr;
//
//        answer = min(answer, (int)temp.size());
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}