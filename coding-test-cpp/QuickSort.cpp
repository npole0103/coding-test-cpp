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
//		return; //원소가 1개인 경우 종료
//	}
//
//	int key = start; //첫번째 원소
//	int i = start + 1; //피벗 다음 수부터
//	int j = end; //마지막 수
//	int temp;
//
//	while (i <= j) { //서로 교차할 때까지 반복
//		while (i <= end && arr[i] <= arr[key]) { //키 값보다 큰 값을 만날 때까지 반복
//			i++;
//		}
//		while (start < j && arr[key] <= arr[j]) { //키 값보다 작은 값을 만날 때까지 반복
//			j--;
//		}
//
//		if (i < j) { //엇갈린 상태가 아니라면 교체 과정
//			swap(arr[i], arr[j]);
//		}
//		else { //엇갈린 상태라면 아니라면 key와 j를 교체(분할 과정)
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
