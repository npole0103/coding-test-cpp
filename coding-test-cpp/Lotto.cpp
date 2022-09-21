//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//using namespace std;
//
////vector<int> vec1{ 1,2,3,4,5 };
////vector<int> vec2{ 1,2,30,40,50 };
//
//vector<int> vec1{ 44, 1, 0, 0, 31, 25 };
//vector<int> vec2{ 31, 10, 45, 1, 6, 19 };
//
//void Print_Vec(const vector<int>& vec) {
//    for (const int& it : vec) {
//        cout << it << " ";
//    }
//    cout << "\n";
//}
//
//void Intersection_Func() {
//    cout << "Intersection_Func\n";
//
//    sort(vec1.begin(), vec1.end());
//    sort(vec2.begin(), vec2.end());
//
//    vector<int> buff(vec1.size() + vec2.size());
//    auto iter = set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), buff.begin());
//    buff.erase(iter, buff.end());
//
//    Print_Vec(buff);
//}
//
//int getRank(int sameNum) {
//    if (sameNum == 0) {
//        return 6;
//    }
//    else {
//        return 7 - sameNum;
//    }
//}
//
//vector<int> solution(vector<int> lottos, vector<int> win_nums) {
//    vector<int> answer;
//
//    sort(lottos.begin(), lottos.end());
//    sort(win_nums.begin(), win_nums.end());
//
//    vector<int> temp(lottos.size() + win_nums.size());
//
//    //minRank - intereaction
//    auto iter = set_intersection(lottos.begin(), lottos.end(), win_nums.begin(), win_nums.end(), temp.begin());
//    temp.erase(iter, temp.end());
//
//    //maxRank - set.count
//    multiset<int> ms(lottos.begin(), lottos.end());
//
//    answer.push_back(
//        getRank(temp.size() + ms.count(0)));
//    answer.push_back(
//        getRank(temp.size()));
//
//    return answer;
//}
//
//int main() {
//
//    Intersection_Func();
//
//	return 0;
//}