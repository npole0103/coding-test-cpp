//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
//int countBit(int n) {
//    int count = 0;
//    while (n > 0) {
//        count += n & 1; //������ bit�� 1�̸� count
//        n >>= 1; //������ ��Ʈ ����
//    }
//    return count;
//}
//
//int main() {
//
//    int answer = 0;
//
//    int n;
//    cin >> n;
//
//    int mul = 1;
//    while (mul < n) {
//        mul *= 2;
//    }
//
//    int tempMul = mul;
//
//    while (true) {
//        if (n % tempMul == 0) {
//            cout << mul << " " << answer << endl;
//            break;
//        }
//        else {
//            tempMul /= 2;
//            answer++;
//        }
//    }
//
//    return 0;
//}