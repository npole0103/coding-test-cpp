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
//int gCol = 0;
//
//bool cmp(vector<int> a, vector<int> b) {
//    if (a[gCol - 1] == b[gCol - 1]) {
//        return a[0] > b[0];
//    }
//
//    return a[gCol - 1] < b[gCol - 1];
//}
//
//int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
//    int answer = 0;
//    vector<int> v;
//    gCol = col;
//
//    sort(data.begin(), data.end(), cmp);
//
//    for (int i = row_begin - 1; i <= row_end - 1; i++) {
//        int sum = 0;
//        for (const auto& e : data[i]) {
//            sum += e % (i + 1);
//        }
//        answer ^= sum;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    //1. col��° ������ ��������, ���ٸ� PK�� ù��° ������ ��������
//    //2. ���ĵ� ������ ���� Ʃ�� ���ϱ�
//    //3. XOR ����
//
//    return 0;
//}