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
//        //x 좌표 오름차순
//        return a[0] < b[0];
//    }
//
//    //y 좌표 내림차순
//    return a[1] > b[1];
//}
//
//void createTree(Node* root, Node* child) {
//    //root 노드 x 값보다 child x가 작다면
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
//    //인덱스 만들어주기
//    for (int i = 0; i < nodeinfo.size(); i++) {
//        nodeinfo[i].push_back(i + 1);
//    }
//
//    //y좌표(Level)대로 정렬
//    sort(nodeinfo.begin(), nodeinfo.end(), cmp);
//
//    //트리 벡터에 저장
//    for (const auto& e : nodeinfo) {
//        trees.push_back({ e[2], e[0], e[1], NULL, NULL });
//    }
//
//    //트리 만들기
//    for (int i = 1; i < trees.size(); i++) {
//        createTree(&trees[0], &trees[i]);
//    }
//
//    //pre & post 순회
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
//    * 트리를 구성하는 노드 x y 좌표는 정수
//    * 모든 노드는 서로 다룬 x값을 가진다.
//    * 같은 레벨에 있는 노드는 같은 y값
//    * 
//    */
//
//    return 0;
//}