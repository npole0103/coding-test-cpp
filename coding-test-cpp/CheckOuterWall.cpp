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
//    //원형 처리를 위한 배열 확대
//    weak.resize(2 * wSize);
//    for (int i = wSize; i < weak.size(); i++) {
//        weak[i] = weak[i - wSize] + n;
//    }
//
//    do {
//        //현재 dist 순열로 원형 weak 부분을 계산하기 위한 for-loop
//        for (int i = 0; i < wSize; i++) {
//            int start = weak[i];
//            int end = weak[i + wSize - 1];
//            
//            //permutation 순회를 위한 for-loop
//            for (int j = 0; j < dist.size(); j++) {
//                start += dist[j];
//
//                //start 지점 값이 end 지점의 값 이상이 되었다면
//                if (start >= end) {
//                    answer = min(answer, j + 1);
//                    break;
//                }
//
//                //다음 검사 찾기
//                //현재 방문 중인 지점 초과인 지점이 새로운 지점이 됨
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
//    * 완전히 동그란 구조, 외벽의 총 둘레는 n미터
//    * 취약한 지점들이 있음.
//    * 
//    * 점검 시간 1시간
//    * 친구들은 시계 혹은 반시계 방향으로만 외벽
//    * 
//    * 외벽 길이 n / 취약 지점 위치 weak / 각 친구가 1시간 동안 이동할 수 있는 거리 dist
//    * 
//    * 1. 시계 방향과 반 시계 방향 모두 동일하기 때문에 시계 방향만 볼 것임.
//    * 2. weak를 2배해주고 n개 만큼 기준 잡아보면 됨.
//    * 3. dist에 대해 완전 탐색을 진행해서 설정된 weak가 되는지 확인
//    * 
//    */
//
//    return 0;
//}