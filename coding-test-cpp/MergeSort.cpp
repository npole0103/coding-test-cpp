//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int const number = 8; //데이터 8개
//
//int size;
//int sorted[8]; //정렬 배열은 반드시 전역 변수로 선언
//int count = 0;
//
//void merge(int a[], int m, int middle, int n) { //시작점 중간점 끝점
//	int i = m; //첫 번째 배열의 시작점
//	int j = middle + 1; //두 번째 배열의 시작점
//	int k = m; //merged 배열의 시작점
//
//	//작은 순서대로 배열에 삽입
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
//	//남은 데이터 삽입
//	if (middle < i) { // i가 전부 들어가고, j가 남은 경우
//		for (int t = j; t <= n; t++) {
//			sorted[k] = a[t];
//			k++;
//		}
//	}
//	else { // j가 전부 들어가고, i가 남은 경우
//		for (int t = i; t <= middle; t++) {
//			sorted[k] = a[t];
//			k++;
//		}
//	}
//
//	// 정렬된 배열을 삽입
//	for (int t = m; t <= n; t++) {
//		a[t] = sorted[t];
//	}
//}
//
//void mergeSort(int a[], int m, int n) {
//	//크기가 1보다 큰 경우
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