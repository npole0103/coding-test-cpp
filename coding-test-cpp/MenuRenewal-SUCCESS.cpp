//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
////m[idx]���� idx�� ������ ��
////key-value: �����̸�, Ƚ��
//map<string, int> m[11];
//
////���� ���� �ߺ��� �� ����
//int maxCnt[11];
//
//void comb(string str, int cnt, string result) {
//    if (cnt == str.size()) {
//        cout << result << " ";
//        int strSize = result.size();
//        m[strSize][result]++;
//        maxCnt[strSize] = max(maxCnt[strSize], m[strSize][result]);
//        return;
//    }
//
//    //����
//    comb(str, cnt + 1, result + str[cnt]);
//    comb(str, cnt + 1, result);
//}
//
//vector<string> solution(vector<string> orders, vector<int> course) {
//    vector<string> answer;
//
//    for (auto& e : orders) {
//        //���� ���� �� ������������
//        sort(e.begin(), e.end());
//        comb(e, 0, "");
//        cout << endl << endl;
//    }
//
//    for (int i = 0; i < 11; i++) {
//        for (const auto& e : m[i]) {
//            cout << e.first << " " << e.second << endl;
//        }
//        cout << endl;
//    }
//
//    //num���� �ڽ�
//    for (const auto& num : course) {
//        //m[num]���� num�� �ش��ϴ� key-value: �����̸�-Ƚ���� �������
//        for (const auto e : m[num]) {
//            //������ �ִ�� ���̳��� ���̸� 2�̻��� ��
//            if (e.second == maxCnt[num] && e.second >= 2) {
//                answer.push_back(e.first);
//            }
//        }
//    }
//
//    sort(answer.begin(), answer.end());
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}