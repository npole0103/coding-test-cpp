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
//class Node {
//public:
//    int n;
//    vector<Node*> childs;
//
//    Node(int n) {
//        this->n = n;
//    }
//};
//Node* root = new Node(1);
//
//map<int, vector<int>> m;
//set<int> s;
//
//void createTree() {
//    queue<Node*> q;
//    set<int> visited;
//
//    q.push(root);
//    visited.insert(root->n);
//
//    while (!q.empty()) {
//        Node* cur = q.front();
//        q.pop();
//
//        for (const auto& next : m[cur->n]) {
//
//            //이미 next를 방문했다면(visited에 존재한다면)
//            if (visited.count(next) != 0) {
//                continue;
//            }
//
//            Node* child = new Node(next);
//            cur->childs.push_back(child);
//
//            q.push(child);
//            visited.insert(child->n);
//        }
//    }
//}
//
//void countMin(Node* root) {
//    if (root->childs.empty()) {
//        return;
//    }
//
//    bool turnOn = false;
//
//    for (const auto& child : root->childs) {
//        countMin(child);
//
//        //자식중에 켜진 것이 없는게 한번이라도 나온다면
//        if (s.count(child->n) == 0) {
//            turnOn = true;
//        }
//    }
//    
//    //현재 root 노드를 trunOn으로
//    if (turnOn) {
//        s.insert(root->n);
//    }
//}
//
//int solution(int n, vector<vector<int>> lighthouse) {
//    int answer = 0;
//
//    //map에 child 정보 저장
//    for (const auto& e : lighthouse) {
//        m[e[0]].push_back(e[1]);
//        m[e[1]].push_back(e[0]);
//    }
//
//    //두 개 이상 뱃길이 연결된 것 아무거나 루트 노드로 설정
//    for (int i = 1; i <= n; i++) {
//        vector<int> v = m[i];
//
//        if (v.size() >= 2) {
//            root->n = i;
//        }
//    }
//    
//    //트리 생성
//    createTree();
//
//    //카운트 시작
//    countMin(root);
//
//    return s.size();
//}
//
//int main() {
//
//    return 0;
//}