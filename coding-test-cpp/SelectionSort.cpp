//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int min, index, temp;
//
//	int array[10] = { 1, 10, 5, 7, 8, 6, 4, 3, 2, 9};
//	int arrSize = sizeof(array) / sizeof(array[0]);
//
//	for (int i = 0; i < arrSize ; i++)
//	{
//		//min �� 9999�� �ʱ�ȭ
//		min = 9999;
//		for (int j = i; j < arrSize ; j++)
//		{
//			//���� array[j]���� �� �۴ٸ�
//			if (min > array[j])
//			{
//				min = array[j];
//				index = j;
//			}
//		}
//		// swap - array[i]�� array[index]
//		swap(array[i], array[index]);
//	}
//
//	for (int i = 0; i < arrSize; i++)
//		cout << array[i] << " ";
//	cout << endl;
//
//	return 0;
//}