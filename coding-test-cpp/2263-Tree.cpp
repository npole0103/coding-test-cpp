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
//vector<int> inOrder;
//vector<int> postOrder;
//vector<int> index;
//
//void printPreOrder(int inStart, int inEnd, int postStart, int postEnd) {
//    if (inStart > inEnd || postStart > postEnd) {
//        return;
//    }
//
//    //루트 노드는 postOrder의 끝 값
//    int rootIdx = index[postOrder[postEnd]];
//    int leftSize = rootIdx - inStart;
//    int rightSize = inEnd - rootIdx;
//    cout << inOrder[rootIdx] << ' ';
//
//    printPreOrder(inStart, rootIdx - 1, postStart, postStart + leftSize - 1);
//    printPreOrder(rootIdx + 1, inEnd, postStart + leftSize, postEnd - 1);
//}
//
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n;
//    cin >> n;
//    inOrder.resize(n + 1, 0);
//    postOrder.resize(n + 1, 0);
//    index.resize(n + 1, 0);
//
//    for (int i = 1; i <= n; i++) {
//        cin >> inOrder[i];
//        index[inOrder[i]] = i;
//    }
//
//    for (int i = 1; i <= n; i++) {
//        cin >> postOrder[i];
//    }
//
//    printPreOrder(1, n, 1, n);
//    
//    return 0;
//}