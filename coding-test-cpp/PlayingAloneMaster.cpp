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
//set<int> openedBox; //���� ���� üũ��
//vector<vector<int>> boxes; //���� �׷�� ����
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
//        //���� ���� ���ڶ�� continue;
//        if (openedBox.find(cards[i] - 1) != openedBox.end()) {
//            continue;
//        }
//        
//        int curIdx = cards[i] - 1;
//
//        //���� �׷� �����
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
//        //���� �׷� boxes ���Ϳ� ����
//        boxes.push_back(box);
//    }
//
//    if (boxes.size() == 1) {
//        return 0;
//    }
//
//    //������ ���� ū ������� ����
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