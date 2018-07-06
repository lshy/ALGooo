////
////  main.cpp
////  test
////
////  Created by 이해원 on 2018. 5. 26..
////  Copyright © 2018년 이해원. All rights reserved.
////
//
//#include <iostream>
//#include <queue>
//#include <climits>
//#include <vector>
//#include <cmath>
///*
//3
//1 3
//2 4
//5 6
//*/
//using namespace std;
//
//int main(void) {
//	int n;
//	cin >> n;
//	int max = INT_MIN;
//	int min = INT_MAX;
//	vector<pair<int, int> > inputV;
//	vector<pair<float, bool> > v;
//	queue<float> q;
//	for (int i = 0; i<n; i++) {
//		int a, b;
//		cin >> a >> b;
//		if (a<min) {
//			min = a;
//		}
//		if (b>max) {
//			max = b;
//		}
//		inputV.push_back(make_pair(a, b));
//	}
//	//cout<<"inputV size : "<<inputV.size()<<endl;
//	for (float i = min; i <= max; i += 0.5) {
//		v.push_back(make_pair(i, false));
//	}
//
//
//	for (int i = 0; i<inputV.size(); i++) {
//		int start = 0;
//		for (int j = 0; j<v.size(); j++) {
//			if (v[j].first == inputV[i].first) {
//				start = j;
//			}
//		}
//		for (float j = inputV[i].first; j <= inputV[i].second; j += 0.5) {
//			if (v[start].first == j) {
//				if (!v[start].second) {
//					v[start].second = true;
//				}
//				else {
//					v[start].second = false;
//				}
//			}
//			start++;
//		}
//	}
//	/*
//	cout<<"v size : "<<v.size()<<endl;
//	for(int i=0;i<v.size();i++) {
//	cout<<v[i].first<<" : "<<v[i].second<<endl;
//	}*/
//	bool cur = true;
//	float preValue = v[0].first;
//	q.push(preValue);
//	for (int i = 1; i<v.size(); i++) {
//		if (v[i].second != cur) {
//			if (v[i].second) {
//				q.push(v[i].first);
//				//cout<<cur<<" "<<v[i].first<<endl;
//			}
//			else {
//				q.push(preValue);
//				//cout<<cur<<" "<<preValue<<endl;
//			}
//			cur = v[i].second;
//		}
//		preValue = v[i].first;
//	}
//	q.push(v[v.size() - 1].first);
//	//cout<<"q size : "<<q.size()<<endl;
//
//
//
//
//	cout << "(-,";
//	int count = 1;
//	while (!q.empty()) {
//		if (count % 2 == 1) {
//			float value = q.front();
//			if ((int)value == value - 0.5) { // 소수
//				cout << value - 0.5 << "]" << endl;
//			}
//			else { // 정수
//				cout << value << ")" << endl;
//			}
//			q.pop();
//		}
//		else {
//			float value = q.front();
//			if ((int)value == value - 0.5) { // 소수
//				cout << "[" << value + 0.5 << ",";
//			}
//			else { // 정수
//				cout << "(" << value << ",";
//			}
//			q.pop();
//		}
//		count++;
//	}
//	cout << "+)" << endl;
//	return 0;
//}