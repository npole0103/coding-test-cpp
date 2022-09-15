//#include <algorithm>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Employee {
//    int age;
//    string name;  // Does not participate in comparisons
//};
//
//bool operator<(const Employee& lhs, const Employee& rhs) {
//    return lhs.age < rhs.age;
//}
//
//int main() {
//    vector<Employee> v = {
//      {108, "Zaphod"},
//      {32, "Arthur"},
//      {108, "Ford"},
//      {108, "Adole"}
//    };
//
//    //stable_sort는 pair에 대한 순서를 보장
//    stable_sort(v.begin(), v.end());
//
//    for (const Employee& e : v)
//        cout << e.age << ", " << e.name << '\n';
//}