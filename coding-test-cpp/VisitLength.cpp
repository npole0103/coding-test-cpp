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
//set<pair<pair<int, int>, pair<int, int>>> s; //start -> end
//
//// U D R L
//int dx[4] = { -1, 1, 0, 0 };
//int dy[4] = { 0, 0, 1, -1 };
//
//pair<pair<int, int>, pair<int, int>> go(pair<int, int> cur, char type) {
//    int dir = 0;
//    switch (type)
//    {
//    case 'U':
//        dir = 0;
//        break;
//    case 'D':
//        dir = 1;
//        break;
//    case 'R':
//        dir = 2;
//        break;
//    case 'L':
//        dir = 3;
//        break;
//    default:
//        break;
//    }
//
//    int nx = cur.first + dx[dir];
//    int ny = cur.second + dy[dir];
//
//    if (nx < -5 || ny < -5 || nx > 5 || ny > 5) {
//        return { {99, 99}, {99, 99} };
//    }
//
//    return { {cur.first, cur.second}, {nx, ny} };
//}
//
//int solution(string dirs) {
//    
//    int nx = 0, ny = 0;
//    for (int i = 0; i < dirs.size(); i++) {
//        pair<pair<int, int>, pair<int, int>> pp = go({ nx, ny }, dirs[i]);
//        
//        //Out of Range
//        if (pp.first.first == 99) {
//            continue;
//        }
//
//        //Update nx, ny
//        nx = pp.second.first;
//        ny = pp.second.second;
//
//        s.insert(pp);
//
//        //start -> end && end -> start 고려
//        swap(pp.first.first, pp.second.first);
//        swap(pp.first.second, pp.second.second);
//
//        s.insert(pp);
//    }
//
//    //start -> end, end -> start 두가지 고려
//    return s.size() / 2;
//}
//
//int main() {
//
//    return 0;
//}