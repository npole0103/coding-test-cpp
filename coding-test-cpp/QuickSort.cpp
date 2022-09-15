//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int number = 10;
//int arr[] = { 1, 10, 5, 8 , 7, 6, 4, 3, 2, 9 };
//
//void printArr() {
//	for (int i = 0; i < number; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//
//void quickSort(int* data, int start, int end) {
//	if (start >= end) {
//		return; //���Ұ� 1���� ��� ����
//	}
//
//	int key = start; //ù��° ����
//	int i = start + 1; //�ǹ� ���� ������
//	int j = end; //������ ��
//	int temp;
//
//	while (i <= j) { //���� ������ ������ �ݺ�
//		while (i <= end && arr[i] <= arr[key]) { //Ű ������ ū ���� ���� ������ �ݺ�
//			i++;
//		}
//		while (start < j && arr[key] <= arr[j]) { //Ű ������ ���� ���� ���� ������ �ݺ�
//			j--;
//		}
//
//		if (i < j) { //������ ���°� �ƴ϶�� ��ü ����
//			swap(arr[i], arr[j]);
//		}
//		else { //������ ���¶�� �ƴ϶�� key�� j�� ��ü(���� ����)
//			swap(arr[j], arr[key]);
//		}
//	}
//
//	quickSort(arr, start, j - 1);
//	quickSort(arr, j + 1, end);
//}
//
//int main(void) {
//	quickSort(arr, 0, number - 1);
//	printArr();
//	return 0;
//}
