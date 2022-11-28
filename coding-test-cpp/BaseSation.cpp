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
//        //다음 좌표에 start 좌표가 겹친다면
//        if (x - w <= start && start <= x + w) {
//            start = x + w + 1;
//            continue;
//        }
//
//        //이미 설치된 기지국 좌측 좌표와 start 사이 거리 계산
//        int leftIdx = x - w;
//        if (leftIdx >= 1) {
//            parts.push_back(leftIdx - start);
//        }
//
//        //start 좌표 기지국 우측 좌표로 업데이트
//        start = x + w + 1;
//
//        //start 좌표 범위 초과시
//        if (start > end) {
//            break;
//        }
//    }
//
//    //start, end 사이 송전탑 카운트가 안되었다면
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