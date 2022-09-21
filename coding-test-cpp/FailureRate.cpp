//#include <string>
//#include <vector>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
////������ ���� ��������, ���ٸ� ���� ��ȣ �������� ������ ����
//bool compare(pair<int, double> a, pair<int, double> b) {
//    if (a.second == b.second) {
//        return a.first < b.first;
//    }
//    return a.second > b.second;
//}
//
//vector<int> solution(int N, vector<int> stages) {
//    vector<int> answer;
//
//    //s: n������ ������ ����ִ� set
//    set<int> s;
//    for (int i = 1; i <= N; i++) {
//        s.insert(i);
//    }
//
//    //s: stages�� ������ ����ִ� multiset
//    multiset<int> ms(stages.begin(), stages.end());
//    vector<pair<int, double>> v;
//
//    for (const auto& e : s) {
//        //set�� ��� e�� �߰� �ߴٸ�
//        if (ms.find(e) != ms.end()) {
//            if (e == (N + 1)) { //ī��Ʈ �� �ʿ� ����.
//                continue;
//            }
//            v.push_back({ e, (double)ms.count(e) / ms.size() });
//            //multiset�� erase�ϸ� �ȿ� �ִ� ��� ��Ұ� ������.
//            ms.erase(e);
//        }
//        //set�� ��� e�� ���� ��� �������� 0
//        else {
//            v.push_back({ e, 0 });
//        }
//    }
//
//    //������ �������� �������� ����
//    sort(v.begin(), v.end(), compare);
//
//    for (const auto& e : v) {
//        answer.push_back(e.first);
//    }
//
//    return answer;
//}