//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
//int main() {
//
//    long long x, y, w, s;
//    cin >> x >> y >> w >> s;
//
//    //��� ���η� ���� ���
//    long long road = (x + y) * w;
//
//    //�밢������ ���� ���
//    long long cross = min(x, y) * s;
//    long long leftover = abs(x - y);
//
//    //1�� ���ΰ� ���� ���, 2+3�� �ܿ� �Ÿ��� ����ġ�� ���� ���
//    //1. �ܿ� �Ÿ� ��� ���η�
//    //2. �ܿ� �Ÿ��� ¦����� �ܿ� �Ÿ� ��� �밢������
//    //3. �ܿ� �Ÿ��� Ȧ����� (�ܿ� �Ÿ� - 1)*�밢 + ����
//    cross += min(leftover * w, (leftover % 2 == 0 ? leftover * s : (leftover - 1) * s + w));
//
//    cout << min(cross, road) << endl;
//
//    return 0;
//}