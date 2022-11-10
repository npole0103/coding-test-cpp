//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
//set<string> s;
//vector<string> v;
//int cSize = 0;
//
//int insert(string city) {
//    if (cSize == 0) {
//        return 5;
//    }
//
//    //최대 사이즈 이하라면
//    if (s.size() < cSize) {
//        //만약 중복된 값이라면
//        if (s.find(city) != s.end()) {
//            v.erase(remove(v.begin(), v.end(), city), v.end());
//            v.push_back(city);
//
//            return 1;
//        }
//        else {
//            s.insert(city);
//            v.push_back(city);
//            return 5;
//        }
//    }
//    else {
//        //캐시에 올라가있는 것이라면
//        if (s.find(city) != s.end()) {
//            v.erase(remove(v.begin(), v.end(), city), v.end());
//            v.push_back(city);
//
//            return 1;
//        }
//        else {
//            s.erase(v.front());
//            v.erase(v.begin());
//
//            s.insert(city);
//            v.push_back(city);
//
//            return 5;
//        }
//    }
//}
//
//int solution(int cacheSize, vector<string> cities) {
//    int answer = 0;
//
//    cSize = cacheSize;
//
//    for (const auto& e : cities) {
//        string city = e;
//        transform(city.begin(), city.end(), city.begin(), ::tolower);
//        answer += insert(city);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    vector<string> c = { "Jeju", "Pangyo", "Seoul", "NewYork", "LA", "SanFrancisco", "Seoul", "Rome", "Paris", "Jeju", "NewYork", "Rome" };
//
//    cout << solution(5, c) << endl;
//
//    return 0;
//}