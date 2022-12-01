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
//bool isStepping(const vector<int>& stones, int k, int mid) {
//    int cnt = 0;
//    for (int i = 0; i < stones.size(); i++) {
//        //mid �������� üũ
//        if (mid > stones[i]) {
//            cnt++;
//            //mid������ ���ӵ� ������ ���̰� K���
//            if (k == cnt) {
//                return false;
//            }
//        }
//        else {
//            //mid���� ũ�ٸ� ���� �� �ֱ⿡ 0���� �ʱ�ȭ
//            cnt = 0;
//        }
//    }
//    return true;
//}
//
//int solution(vector<int> stones, int k) {
//    int answer = 0;
//    int left = 1;
//    int right = 200000000;
//    int mid; //�ǳ� �� �ִ� ��� ��
//
//    while (left <= right) {
//        mid = (left + right) / 2;
//        //�ǳ� �� �ִٸ� left �� ������Ű��
//        if (isStepping(stones, k, mid)) {
//            left = mid + 1;
//        }
//        //�ǳ� �� ���ٸ� right �� ���ҽ�Ű��
//        else {
//            right = mid - 1;
//        }
//    }
//
//    return right;
//}
//
//int main() {
//
//    vector<int> v1 = { 2,4,5,3,2,1,4,2,5,1};
//    cout << solution(v1, 3) << endl;
//
//    return 0;
//}