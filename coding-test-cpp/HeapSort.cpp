//#include <iostream> //https://zoosso.tistory.com/705
//#include <algorithm>
//using namespace std;
//
//int number = 9;
//int heap[9] = { 7, 6, 5, 7, 3, 5, 9, 1, 6 };
//
////�� ���� �����
//void heapify(int arr[], int len, int parent) {
//	int current = parent;
//	int left = 2 * parent + 1;
//	int right = 2 * parent + 2;
//
//	//���� �ڽ� ��尡 ����, ���� �ڽ� ��尡 �� ũ�ٸ�
//	if (left < len && arr[current] < arr[left]) {
//		current = left;
//	}
//
//	//������ �ڽ� ��尡 ����, ������ �ڽ� ��尡 �� ũ�ٸ�
//	if (right < len && arr[current] < arr[right]) {
//		current = right;
//	}
//
//	//���� ��尡 �θ� �ƴ϶��, current�� parent ��ġ�� �ٲٰ� heapfiy �ٽ� ����
//	if (current != parent) {
//		swap(arr[current], arr[parent]);
//		heapify(arr, len, current);
//	}
//}
//
////�� ��Ʈ ����
//void heapSort(int arr[], int len) {
//	//�ִ� �� ����
//	for (int i = (len / 2) - 1; i >= 0; i--) {
//		heapify(arr, len, i);
//	}
//
//	//Root�� ��ġ�� �ִ밪�� ������ ���� �ٲ㳪���� �ϼ�
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