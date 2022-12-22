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
//int solution(int n, vector<int> weak, vector<int> dist) {
//    int answer = 1e9;
//    int wSize = weak.size();
//
//    //���� ó���� ���� �迭 Ȯ��
//    weak.resize(2 * wSize);
//    for (int i = wSize; i < weak.size(); i++) {
//        weak[i] = weak[i - wSize] + n;
//    }
//
//    do {
//        //���� dist ������ ���� weak �κ��� ����ϱ� ���� for-loop
//        for (int i = 0; i < wSize; i++) {
//            int start = weak[i];
//            int end = weak[i + wSize - 1];
//            
//            //permutation ��ȸ�� ���� for-loop
//            for (int j = 0; j < dist.size(); j++) {
//                start += dist[j];
//
//                //start ���� ���� end ������ �� �̻��� �Ǿ��ٸ�
//                if (start >= end) {
//                    answer = min(answer, j + 1);
//                    break;
//                }
//
//                //���� �˻� ã��
//                //���� �湮 ���� ���� �ʰ��� ������ ���ο� ������ ��
//                int nextIdx = upper_bound(weak.begin(), weak.end(), start) - weak.begin();
//                start = weak[nextIdx];
//            }
//        }
//
//    } while (next_permutation(dist.begin(), dist.end()));
//
//    if (answer == 1e9) {
//        return -1;
//    }
//
//    return answer;
//}
//
//int main() {
//    
//    /*
//    * ������ ���׶� ����, �ܺ��� �� �ѷ��� n����
//    * ����� �������� ����.
//    * 
//    * ���� �ð� 1�ð�
//    * ģ������ �ð� Ȥ�� �ݽð� �������θ� �ܺ�
//    * 
//    * �ܺ� ���� n / ��� ���� ��ġ weak / �� ģ���� 1�ð� ���� �̵��� �� �ִ� �Ÿ� dist
//    * 
//    * 1. �ð� ����� �� �ð� ���� ��� �����ϱ� ������ �ð� ���⸸ �� ����.
//    * 2. weak�� 2�����ְ� n�� ��ŭ ���� ��ƺ��� ��.
//    * 3. dist�� ���� ���� Ž���� �����ؼ� ������ weak�� �Ǵ��� Ȯ��
//    * 
//    */
//
//    return 0;
//}