//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//bool checkPlace(vector<string> tempPlace) {
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            //앉아 있는 학생일 때
//            if (tempPlace[i][j] == 'P') {
//                //상
//                if (i - 1 >= 0 && tempPlace[i][j] == tempPlace[i - 1][j]) {
//                    return false;
//                }
//                //하
//                if (i + 1 < 5 && tempPlace[i][j] == tempPlace[i + 1][j]) {
//                    return false;
//                }
//                //좌
//                if (j - 1 >= 0 && tempPlace[i][j] == tempPlace[i][j - 1]) {
//                    return false;
//                }
//                //우
//                if (j + 1 < 5 && tempPlace[i][j] == tempPlace[i][j + 1]) {
//                    return false;
//                }
//
//                //좌상
//                if (i - 1 >= 0 && j - 1 >= 0 
//                    && tempPlace[i][j] == tempPlace[i - 1][j - 1] 
//                    && !(tempPlace[i - 1][j] == 'X' && tempPlace[i][j - 1] == 'X')) {
//                    return false;
//                }
//
//                //우상
//                if (i - 1 >= 0 && j + 1 < 5 
//                    && tempPlace[i][j] == tempPlace[i - 1][j + 1]
//                    && !(tempPlace[i - 1][j] == 'X' && tempPlace[i][j + 1] == 'X')) {
//                    return false;
//                }
//
//                //좌하
//                if (i + 1 < 5 && j - 1 >= 0
//                    && tempPlace[i][j] == tempPlace[i + 1][j - 1]
//                    && !(tempPlace[i + 1][j] == 'X' && tempPlace[i][j - 1] == 'X')) {
//                    return false;
//                }
//
//                //우하
//                if (i + 1 < 5 && j + 1 < 5
//                    && tempPlace[i][j] == tempPlace[i + 1][j + 1]
//                    && !(tempPlace[i + 1][j] == 'X' && tempPlace[i][j + 1] == 'X')) {
//                    return false;
//                }
//
//
//                //POP인 경우
//                //상
//                if (i - 2 >= 0 
//                    && tempPlace[i][j] == tempPlace[i - 2][j]
//                    && !(tempPlace[i - 1][j] == 'X')) {
//                    return false;
//                }
//                //하
//                if (i + 2 < 5
//                    && tempPlace[i][j] == tempPlace[i + 2][j]
//                    && !(tempPlace[i + 1][j] == 'X')) {
//                    return false;
//                }
//                //좌
//                if (j - 2 >= 0
//                    && tempPlace[i][j] == tempPlace[i][j - 2]
//                    && !(tempPlace[i][j - 1] == 'X')) {
//                    return false;
//                }
//                //우
//                if (j + 2 < 5
//                    && tempPlace[i][j] == tempPlace[i][j + 2]
//                    && !(tempPlace[i][j + 1] == 'X')) {
//                    return false;
//                }
//            }
//
//        }
//    }
//    return true;
//}
//
//vector<int> solution(vector<vector<string>> places) {
//    vector<int> answer;
//
//    vector<string> tempPlace;
//
//    for (int i = 0; i < places.size(); i++) {
//        for (int j = 0; j < places[i].size(); j++) {
//            tempPlace.push_back(places[i][j]);
//        }
//        checkPlace(tempPlace) == true ? answer.push_back(1) : answer.push_back(0);
//        tempPlace.clear();
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}