//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<vector<int>> board, vector<int> moves) {
//    int answer = 0;
//
//    vector<int> v;
//    int size = board[0].size();
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << board[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < moves.size(); i++) {
//        for (int j = 0; j < size; j++) {
//            //0�̶��(��ĭ�̶��) ���� ������
//            if (board[j][moves[i] - 1] == 0) {
//                continue;
//            }
//            else {
//                //���� ���� ������ ���Դٸ�
//                if (!v.empty() && v.back() == board[j][moves[i] - 1]) {
//                    v.pop_back();
//                    board[j][moves[i] - 1] = 0;
//                    answer++;
//                    break;
//                }
//                //���� ������ �ƴ϶��
//                else {
//                    //vector�� ���� �� 0���� ����
//                    v.push_back(board[j][moves[i] - 1]);
//                    board[j][moves[i] - 1] = 0;
//                    break;
//                }
//            }
//        }
//    }
//
//    cout << endl;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << board[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (const auto& it : v) {
//        cout << it << " ";
//    }
//
//    return answer;
//}