//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <stack>
//using namespace std;
//
//map<char, int> m;
//
//bool isPossible(string skillTree) {
//    string temp; //���� ���� ����
//    for (int i = 0; i < skillTree.size(); i++) {
//        if (m.find(skillTree[i]) != m.end()) {
//            temp += skillTree[i];
//        }
//    }
//   
//    vector<int> v; //�ε����� ������������ �˻��ϴ� ����
//    for (int i = 0; i < temp.size(); i++) {
//        v.push_back(m[temp[i]]);
//    }
//
//    for (int i = 0; i < v.size(); i++) {
//        //0���� ���������� �����ϴ� ���������̾�� ��.
//        if (v[i] != i) {
//            return false;
//        }
//    }
//
//    return true;;
//}
//
//int solution(string skill, vector<string> skill_trees) {
//    int answer = 0;
//
//    for (int i = 0; i < skill.size(); i++) {
//        m.insert({ skill[i], i });
//    }
//
//    for (const auto& e : skill_trees) {
//        answer += (isPossible(e) ? 1 : 0);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    return 0;
//}