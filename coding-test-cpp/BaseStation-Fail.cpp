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
//void install(int x, int w, vector<int>& v) {
//    for (int i = x - w; i <= x + w; i++) {
//        if (i < 0 || i >= v.size()) {
//            continue;
//        }
//        v[i] = 1;
//    }
//}
//
//int solution(int n, vector<int> stations, int w)
//{
//    int answer = 0;
//    int cnt = 0;
//    vector<int> v(n + 1, 0);
//    int maxDist = 1 + 2 * w; //기지국 최대 거리
//
//    //기지국 설치
//    for (const auto& x : stations) {
//        install(x, w, v);
//    }
//
//    //미설치 부분 카운트
//    for (int i = 1; i <= n; i++) {
//        if (v[i] == 0) {
//            cnt++;
//        }
//        else {
//            if (cnt != 0) {
//                if (cnt / maxDist == 0) {
//                    answer++;
//                }
//                else {
//                    int tot = cnt / maxDist;
//                    if (cnt % maxDist != 0) {
//                        tot++;
//                    }
//                    answer += tot;
//                }
//                cnt = 0;
//            }
//        }
//    }
//
//    if (cnt != 0) {
//        if (cnt / maxDist == 0) {
//            answer++;
//        }
//        else {
//            int tot = cnt / maxDist;
//            if (cnt % maxDist != 0) {
//                tot++;
//            }
//            answer += tot;
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