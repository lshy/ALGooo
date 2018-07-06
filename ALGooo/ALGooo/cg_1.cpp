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
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//
//using namespace std;
//
//int makeAnswer(vector<int>& list, int N, int K);
//int main(void) {
//
//	int testcase;
//	cin >> testcase;
//	for (int t = 1; t <= testcase; t++) {
//		int answer = 0;
//		int N, K;
//		cin >> N >> K;
//		vector<int> list(N);
//		for (int i = 0; i<N; i++) {
//			cin >> list[i];
//		}
//		sort(list.begin(), list.end());
//		answer = makeAnswer(list, N, K);
//		cout << "Case #" << t << endl;
//		cout << answer << endl;
//	}
//	return 0;
//}
//
//int makeAnswer(vector<int>& list, int N, int K) {
//
//	queue<int> answer;
//	answer.push(list[0]);
//	for (int i = 1; i < N; i++) {
//		if (abs(list[i] - answer.front()) > K) {
//			answer.pop();
//			answer.push(list[i]);
//		}
//		else {
//			answer.push(list[i]);
//		}
//
//	}
//	return answer.size();
//}