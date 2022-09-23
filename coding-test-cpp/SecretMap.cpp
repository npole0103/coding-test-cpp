//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <bitset>
//using namespace std;
//
//string bitToSharp(string bit) {
//    string result = "";
//    for (const auto& e : bit) {
//        result += e == '1' ? '#' : ' ';
//    }
//    return result;
//}
//
//vector<string> solution(const int n, vector<int> arr1, vector<int> arr2) {
//    vector<string> answer;
//    for (int i = 0; i < n; i++) {
//        int num = arr1[i] & arr2[i];
//        answer.push_back(bitToSharp(bitset<16>(num).to_string()).substr(16 - n - 1, n));
//    }
//
//    return answer;
//}
//
//int main() {
//    const int size = 16;
//    cout << bitset<16>(4).to_string().substr(16 - 5 - 1, 5) << endl;
//
//    return 0;
//}