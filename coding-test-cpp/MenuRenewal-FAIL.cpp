//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//map<int, set<string>> m;
//
//string getIntersection(string s1, string s2) {
//
//    vector<char> order1(s1.begin(), s1.end());
//    vector<char> order2(s2.begin(), s2.end());
//
//    sort(order1.begin(), order1.end());
//    sort(order2.begin(), order2.end());
//
//    vector<char> buff(order1.size() + order2.size());
//    auto iter = set_intersection(order1.begin(), order1.end(), order2.begin(), order2.end(), buff.begin());
//    buff.erase(iter, buff.end());
//
//    string temp;
//    for (const auto& e : buff) {
//        temp += e;
//    }
//
//    return temp;
//}
//
//vector<string> solution(vector<string> orders, vector<int> course) {
//    vector<string> answer;
//
//    /*
//    �޴� ���� ����
//    ���� ��ǰ �޴��� �ڽ��丮��
//    �ڽ��丮�� �ּ� 2���� ��ǰ
//    2�� �̻��� �մ����κ��� �ֹ��� ��ǰ ���տ� ���ؼ��� �ڽ��丮
//    */
//
//    //��� �迭 ������ ���ڿ� ���ϱ�
//    for (int i = 0; i < orders.size(); i++) {
//        for (int j = 0; j < orders.size(); j++) {
//            if (i == j) {
//                continue;
//            }
//            string s = getIntersection(orders[i], orders[j]);
//            m[s.size()].insert(s);
//        }
//    }
//
//    for (const auto& e : m) {
//        cout << e.first << ": ";
//        for (const auto& ee : e.second) {
//            cout << ee << " ";
//        }
//        cout << endl;
//    }
//
//    map<int, vector<string>> msi;
//
//    //�޴� ����
//    for (const auto& num : course) {
//        int maxCnt = 0;
//        //num�� �ش��ϴ� ���ڿ���
//        for (const auto& intersectionStr : m[num]) {
//            int cnt = 0;
//            for (const auto& order : orders) {
//                if (intersectionStr == getIntersection(order, intersectionStr)) {
//                    cnt++;
//                }
//            }
//            maxCnt = max(maxCnt, cnt);
//            msi[cnt].push_back(intersectionStr);
//        }
//
//        for (const auto& e : msi[maxCnt]) {
//            answer.push_back(e);
//        }
//        msi.clear();
//    }
//
//    sort(answer.begin(), answer.end());
//
//    return answer;
//}
//
//int main() {
//
//    string s1 = "abcd";
//    string s2 = "abcd";
//
//    vector<char> order1(s1.begin(), s1.end());
//    vector<char> order2(s2.begin(), s2.end());
//
//    sort(order1.begin(), order1.end());
//    sort(order2.begin(), order2.end());
//
//    vector<char> buff(order1.size() + order2.size());
//    auto iter = set_intersection(order1.begin(), order1.end(), order2.begin(), order2.end(), buff.begin());
//    buff.erase(iter, buff.end());
//
//    for (const auto& e : buff) {
//        cout << e << " ";
//    }
//    cout << endl;
//
//    return 0;
//}