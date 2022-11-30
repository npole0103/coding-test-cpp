//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//#include <unordered_map>
//#include <unordered_set>
//using namespace std;
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    if (a.second - a.first == b.second - b.first) {
//        return a.first < b.first;
//    }
//
//    return a.second - a.first < b.second - b.first;
//}
//
//vector<int> solution(vector<string> gems) {
//    vector<pair<int, int>> answer;
//
//    unordered_set<string> us(gems.begin(), gems.end());
//    unordered_map<string, int> um;
//
//    int start = 0;
//    int end = 0;
//
//    while (1) {
//        //��� ������ �����Ѵٸ�
//        if (um.size() == us.size()) {
//            answer.push_back({ start + 1, end });
//        }
//
//        //��� ������ �����Ѵٸ�, ������ ���̱�
//        if (um.size() == us.size()) {
//            um[gems[start]]--;
//            if (um[gems[start]] == 0) {
//                um.erase(gems[start]);
//            }
//            start++;
//        }
//        //end �ִ� ������ ����ٸ� Ż��
//        else if (end == gems.size()) {
//            break;
//        }
//        //��� ������ �������� �ʴ´ٸ� end++
//        else if (um.size() < us.size()) {
//            um[gems[end]]++;
//            end++;
//        }
//    }
//
//    sort(answer.begin(), answer.end(), cmp);
//
//    return { answer.begin()->first, answer.begin()->second };
//}
//
//int main() {
//
//    return 0;
//}