//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//map<string, int> m;
//
//int solution(vector<vector<string>> clothes) {
//    int answer = 1;
//
//    for (const auto& e : clothes) {
//        m[e[1]]++;
//    }
//
//    //�ƹ��͵� ���� ���ϴ� ��� + 1�ؼ� ��ü ����� �� ����
//    for (const auto& e : m) {
//        answer *= (e.second + 1);
//    }
//    //��� �ƹ��͵� �� �Դ� ��� 1������ ������ ��
//    return answer - 1;
//}
//int main() {
//
//    return 0;
//}