//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//using namespace std;
//
//vector<int> v1({ 1, 2, 3 ,4, 5 }); //5
//vector<int> v2({ 2, 1, 2 ,3, 2, 4, 2, 5 }); // 8
//vector<int> v3({ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 }); // 10
//
//vector<int> solution(vector<int> answers) {
//    vector<int> answer;
//    int score[3] = { 0, };
//
//    for (int i = 0; i < answers.size(); i++) {
//        if (answers[i] == v1[i % v1.size()]) {
//            score[0]++;
//        }
//
//        if (answers[i] == v2[i % v2.size()]) {
//            score[1]++;
//        }
//
//        if (answers[i] == v3[i % v3.size()]) {
//            score[2]++;
//        }
//    }
//
//    int maxScore = max(score[0], max(score[1], score[2]));
//
//    for (int i = 0; i < 3; i++) {
//        cout << score[i] << " ";
//        if (score[i] == maxScore) {
//            answer.push_back(i + 1);
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    cout << 5 % 5 << endl;
//
//    return 0;
//}