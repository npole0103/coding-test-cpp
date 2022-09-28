//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//set<int> s;
//
//void rotateMatrix(vector<vector<int>>& v, int x1, int y1, int x2, int y2) {
//    //좌 x값 변경
//    for (int i = x1; i < x2; i++) {
//        s.insert(v[i + 1][y1]);
//        swap(v[i][y1], v[i + 1][y1]);
//    }
//    //하 y값 변경
//    for (int i = y1; i < y2; i++) {
//        s.insert(v[x2][i + 1]);
//        swap(v[x2][i], v[x2][i + 1]);
//    }
//    //우 x값 변경
//    for (int i = x2; i > x1; i--) {
//        s.insert(v[i - 1][y2]);
//        swap(v[i][y2], v[i - 1][y2]);
//    }
//    //상 y값 변경
//    for (int i = y2; i > y1; i--) {
//        s.insert(v[x1][i - 1]);
//        swap(v[x1][i], v[x1][i - 1]);
//    }
//
//    s.insert(v[x1][y1]);
//    swap(v[x1][y1], v[x1][y1 + 1]);
//}
//
//
//vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
//    vector<int> answer;
//
//    //rows * columns 초기화
//    vector<vector<int>> v(rows, vector<int>(columns, 0));
//    int vValue = 1;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            v[i][j] = vValue++;
//        }
//    }
//
//    for (int i = 0; i < queries.size(); i++) {
//        rotateMatrix(v, queries[i][0] - 1, queries[i][1] - 1, queries[i][2] - 1, queries[i][3] - 1);
//
//        answer.push_back(*(s.begin()));
//        s.clear();
//    }
//
//
//    return answer;
//}
//
//int main() {
//
//    //rows * columns 초기화
//    vector<vector<int>> v(6, vector<int>(6, 0));
//    int vValue = 1;
//    for (int i = 0; i < 6; i++) {
//        for (int j = 0; j < 6; j++) {
//            v[i][j] = vValue++;
//        }
//    }
//
//    for (int i = 0; i < 6; i++) {
//        for (int j = 0; j < 6; j++) {
//            cout << v[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    rotateMatrix(v, 1, 1, 4, 3);
//
//    for (int i = 0; i < 6; i++) {
//        for (int j = 0; j < 6; j++) {
//            cout << v[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (const auto& e : s) {
//        cout << e << " ";
//    }
//    cout << endl;
//
//    cout << *(s.begin()) << endl;
//
//    return 0;
//}