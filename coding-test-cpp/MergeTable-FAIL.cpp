//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//#include <math.h>
//#include <sstream>
//using namespace std;
//
//struct Cell {
//    string cur;
//    Cell* parent;
//    stack<pair<int, int>> s;
//
//    Cell(string cur, Cell* parent) {
//        this->cur = cur;
//        this->parent = parent;
//    }
//};
//
//Cell* getParent(Cell* a) {
//    if (a->parent == NULL) {
//        return a;
//    }
//
//    return getParent(a->parent);
//}
//
//vector<string> answer;
//vector<vector<Cell>> cell(51, vector<Cell>(51, { "", NULL }));
//
//void updateRC(int r, int c, string value) {
//    Cell* temp = getParent(&cell[r][c]);
//    temp->cur = value;
//    cout << "UPDATE : " << temp->cur << endl;
//}
//
//void updateV1toV2(string value1, string value2) {
//    for (int i = 1; i < 51; i++) {
//        for (int j = 1; j < 51; j++) {
//            Cell* temp = getParent(&cell[i][j]);
//            if (temp->cur == value1) {
//                temp->cur = value2;
//                cout << "UPDATE : " << temp->cur << endl;
//            }
//        }
//    }
//}
//void merge(int r1, int c1, int r2, int c2) {
//    if (r1 == r2 && c1 == c2) {
//        return;
//    }
//
//    cout << "MERGE ";
//
//    Cell* a = getParent(&cell[r1][c1]);
//    Cell* b = getParent(&cell[r2][c2]);
//
//    if (a->cur != "" && b->cur == "") {
//        b->parent = a;
//        b->cur = "";
//        cout << "P1 : " << r1 << "-" << c1 << endl;
//        while (!b->s.empty()) {
//            a->s.push(b->s.top());
//            b->s.pop();
//        }
//        a->s.push({ r2, c2 });
//    }
//    else if (a->cur == "" && b->cur != "") {
//        a->parent = b;
//        a->cur = "";
//        cout << "P2 : " << r2 << "-" << c2 << endl;
//        while (!a->s.empty()) {
//            b->s.push(a->s.top());
//            a->s.pop();
//        }
//        b->s.push({ r1, c1 });
//    }
//    else {
//        b->parent = a;
//        b->cur = "";
//        cout << "P3 : " << r1 << "-" << c1 << endl;
//        while (!b->s.empty()) {
//            a->s.push(b->s.top());
//            b->s.pop();
//        }
//        a->s.push({ r2, c2 });
//    }
//}
//
//void unmerge(int r, int c) {
//    Cell* parent = getParent(&cell[r][c]);
//    cout << "@@" << parent->s.size() << endl;
//    cout << parent->cur << endl;
//
//    while (!parent->s.empty()) {
//        pair<int, int> pos = parent->s.top();
//        cout << "stack : " << pos.first << "-" << pos.second << endl;
//        cell[pos.first][pos.second].parent = NULL;
//        cell[pos.first][pos.second].cur = "";
//        parent->s.pop();
//    }
//
//    cell[r][c].cur = parent->cur;
//    cout << "UNMERGE UPDATE : " << cell[r][c].cur << endl;
//}
//
//void print(int r, int c) {
//    cout << "PRINT " << r << "-" << c << endl;
//    Cell* temp = getParent(&cell[r][c]);
//    answer.push_back((temp->cur == "" ? "EMPTY" : temp->cur));
//}
//
//vector<string> solution(vector<string> commands) {
//
//    for (const auto& cmd : commands) {
//        vector<string> op;
//        istringstream iss(cmd);
//        string buf;
//        while (iss >> buf) {
//            op.push_back(buf);
//        }
//
//        if (op[0] == "UPDATE" && op.size() == 4) {
//            updateRC(stoi(op[1]), stoi(op[2]), op[3]);
//        }
//        else if (op[0] == "UPDATE" && op.size() == 3) {
//            updateV1toV2(op[1], op[2]);
//        }
//        else if (op[0] == "MERGE") {
//            merge(stoi(op[1]), stoi(op[2]), stoi(op[3]), stoi(op[4]));
//        }
//        else if (op[0] == "UNMERGE") {
//            unmerge(stoi(op[1]), stoi(op[2]));
//        }
//        else {
//            print(stoi(op[1]), stoi(op[2]));
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//    vector<string> v1 = { "UPDATE 1 1 menu", "UPDATE 1 2 category", "UPDATE 2 1 bibimbap", "UPDATE 2 2 korean", "UPDATE 2 3 rice", "UPDATE 3 1 ramyeon", "UPDATE 3 2 korean", "UPDATE 3 3 noodle", "UPDATE 3 4 instant", "UPDATE 4 1 pasta", "UPDATE 4 2 italian", "UPDATE 4 3 noodle", "MERGE 1 2 1 3", "MERGE 1 3 1 4", "UPDATE korean hansik", "UPDATE 1 3 group", "UNMERGE 1 4", "PRINT 1 3", "PRINT 1 4" };
//    vector<string> v2 = { "UPDATE 1 1 a", "UPDATE 1 2 b", "UPDATE 2 1 c", "UPDATE 2 2 d", "MERGE 1 1 1 2", "MERGE 2 2 2 1", "MERGE 2 1 1 1", "PRINT 1 1", "UNMERGE 2 2", "PRINT 1 1" };
//    vector<string> ans = solution(v2);
//    for (const auto& e : answer) {
//        cout << e << endl;
//    }
//
//    return 0;
//}