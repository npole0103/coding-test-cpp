//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long getSum(vector<int>& v) {
//    long long sum = 0;
//    for (const auto& e : v) {
//        sum += e;
//    }
//    return sum;
//}
//
//int solution(vector<int> queue1, vector<int> queue2) {
//    int answer = 0;
//    int initSize = queue1.size();
//    long long sum1 = getSum(queue1), sum2 = getSum(queue2);
//    int idx1 = 0, idx2 = 0;
//
//    //�ʱ� ������ 2�踦 �ʰ��� �� ����
//    while (answer <= 2 * initSize + 2) {
//        //erase�� �ð��ʰ� ���� idx1, idx2 ���� �����ϸ� ���� �ذ�
//        if (sum1 > sum2) {
//            sum1 -= queue1[idx1];
//            sum2 += queue1[idx1];
//            queue2.push_back(queue1[idx1]);
//            idx1++;
//            answer++;
//        }
//        else if (sum1 < sum2) {
//            sum2 -= queue2[idx2];
//            sum1 += queue2[idx2];
//            queue1.push_back(queue2[idx2]);
//            idx2++;
//            answer++;
//        }
//        else {
//            return answer;
//        }
//    }
//    return -1;
//}