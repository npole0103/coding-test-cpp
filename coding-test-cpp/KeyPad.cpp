//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int rightNum = 10;
//int leftNum = 12;
//
//int getRow(int num) {
//	if (num == 0) {
//		return 3;
//	}
//	return (num % 3 == 0 ? num / 3 - 1 : num / 3);
//}
//
//int getCol(int num) {
//	if (num == 0) {
//		return 2;
//	}
//	return (num % 3 == 0 ? num % 3 + 3 : num % 3);
//}
//
//char pressNumber(int num, string hand) {
//	//1, 4, 7
//	if (num == 1 || num == 4 || num == 7) {
//		leftNum = num;
//		return 'L';
//	}
//	//3, 6, 9
//	if (num == 3 || num == 6 || num == 9) {
//		rightNum = num;
//		return 'R';
//	}
//
//	//2, 5, 8, 0
//	//좌표 구해서 거리 계산
//	int nowRow = getRow(num), nowCol = getCol(num);
//	int rightRow = getRow(rightNum), rightCol = getCol(rightNum);
//	int leftRow = getRow(leftNum), leftCol = getCol(leftNum);
//
//	int leftDistance = abs(nowRow - leftRow) + abs(nowCol - leftCol);
//	int rightDistance = abs(nowRow - rightRow) + abs(nowCol - rightCol);
//
//	if (leftDistance < rightDistance) {
//		leftNum = num;
//		return 'L';
//	}
//	else if (leftDistance > rightDistance) {
//		rightNum = num;
//		return 'R';
//	}
//	else {
//		if (hand == "right") {
//			rightNum = num;
//			return 'R';
//		}
//		else {
//			leftNum = num;
//			return 'L';
//		}
//	}
//}
//
//string solution(vector<int> numbers, string hand) {
//	string answer = "";
//
//	for (int i = 0; i < numbers.size(); i++) {
//		answer += pressNumber(numbers[i], hand);
//	}
//
//	return answer;
//}