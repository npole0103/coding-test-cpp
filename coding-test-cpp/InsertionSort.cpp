//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
//	int arrSize = sizeof(array) / sizeof(array[0]);
//
//	int j;
//
//	for (int i = 0; i < arrSize - 1; i++)
//	{
//		j = i;
// 
//		while (j >= 0 && array[j] > array[j + 1])
//		{
//			swap(array[j], array[j + 1]);
//			j--;
//		}
//	}
//
//	for (int i = 0; i < arrSize; i++)
//		cout << array[i] << " ";
//	cout << endl;
//
//	return 0;
//}