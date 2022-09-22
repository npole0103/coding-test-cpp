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
//    //records ��ȸ
//    for (const auto& e : records) {
//
//        int min = 0;
//        string carNum = "";
//        string state = "";
//
//        analyzeRecord(e, min, carNum, state);
//
//        //IN�̶��
//        if (state == "IN") {
//            //���� �����Ǿ� �ִ� ���ܴ� �����Ƿ� ������ ����
//            parkingLot.insert({ carNum, min });
//        }
//        //OUT�̶��
//        else {
//            //���� �ȵǾ� �ִµ� OUT�Ǵ� ���ܴ� �����Ƿ� ������ totalMin ���ϱ�
//            int totalMin = min - parkingLot[carNum];
//
//            //���� ���� ��� û�� ������ �ִٸ�
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
//    //���� MAP�� �ִ� ��� - �����忡 �����ִ� ��� ����
//    for (const auto& e : parkingLot) {
//        //23:59 -> 1439 mins
//        int totalMin = 1439 - e.second;
//
//        //���� ���� ��� û�� ������ �ִٸ�
//        if (feeInfo.find(e.first) != feeInfo.end()) {
//            feeInfo[e.first] += totalMin;
//        }
//        else {
//            feeInfo.insert({ e.first, totalMin });
//        }
//    }
//
//    //totalMinutes�� ��� ����ϱ�
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