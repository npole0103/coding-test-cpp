//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class Student {
//public:
//	string name;
//	int score;
//	Student(string name, int score) {
//		this->name = name;
//		this->score = score;
//	}
//	bool operator <(Student& student) {
//		return this->score < student.score;
//	}
//};
//
//int main() {
//
//	Student students[] = {
//		Student("��ƹ���", 90),
//		Student("�̾ƹ���", 56),
//		Student("�ھƹ���", 82),
//		Student("��ƹ���", 77)
//	};
//
//	sort(students, students + 4);
//
//	for (int i = 0; i < 4; i++) {
//		cout << students[i].name << " ";
//	}
//
//	return 0;
//}