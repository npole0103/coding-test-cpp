//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int i, j, temp;
//	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
//	int arrSize = sizeof(array) / sizeof(array[0]);
//
//	for (int i = 0; i < arrSize; i++)
//	{
//		//ù ����Ŭ 0~8���� ��ȸ, ������ 8 9���� ��
//		for (int j = 0; j < arrSize - 1 - i; j++)
//		{
//			if (array[j] > array[j + 1])
//				swap(array[j], array[j + 1]);
//		}
//	}
//	for (int i = 0; i < arrSize; i++)
//		cout << array[i] << " ";
//	cout << endl;
//}