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
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    long long answer = 0;
//    long long k;
//
//    int num;
//    cin >> num;
//
//    vector<int> v(num, 0);
//
//    for (int i = 0; i < num; i++) {
//        cin >> v[i];
//    }
//
//    cin >> k;
//
//    //sum �ʱⰪ v[0]
//    int sum = v[0];
//    int end = 0;
//
//    //start, end�� ��������
//    for (int start = 0; start < num; start++) {
//        //���� end�� num ���� �̸��̸�, sum�� k���� �ʰ����� �ʾҴٸ�
//        while (end < num && sum <= k) {
//            // v[end]�� ��� sum�� ����
//            end++;
//            if (end != num) {
//                sum += v[end];
//            }
//        }
//
//        //end�� num�� �������ٸ� ����
//        if (end == num) {
//            break;
//        }
//
//        //���� ������ start, end�� k�� �ʰ��� �����ϱ� ���� ������ ���� �� �����൵ �ʰ��� ����
//        //�׷��Ƿ� num(��ü) - end(�ʰ��� ����)�� ���� ������ �ڿ������� ������ŭ �����ָ� ��
//        answer += num - end;
//        
//        //���� ��ȸ�� ���� v[start] ���ֱ�
//        sum -= v[start];
//    }
//
//    cout << answer << endl;
//
//    return 0;
//}