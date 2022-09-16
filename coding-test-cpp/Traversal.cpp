//#include <iostream>
//#include <algorithm>
//using namespace std;
//
///*
//* 전위 순회 : 자기 자신 -> 왼쪽 자식 -> 오른쪽 자식
//* 중위 순회 : 왼쪽 자식 -> 자기 자신 -> 오른쪽 자식
//* 후위 순회 : 왼족 자식 -> 오른쪽 자식 -> 자기 자신
//*/
//
//const int number = 15;
//
//typedef struct node* treePointer;
//typedef struct node {
//	int data;
//	treePointer leftChild, rightChild;
//}node;
//
//// 전위 순회
//void preOrder(treePointer ptr) {
//	if (ptr) {
//		cout << ptr->data << ' ';
//		preOrder(ptr->leftChild);
//		preOrder(ptr->rightChild);
//	}
//}
//
//// 중위 순회
//void inOrder(treePointer ptr) {
//	if (ptr) {
//		inOrder(ptr->leftChild);
//		cout << ptr->data << ' ';
//		inOrder(ptr->rightChild);
//	}
//}
//
//// gndnl 순회
//void postOrder(treePointer ptr) {
//	if (ptr) {
//		postOrder(ptr->leftChild);
//		postOrder(ptr->rightChild);
//		cout << ptr->data << ' ';
//	}
//}
//
//int main() {
//
//	node nodes[number + 1];
//
//	for (int i = 1; i <= number; i++) {
//		nodes[i].data = i;
//		nodes[i].leftChild = NULL;
//		nodes[i].rightChild = NULL;
//	}
//
//	for (int i = 2; i <= number; i++) {
//		if (i % 2 == 0) {
//			nodes[i / 2].leftChild = &nodes[i];
//		}
//		else {
//			nodes[i / 2].rightChild = &nodes[i];
//		}
//	}
//
//	preOrder(&nodes[1]);
//
//	return 0;
//}