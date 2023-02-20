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
//    char value;
//    Node* leftNode;
//    Node* rightNode;
//
//    Node(char value) {
//        this->value = value;
//        leftNode = NULL;
//        rightNode = NULL;
//    }
//};
//
//map<char, Node*> m;
//
//void preOrder(Node* root) {
//    if (root == NULL) {
//        return;
//    }
//    cout << root->value;
//    preOrder(root->leftNode);
//    preOrder(root->rightNode);
//}
//
//void inOrder(Node* root) {
//    if (root == NULL) {
//        return;
//    }
//    inOrder(root->leftNode);
//    cout << root->value;
//    inOrder(root->rightNode);
//}
//
//void postOrder(Node* root) {
//    if (root == NULL) {
//        return;
//    }
//    postOrder(root->leftNode);
//    postOrder(root->rightNode);
//    cout << root->value;
//}
//
//int main() {
//    
//    int num;
//    cin >> num;
//
//    for (int i = 0; i < num; i++) {
//        Node* temp = new Node((char)(65 + i));
//        m[(char)(65 + i)] = temp;
//    }
//
//    for (int i = 0; i < num; i++) {
//        char root, left, right;
//        cin >> root >> left >> right;
//        
//        m[root]->leftNode = (left == '.' ? NULL : m[left]);
//        m[root]->rightNode = (right == '.' ? NULL : m[right]);
//    }
//
//    preOrder(m['A']);
//    cout << endl;
//
//    inOrder(m['A']);
//    cout << endl;
//
//    postOrder(m['A']);
//    cout << endl;
//
//    return 0;
//}