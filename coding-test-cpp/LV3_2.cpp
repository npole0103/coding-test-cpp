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
//            //�̹� next�� �湮�ߴٸ�(visited�� �����Ѵٸ�)
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
//        //�ڽ��߿� ���� ���� ���°� �ѹ��̶� ���´ٸ�
//        if (s.count(child->n) == 0) {
//            turnOn = true;
//        }
//    }
//    
//    //���� root ��带 trunOn����
//    if (turnOn) {
//        s.insert(root->n);
//    }
//}
//
//int solution(int n, vector<vector<int>> lighthouse) {
//    int answer = 0;
//
//    //map�� child ���� ����
//    for (const auto& e : lighthouse) {
//        m[e[0]].push_back(e[1]);
//        m[e[1]].push_back(e[0]);
//    }
//
//    //�� �� �̻� ����� ����� �� �ƹ��ų� ��Ʈ ���� ����
//    for (int i = 1; i <= n; i++) {
//        vector<int> v = m[i];
//
//        if (v.size() >= 2) {
//            root->n = i;
//        }
//    }
//    
//    //Ʈ�� ����
//    createTree();
//
//    //ī��Ʈ ����
//    countMin(root);
//
//    return s.size();
//}
//
//int main() {
//
//    return 0;
//}