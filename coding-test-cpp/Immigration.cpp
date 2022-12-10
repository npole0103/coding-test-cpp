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
//long long solution(int n, vector<int> times) {
//    long long answer = 0;
//    long long min = 1;
//    long long max = n * (long long)*max_element(times.begin(), times.end());
//
//    //�ִ밪�� �ּҰ��� �ٲ�� ������ ���� �ּ� �ð�
//    while (min <= max) {
//        long long avg = (max + min) / 2;
//        long long possibleNum = 0;
//
//        //���� avg �ð� �������� �� ���� ��� ó�� �����Ѱ�?
//        for (int i = 0; i < times.size(); i++) {
//            possibleNum += (avg / (long long)times[i]);
//        }
//
//        //n ���� ���� ����� ó���� �� �ִٸ�
//        if (possibleNum >= n) {
//            answer = avg;
//            max = avg - 1;
//        }
//        else {
//            min = avg + 1;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}