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
//		Student("김아무개", 90),
//		Student("이아무개", 56),
//		Student("박아무개", 82),
//		Student("고아무개", 77)
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