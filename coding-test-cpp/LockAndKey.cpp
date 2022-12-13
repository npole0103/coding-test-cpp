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
////�ð� ���� 90�� ȸ�������ִ� �Լ�
//void rotate90R(vector<vector<int>>& minLock) {
//    //n * m 90�� ȸ���̱⿡ m * n ���� �Ҵ�
//    vector<vector<int>> v(minLockM, vector<int>(minLockN, 0));
//
//    for (int i = 0; i < minLockN; i++) {
//        for (int j = 0; j < minLockM; j++) {
//            v[j][minLockN - 1 - i] = minLock[i][j];
//        }
//    }
//
//    //minLockN, minLockM �� ����
//    swap(minLockN, minLockM);
//
//    minLock = v;
//}
//
////lock���� Ȩ�� �ִ� �ּ� n*m�� ���ϴ� �޼ҵ�
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
//    //lock�� ���� 1�� ���̽� ���� ���
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
////Key(i + n, j + m), minLock(n, m) �� �� ���� ���� ���� �Ǵ�
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
////key ���� ������ minLock�� �������� �� i, j ��ǥ������ ���� ���� ���� �Ǵ�
//bool isRight(vector<vector<int>>& key, vector<vector<int>>& minLock) {
//    int m = key.size();
//
//    //key(M, M)������ �´� i, j�� ��
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
//    //���� ������ �ƴ� �¹��踦 �������� �������� �˻��ϴ� �������� �ذ�
//
//    //�¹��� Ȩ���� �̷��� �ּ� ���簢�� 2���� ���� ���ϱ�
//    vector<vector<int>> minLock = getMinSquareByLock(lock);
//    minLockN = minLock.size();
//    minLockM = minLock[0].size();
//    
//    //�¹��� �ּ� ������ ���躸�� ũ�ٸ�
//    if (key.size() < minLockN || key[0].size() < minLockM) {
//        return false;
//    }
//
//    //�¹��� ��ΰ� ������ ���� ��Ȳ
//    if (minLockN == 1 && minLockM == 1) {
//        return true;
//    }
//
//    //�ð� ���� ȸ�� 4��
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
//    �¹���� Ȩ�� �Ŀ� ����.
//    ���� ���� Ȩ�� ���� �κ��� ����
//    ����� ȸ���� �̵��� ������
//    */
//
//    return 0;
//}