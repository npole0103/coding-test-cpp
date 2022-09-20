//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int mbti[4];
//
//string getMbti() {
//    string s = "";
//    s += 0 >= mbti[0] ? 'R' : 'T'; // R < T
//    s += 0 >= mbti[1] ? 'C' : 'F'; // C < F
//    s += 0 >= mbti[2] ? 'J' : 'M'; // J < M
//    s += 0 >= mbti[3] ? 'A' : 'N'; // A < N
//    return s;
//}
//
//void cal(string survey, int choice) {
//    if (survey == "RT") {
//        mbti[0] += (choice - 4);
//    }
//    else if (survey == "TR") {
//        mbti[0] += -(choice - 4);
//    }
//
//    else if (survey == "CF") {
//        mbti[1] += (choice - 4);
//    }
//    else if (survey == "FC") {
//        mbti[1] += -(choice - 4);
//    }
//
//    else if (survey == "JM") {
//        mbti[2] += (choice - 4);
//    }
//    else if (survey == "MJ") {
//        mbti[2] += -(choice - 4);
//    }
//
//    else if (survey == "AN") {
//        mbti[3] += (choice - 4);
//    }
//    else if (survey == "NA") {
//        mbti[3] += -(choice - 4);
//    }
//
//}
//
//string solution(vector<string> survey, vector<int> choices) {
//
//    for (int i = 0; i < survey.size(); i++) {
//        cal(survey[i], choices[i]);
//    }
//
//    return getMbti();
//}