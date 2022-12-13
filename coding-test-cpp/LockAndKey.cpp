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
//int minLockN = 0;
//int minLockM = 0;
//
////시계 방향 90도 회전시켜주는 함수
//void rotate90R(vector<vector<int>>& minLock) {
//    //n * m 90도 회전이기에 m * n 으로 할당
//    vector<vector<int>> v(minLockM, vector<int>(minLockN, 0));
//
//    for (int i = 0; i < minLockN; i++) {
//        for (int j = 0; j < minLockM; j++) {
//            v[j][minLockN - 1 - i] = minLock[i][j];
//        }
//    }
//
//    //minLockN, minLockM 값 변경
//    swap(minLockN, minLockM);
//
//    minLock = v;
//}
//
////lock에서 홈이 있는 최소 n*m을 구하는 메소드
//vector<vector<int>> getMinSquareByLock(vector<vector<int>>& lock) {
//    int minX = 1e9, maxX = 0;
//    int minY = 1e9, maxY = 0;
//    int n = lock.size();
//    int cnt = 0;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (lock[i][j] == 0) {
//                minX = min(minX, i);
//                maxX = max(maxX, i);
//
//                minY = min(minY, j);
//                maxY = max(maxY, j);
//            }
//            else {
//                cnt++;
//            }
//        }
//    }
//
//    //lock이 전부 1인 케이스 예외 고려
//    if (n * n == cnt) {
//        maxX = 0, minX = 0, maxY = 0, minY = 0;
//    }
//
//    vector<vector<int>> v(maxX - minX + 1, vector<int>(maxY - minY + 1, 0));
//
//    for (int i = minX; i <= maxX; i++) {
//        for (int j = minY; j <= maxY; j++) {
//            v[i - minX][j - minY] = lock[i][j];
//        }
//    }
//
//    return v;
//}
//
////Key(i + n, j + m), minLock(n, m) 비교 후 오픈 가능 유무 판단
//bool compareSqaure(int x, int y, vector<vector<int>>& key, vector<vector<int>>& minLock) {
//    for (int i = x; i < x + minLockN; i++) {
//        for (int j = y; j < y + minLockM; j++) {
//            if (minLock[i - x][j - y] == key[i][j]) {
//                return false;
//            }
//        }
//    }
//
//    return true;
//}
//
////key 범위 내에서 minLock을 포개었을 때 i, j 좌표값으로 오픈 가능 유무 판단
//bool isRight(vector<vector<int>>& key, vector<vector<int>>& minLock) {
//    int m = key.size();
//
//    //key(M, M)범위에 맞는 i, j로 비교
//    for (int i = 0; i + minLockN <= m; i++) {
//        for (int j = 0; j + minLockM <= m; j++) {
//            if (compareSqaure(i, j, key, minLock)) {
//                return true;
//            }
//        }
//    }
//
//    return false;
//}
//
//bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
//    bool answer = false;
//    //열쇠 기준이 아닌 좌물쇠를 기준으로 열리는지 검사하는 로직으로 해결
//
//    //좌물쇠 홈으로 이뤄진 최소 직사각형 2차원 벡터 구하기
//    vector<vector<int>> minLock = getMinSquareByLock(lock);
//    minLockN = minLock.size();
//    minLockM = minLock[0].size();
//    
//    //좌물쇠 최소 범위가 열쇠보다 크다면
//    if (key.size() < minLockN || key[0].size() < minLockM) {
//        return false;
//    }
//
//    //좌물쇠 모두가 돌기인 예외 상황
//    if (minLockN == 1 && minLockM == 1) {
//        return true;
//    }
//
//    //시계 방향 회전 4번
//    for (int i = 0; i < 4; i++) {
//        if (isRight(key, minLock)) {
//            return true;
//        }
//        rotate90R(minLock);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    좌물쇠는 홈이 파여 있음.
//    열쇠 또한 홈과 돌기 부분이 있음
//    열쇠는 회전과 이동이 가능함
//    */
//
//    return 0;
//}