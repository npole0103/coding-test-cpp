//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//    int answer = 0;
//
//    sort(people.begin(), people.end());
//
//    int idx = 0;
//
//    while (idx < people.size()) {
//        int back = people.back();
//        people.pop_back();
//        if (people[idx] + back <= limit) {
//            answer++; //�� �κ� ���
//            idx++; //�� �κ� ���� ���
//        }
//        else {
//            answer++; //�� ������ ��� �¿��� ������ �� ī��Ʈ
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    vector<int> v({ 70, 80 });
//
//    cout << *upper_bound(v.begin(), v.end(), 30) << endl;
//
//    return 0;
//}