//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int const number = 8; //������ 8��
//
//int size;
//int sorted[8]; //���� �迭�� �ݵ�� ���� ������ ����
//int count = 0;
//
//void merge(int a[], int m, int middle, int n) { //������ �߰��� ����
//	int i = m; //ù ��° �迭�� ������
//	int j = middle + 1; //�� ��° �迭�� ������
//	int k = m; //merged �迭�� ������
//
//	//���� ������� �迭�� ����
//	while (i <= middle && j <= n) {
//		if (a[i] <= a[j]) {
//			sorted[k] = a[i];
//			i++;
//		}
//		else {
//			sorted[k] = a[j];
//			j++;
//		}
//		k++;
//	}
//
//	//���� ������ ����
//	if (middle < i) { // i�� ���� ����, j�� ���� ���
//		for (int t = j; t <= n; t++) {
//			sorted[k] = a[t];
//			k++;
//		}
//	}
//	else { // j�� ���� ����, i�� ���� ���
//		for (int t = i; t <= middle; t++) {
//			sorted[k] = a[t];
//			k++;
//		}
//	}
//
//	// ���ĵ� �迭�� ����
//	for (int t = m; t <= n; t++) {
//		a[t] = sorted[t];
//	}
//}
//
//void mergeSort(int a[], int m, int n) {
//	//ũ�Ⱑ 1���� ū ���
//	if (m < n) {
//		int middle = (m + n) / 2;
//		mergeSort(a, m, middle);
//		mergeSort(a, middle + 1, n);
//		merge(a, m, middle, n);
//	}
//}
//
//int main() {
//	int arr[number] = { 7, 6, 5, 8, 3, 5, 9, 1 };
//	mergeSort(arr, 0, number - 1);
//
//	for (int i = 0; i < number; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//
//	return 0;
//}