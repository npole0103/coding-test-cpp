//#include <iostream> //https://zoosso.tistory.com/705
//#include <algorithm>
//using namespace std;
//
//int number = 9;
//int heap[9] = { 7, 6, 5, 7, 3, 5, 9, 1, 6 };
//
////힙 구조 만들기
//void heapify(int arr[], int len, int parent) {
//	int current = parent;
//	int left = 2 * parent + 1;
//	int right = 2 * parent + 2;
//
//	//왼쪽 자식 노드가 존재, 왼쪽 자식 노드가 더 크다면
//	if (left < len && arr[current] < arr[left]) {
//		current = left;
//	}
//
//	//오른쪽 자식 노드가 존재, 오른쪽 자식 노드가 더 크다면
//	if (right < len && arr[current] < arr[right]) {
//		current = right;
//	}
//
//	//현재 노드가 부모가 아니라면, current와 parent 위치를 바꾸고 heapfiy 다시 진행
//	if (current != parent) {
//		swap(arr[current], arr[parent]);
//		heapify(arr, len, current);
//	}
//}
//
////힙 소트 진행
//void heapSort(int arr[], int len) {
//	//최대 힙 구성
//	for (int i = (len / 2) - 1; i >= 0; i--) {
//		heapify(arr, len, i);
//	}
//
//	//Root에 위치한 최대값을 마지막 노드와 바꿔나가며 완성
//	for (int i = len - 1; i > 0; i--) {
//		swap(arr[0], arr[i]);
//		heapify(arr, i, 0);
//	}
//}
//
//int main() {
//
//	heapSort(heap, number);
//
//	for (int i = 0; i < number; i++) {
//		cout << heap[i] << " ";
//	}
//
//	return 0;
//}