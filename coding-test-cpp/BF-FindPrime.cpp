//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//using namespace std;
//
//bool isPrime(int num) {
//    if (num == 0 || num == 1) {
//        return false;
//    }
//    for (int i = 2; i < num; i++) {
//        if (num % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int solution(string numbers) {
//    set<int> si;
//
//    for (int r = 1; r <= numbers.size(); r++) {
//        //nPr 순열 만들기
//        sort(numbers.begin(), numbers.end());
//        do {
//            string temp = "";
//            for (const auto& e : numbers) {
//                temp += e;
//            }
//            if (isPrime(stoi(temp.substr(0, r)))) {
//                si.insert(stoi(temp.substr(0, r)));
//            }
//            reverse(numbers.begin() + r, numbers.end());
//        } while (next_permutation(numbers.begin(), numbers.end()));
//    }
//
//    return si.size();
//}
//
//int main() {
//
//
//	vector<int> v = { 3, 1, 2, 4, 5 };
//
//	sort(v.begin(), v.end()); // v : {1,2,3,4,5}
//
//	do
//	{
//		for (int e : v) cout << e << " ";
//		cout << '\n';
//		reverse(v.begin() + 2, v.end());
//	} while (next_permutation(v.begin(), v.end()));
//	return 0;
//
//
//	return 0;
//}
//
////void dfs(string numbers, int n, int cnt) {
////    if (n == cnt) {
////        string temp = "";
////        for (int i = 0; i < arr.size(); i++) {
////            temp += arr[i];
////        }
////        cout << temp << endl;
////        if (isPrime(stoi(temp))) {
////            s.insert(stoi(temp));
////        }
////        return;
////    }
////
////    for (int i = 0; i < n; i++) {
////        if (check[i] == true) {
////            continue;
////        }
////        check[i] = true;
////        arr.push_back(numbers[i]);
////        dfs(numbers, n, cnt + 1);
////        arr.pop_back();
////        check[i] = false;
////        ;
////    }
////}