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
//int solution(int n, vector<int> stations, int w)
//{
//    int answer = 0;
//    vector<int> parts;
//
//    int width = 2 * w + 1;
//    int start = 1;
//    int end = n;
//
//    sort(stations.begin(), stations.end());
//
//    for (const auto& x : stations) {
//
//        //���� ��ǥ�� start ��ǥ�� ��ģ�ٸ�
//        if (x - w <= start && start <= x + w) {
//            start = x + w + 1;
//            continue;
//        }
//
//        //�̹� ��ġ�� ������ ���� ��ǥ�� start ���� �Ÿ� ���
//        int leftIdx = x - w;
//        if (leftIdx >= 1) {
//            parts.push_back(leftIdx - start);
//        }
//
//        //start ��ǥ ������ ���� ��ǥ�� ������Ʈ
//        start = x + w + 1;
//
//        //start ��ǥ ���� �ʰ���
//        if (start > end) {
//            break;
//        }
//    }
//
//    //start, end ���� ����ž ī��Ʈ�� �ȵǾ��ٸ�
//    if (start <= end) {
//        parts.push_back(end - start + 1);
//    }
//
//    for (const auto& p : parts) {
//        if (p / width == 0) {
//            answer++;
//        }
//        else {
//            answer += (p % width == 0 ? p / width : p / width + 1);
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