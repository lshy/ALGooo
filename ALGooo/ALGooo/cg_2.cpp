///*
//You should use the statndard input/output
//
//in order to receive a score properly.
//
//Do not use file input and output
//
//Please be very careful.
//*/
//
//#include <iostream>
//#include <deque>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <set>
//
//
//using namespace std;
//
//int Answer;
//bool checkTrue(string K);
//int main(int argc, char** argv)
//{
//	int T, test_case;
//	/*
//	The freopen function below opens input.txt file in read only mode, and afterward,
//	the program will read from input.txt file instead of standard(keyboard) input.
//	To test your program, you may save input data in input.txt file,
//	and use freopen function to read from the file when using cin function.
//	You may remove the comment symbols(//) in the below statement and use it.
//	Use #include<cstdio> or #include <stdio.h> to use the function in your program.
//	But before submission, you must remove the freopen function or rewrite comment symbols(//).
//	*/
//
//	// freopen("input.txt", "r", stdin);
//
//	cin >> T;
//	for (test_case = 0; test_case < T; test_case++)
//	{
//
//		Answer = 0;
//
//		int K;
//		cin >> K;
//		vector<int> asd;
//		vector<pair<int, int>> result;
//		bool isFinish = false;
//
//		if (checkTrue(to_string(K))) {
//			cout << "Case #" << test_case + 1 << endl;
//			cout << 1;
//			cout << " " << to_string(K) << endl;
//			isFinish = true;
//			
//		}
//		else {
//			for (int i = 1; i < K/2; i++) {
//				bool a = checkTrue(to_string(i));
//				int numA = i;
//				bool b = checkTrue(to_string(K - i));
//				int numB = K - i;
//				if (a && b) {
//					cout << "Case #" << test_case + 1 << endl;
//					cout << 2 << " ";
//					cout << to_string(K - i) << " " << to_string(i)<< endl;
//					isFinish = true;
//					break;
//					
//				}else if (a || b) {
//					if (!a) {
//						result.push_back(make_pair(numB, numA));
//					}
//					else {
//						result.push_back(make_pair(numA, numB));
//					}
//				}
//			}
//		}
//
//
//		if (!isFinish) {
//			sort(result.begin(), result.end());
//			for (int i = 0; i < result.size(); i++) {
//				for (int j = 1; j < result[i].second / 2; j++) {
//					bool a = checkTrue(to_string(j));
//					int numA = j;
//					bool b = checkTrue(to_string(result[i].second - j));
//					int numB = result[i].second - j;
//					if (a && b) {
//						asd.push_back(numA);
//						asd.push_back(numB);
//						asd.push_back(result[i].first);
//
//						sort(asd.begin(), asd.end());
//
//						cout << "Case #" << test_case + 1 << endl;
//						cout << 3 << " ";
//						cout << to_string(asd[2]) << " " << to_string(asd[1]) << " " << to_string(asd[0]) << endl;
//						isFinish = true;
//						break;
//					}
//				}
//				if (isFinish)  break;
//			}
//		}
//		
//		if (!isFinish) {
//			cout << "Case #" << test_case + 1 << endl;
//			cout << to_string(0) << endl;
//		}
//		
//		
//
//	}
//
//	return 0;//Your program should return 0 on normal termination.
//}
//
//bool checkTrue(string K) {
//	
//	for (int i = 0; i<K.length() / 2; i++) {
//		if (K[i] != K[K.length() - i - 1]) {
//			return false;
//		}
//	}
//	return true;
//}
