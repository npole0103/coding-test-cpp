//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <bitset>
//
//using namespace std;
//
//long long findY(long long num) {
//    //Â¦¼ö
//    if (num % 2 == 0) {
//        return num + 1;
//    }
//    //È¦¼ö
//    else {
//        string bitStr = bitset<64>(num).to_string();
//        bitStr.replace(bitStr.find_last_of("0"), 2, "10");
//        return bitset<64>(bitStr).to_ullong();
//    }
//}
//
//vector<long long> solution(vector<long long> numbers) {
//    vector<long long> answer;
//
//    for (const auto& e : numbers) {
//        answer.push_back(findY(e));
//    }
//
//    return answer;
//}
//
//int main() {
//
//    bitset<20> bs(7);
//
//    cout << bitset<16>() << endl;
//
//    return 0;
//}