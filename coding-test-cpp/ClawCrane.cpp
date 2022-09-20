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
//            //0이라면(빈칸이라면) 다음 행으로
//            if (board[j][moves[i] - 1] == 0) {
//                continue;
//            }
//            else {
//                //만약 같은 인형이 들어왔다면
//                if (!v.empty() && v.back() == board[j][moves[i] - 1]) {
//                    v.pop_back();
//                    board[j][moves[i] - 1] = 0;
//                    answer++;
//                    break;
//                }
//                //같은 인형이 아니라면
//                else {
//                    //vector에 삽입 후 0으로 만듦
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