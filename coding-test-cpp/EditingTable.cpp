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
//struct Node {
//    int n;
//    Node* prev;
//    Node* next;
//    Node(int n, Node* prev, Node* next) {
//        this->n = n;
//        this->prev = prev;
//        this->next = next;
//    }
//};
//
//stack<Node*> delStack;
//
//string solution(int n, int k, vector<string> cmd) {
//    string answer(n, 'O');
//
//    Node* node = new Node(0, NULL, NULL);
//    Node* curNode = node;
//    for (int i = 1; i < n; i++) {
//        node->next = new Node(i, node, NULL);
//        node = node->next;
//    }
//
//    for (int i = 0; i < k; i++) {
//        curNode = curNode->next;
//    }
//
//    for (const auto& op : cmd) {
//        if (op[0] == 'C') {
//            delStack.push(curNode);
//
//            if (curNode->prev != NULL) {
//                curNode->prev->next = curNode->next;
//            }
//            if (curNode->next != NULL) {
//                curNode->next->prev = curNode->prev;
//            }
//
//            //예외 처리 -> 마지막 노드에서 삭제했다면
//            if (curNode->next == NULL) {
//                curNode = curNode->prev;
//            }
//            else {
//                curNode = curNode->next;
//            }
//        }
//        else if (op[0] == 'Z') {
//            Node* deletedNode = delStack.top();
//            delStack.pop();
//
//            if (deletedNode->prev != NULL) {
//                deletedNode->prev->next = deletedNode;
//            }
//
//            if(deletedNode->next != NULL) {
//                deletedNode->next->prev = deletedNode;
//            }
//        }
//        else {
//            int x = stoi(op.substr(2));
//            if (op[0] == 'U') {
//                while (x-- > 0) {
//                    curNode = curNode->prev;
//                }
//            }
//            else {
//                while (x-- > 0) {
//                    curNode = curNode->next;
//                }
//            }
//        }
//    }
//
//    //삭제된 것만 X 표시
//    while (!delStack.empty()) {
//        Node* tmp = delStack.top();
//        delStack.pop();
//        answer[tmp->n] = 'X';
//    }
//
//    return answer;
//}
//
//int main() {
//
//    cout << stoi("12") << endl;
//
//    return 0;
//}