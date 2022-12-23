//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//using namespace std;
//
//set<int> openedBox; //열린 상자 체크용
//vector<vector<int>> boxes; //상자 그룹들 저장
//
//bool cmp(vector<int> a, vector<int> b) {
//    return a.size() > b.size();
//}
//
//int solution(vector<int> cards) {
//    int answer = 1;
//
//    for (int i = 0; i < cards.size(); i++) {
//        vector<int> box;
//
//        //만약 열린 상자라면 continue;
//        if (openedBox.find(cards[i] - 1) != openedBox.end()) {
//            continue;
//        }
//        
//        int curIdx = cards[i] - 1;
//
//        //상자 그룹 만들기
//        while (true) {
//            if (openedBox.find(curIdx) != openedBox.end()) {
//                break;
//            }
//
//            openedBox.insert(curIdx);
//            box.push_back(curIdx);
//
//            curIdx = cards[curIdx] - 1;
//        }
//
//        //상자 그룹 boxes 벡터에 저장
//        boxes.push_back(box);
//    }
//
//    if (boxes.size() == 1) {
//        return 0;
//    }
//
//    //사이즈 제일 큰 순서대로 정렬
//    sort(boxes.begin(), boxes.end(), cmp);
//
//    return (*boxes.begin()).size()* (*next(boxes.begin())).size();
//}
//
//int main() {
//    /*
//
//    */
//    return 0;
//}