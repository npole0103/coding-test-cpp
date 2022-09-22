//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//int basicMin = 0, basicFee = 0, unitMin = 0, unitFee = 0;
//
//int getFee(int min) {
//    int totalMin = min;
//    if (totalMin <= basicMin) {
//        return basicFee;
//    }
//    else {
//        totalMin -= basicMin;
//        int unit = totalMin / unitMin;
//        if (totalMin % unitMin != 0) {
//            unit++;
//        }
//        return basicFee + unit * unitFee;
//    }
//}
//
//void analyzeRecord(const string& record, int& min, string& carNum, string& state) {
//    min = stoi(record.substr(0, 2)) * 60 + stoi(record.substr(3, 2));
//    carNum = record.substr(6, 4);
//    state = record.substr(11, record.size());
//}
//
//vector<int> solution(vector<int> fees, vector<string> records) {
//    vector<int> answer;
//
//    basicMin = fees[0]; basicFee = fees[1]; unitMin = fees[2]; unitFee = fees[3];
//
//    map<string, int> parkingLot; //carNum - Miniutes
//    map<string, int> feeInfo; //carNum = totalMinutes
//
//    //records 순회
//    for (const auto& e : records) {
//
//        int min = 0;
//        string carNum = "";
//        string state = "";
//
//        analyzeRecord(e, min, carNum, state);
//
//        //IN이라면
//        if (state == "IN") {
//            //먼저 주차되어 있는 예외는 없으므로 무조건 삽입
//            parkingLot.insert({ carNum, min });
//        }
//        //OUT이라면
//        else {
//            //주차 안되어 있는데 OUT되는 예외는 없으므로 무조건 totalMin 구하기
//            int totalMin = min - parkingLot[carNum];
//
//            //만약 기존 요금 청구 정보가 있다면
//            if (feeInfo.find(carNum) != feeInfo.end()) {
//                feeInfo[carNum] += totalMin;
//            }
//            else {
//                feeInfo.insert({ carNum, totalMin });
//            }
//            parkingLot.erase(carNum);
//        }
//    }
//
//    //아직 MAP에 있는 경우 - 주차장에 남아있는 경우 정산
//    for (const auto& e : parkingLot) {
//        //23:59 -> 1439 mins
//        int totalMin = 1439 - e.second;
//
//        //만약 기존 요금 청구 정보가 있다면
//        if (feeInfo.find(e.first) != feeInfo.end()) {
//            feeInfo[e.first] += totalMin;
//        }
//        else {
//            feeInfo.insert({ e.first, totalMin });
//        }
//    }
//
//    //totalMinutes로 요금 계산하기
//    for (const auto& e : feeInfo) {
//        answer.push_back(getFee(e.second));
//    }
//
//    return answer;
//}
//
//void aa(int& num) {
//    num++;
//}
//
//int main() {
//
//    map<int, int> parkingLot; //carNum - Miniutes
//    parkingLot.insert({ 3, 4 });
//    parkingLot.insert({ 1, 2 });
//    parkingLot.insert({ 2, 3 });
//    cout << parkingLot[1] << endl;
//
//    cout << stoi("09") << endl;
//
//    int num = 0;
//    aa(num);
//    cout << num << endl;
//
//    set<pair<string, int>> s;
//    s.insert({ "aa", 1 });
//    s.insert({ "bb", 2 });
//
//    if (s.find({"aa", 2}) != s.end()) {
//        cout << "Found" << endl;
//    }
//    for (const auto& e : s) {
//        cout << e.first << " ";
//    }
//    cout << endl;
//    cout << endl;
//
//    for (const auto& e : parkingLot) {
//        cout << e.first << " ";
//    }
//
//    int min = 0;
//    string carNum = "";
//    string state = "";
//    const string sss = "05:34 5961 IN";
//    cout << endl;
//
//    analyzeRecord(sss, min, carNum, state);
//
//    cout << carNum << endl;
//    cout << min << endl;
//    cout << state << endl;
//    cout << "-----" << endl;
//
//    return 0;
//}