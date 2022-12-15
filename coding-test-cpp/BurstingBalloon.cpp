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
//int solution(vector<int> a) {
//    int answer = 0;
//    int minNum = 2e9;
//
//    //인덱스 기준 왼쪽 요소 중 가장 작은 값
//    vector<int> left(a.size());
//
//    //인덱스 기준 오른쪽 요소 중 가장 작은 값
//    vector<int> right(a.size());
//
//    //현재 인덱스에서 왼쪽 최솟값
//    for (int i = 0; i < a.size(); i++) {
//        minNum = min(minNum, a[i]);
//        left[i] = minNum;
//    }
//
//    minNum = 2e9;
//
//    //현재 인덱스에서 오른쪽 최솟값
//    for (int i = a.size() - 1; i >= 0; i--) {
//        minNum = min(minNum, a[i]);
//        right[i] = minNum;
//    }
//
//    for (int i = 0; i < a.size(); i++) {
//        //해당 인덱스 값 a[i]가 left 최소 혹은 right 최소보다 작거나 같다면 무조건 남길 수 있음
//        //교체 1번이 가능하기 때문
//        if (a[i] <= left[i] || a[i] <= right[i]) {
//            answer++;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    * https://mind-devlog.tistory.com/74
//    * 
//    * 
//    * [-16, 27, 65, -2, 58, -92, -71, -68, -61, -33]
//    * 
//    * -2 기준으로 판단했을 때
//    * 왼쪽에서 가장 작은 값은 -16
//    * 오른쪽에서 가장 작은 값은 -92
//    * 
//    * -2 <= -16 || -2 <= -92
//    * 고로 안됨
//    * 
//    * 왼쪽과 오른쪽 중 하나만 본인이 제일 최솟값 보다 작다면, 나머지 한쪽은 찬스 써서 커버 가능
//    * 
//    일열로 나열된 풍선
//    서로 다른 숫자
//    풍선이 단 1개만 남을 때까지 터트림
//
//    임의의 인접한 두 풍선을 고른 뒤 두 풍선 중 하나를 터트림
//    터진 풍선으로 인해 풍선들 사이에 빈 공간이 생겼다면, 빈 공간이 없도록 풍선을 중앙에 밀착
//    */
//
//    return 0;
//}