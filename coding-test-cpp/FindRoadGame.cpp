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
//    int idx;
//    int x;
//    int y;
//    Node* left;
//    Node* right;
//};
//
//vector<Node> trees;
//vector<vector<int>> answer(2);
//
//bool cmp(vector<int>& a, vector<int>& b) {
//    if (a[1] == b[1]) {
//        //x ��ǥ ��������
//        return a[0] < b[0];
//    }
//
//    //y ��ǥ ��������
//    return a[1] > b[1];
//}
//
//void createTree(Node* root, Node* child) {
//    //root ��� x ������ child x�� �۴ٸ�
//    if (root->x > child->x) {
//        if (root->left == NULL) {
//            root->left = child;
//            return;
//        }
//        createTree(root->left, child);
//    }
//    else {
//        if (root->right == NULL) {
//            root->right = child;
//            return;
//        }
//        createTree(root->right, child);
//    }
//}
//
//void preOrder(Node* root) {
//    if (root == NULL) {
//        return;
//    }
//    
//    answer[0].push_back(root->idx);
//    preOrder(root->left);
//    preOrder(root->right);
//}
//
//void postOrder(Node* root) {
//    if (root == NULL) {
//        return;
//    }
//
//    postOrder(root->left);
//    postOrder(root->right);
//    answer[1].push_back(root->idx);
//}
//
//vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
//
//    //�ε��� ������ֱ�
//    for (int i = 0; i < nodeinfo.size(); i++) {
//        nodeinfo[i].push_back(i + 1);
//    }
//
//    //y��ǥ(Level)��� ����
//    sort(nodeinfo.begin(), nodeinfo.end(), cmp);
//
//    //Ʈ�� ���Ϳ� ����
//    for (const auto& e : nodeinfo) {
//        trees.push_back({ e[2], e[0], e[1], NULL, NULL });
//    }
//
//    //Ʈ�� �����
//    for (int i = 1; i < trees.size(); i++) {
//        createTree(&trees[0], &trees[i]);
//    }
//
//    //pre & post ��ȸ
//    preOrder(&trees[0]);
//    postOrder(&trees[0]);
//
//    return answer;
//}
//
//int main() {
//
//    /*
//    * 
//    * Ʈ���� �����ϴ� ��� x y ��ǥ�� ����
//    * ��� ���� ���� �ٷ� x���� ������.
//    * ���� ������ �ִ� ���� ���� y��
//    * 
//    */
//
//    return 0;
//}