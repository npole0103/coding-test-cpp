//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//int answer = 0;
//map<int, pair<int, int>> m; //number - pair<pow, acc>
//
//int getPow(int num) {
//    int result = 1;
//
//    while (result < num) {
//        result *= 2;
//    }
//    return result;
//}
//
//int solution(vector<vector<int>> queries) {
//
//    //�迭�� ���Ҹ� �߰��ϴ� �۾�
//    //�迭�� ũ��� �迭�� ������ �� �����Ǿ� ��ġ ����
//    //���Ҹ� �߰����� �� �迭�� ũ�Ⱑ ������ ������ �۴ٸ�
//    //��� ���Ҹ� ���� �� �ִ� �� ū �迭�� �غ��ؼ� ���� �迭 �̵�
//
//    //�ʱ� �迭 ũ�� 0
//
//
//    for (int i = 0; i < queries.size(); i++) {
//        //���� m���� ã�Ҵٸ�
//        if (m.find(queries[i][0]) != m.end()) {
//            //�迭 ũ�� >= ���� ���� + ���� ����ִ� ����
//            if (m[i].first >= queries[i][1] + m[i].second) {
//                m[i].second += queries[i][1];
//            }
//            //pow ������Ʈ
//            else {
//                m[i].first = getPow(queries[i][1] + m[i].second);
//                //������� ����� ���� ����
//                answer += m[i].second;
//                m[i].second += queries[i][1];
//            }
//        }
//        //m���� �� ã�Ҵٸ� ���� �� ���� �� - �ʱ�ȭ
//        else {
//            m.insert({ queries[i][0] , { getPow(queries[i][1]), queries[i][1]} }); //���� + 
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    int num = 9;
//    int result = 1;
//
//    while (result < num) {
//        result *= 2;
//    }
//
//    cout << result << endl;
//
//    return 0;
//}