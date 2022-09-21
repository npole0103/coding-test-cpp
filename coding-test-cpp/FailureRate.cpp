//#include <string>
//#include <vector>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
////실패율 기준 오름차순, 같다면 작은 번호 스테이지 순으로 정렬
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
//    //s: n까지의 집합이 들어있는 set
//    set<int> s;
//    for (int i = 1; i <= N; i++) {
//        s.insert(i);
//    }
//
//    //s: stages의 정보가 들어있는 multiset
//    multiset<int> ms(stages.begin(), stages.end());
//    vector<pair<int, double>> v;
//
//    for (const auto& e : s) {
//        //set의 요소 e를 발견 했다면
//        if (ms.find(e) != ms.end()) {
//            if (e == (N + 1)) { //카운트 할 필요 없음.
//                continue;
//            }
//            v.push_back({ e, (double)ms.count(e) / ms.size() });
//            //multiset은 erase하면 안에 있는 모든 요소가 삭제됨.
//            ms.erase(e);
//        }
//        //set의 요소 e가 없는 경우 실패율은 0
//        else {
//            v.push_back({ e, 0 });
//        }
//    }
//
//    //실패율 기준으로 오름차순 정렬
//    sort(v.begin(), v.end(), compare);
//
//    for (const auto& e : v) {
//        answer.push_back(e.first);
//    }
//
//    return answer;
//}