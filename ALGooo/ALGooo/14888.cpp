//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//#include <cmath>
//
//using namespace std;
//int numCount;
//int num[11];
//vector<int> list;
//int mmin = INT_MAX;
//int mmax = INT_MIN;
//int main() {
//	
//	scanf("%d", &numCount);
//	int count = 0;;
//
//	for (int i = 0; i<numCount; i++) {
//		cin >> num[i];
//	}
//	for (int i = 0; i < 4; i++) {
//		cin >> count;
//		for (int j = 0; j < count; j++) {
//			list.push_back(i);
//		}
//	}
//
//	do {
//		int result = num[0];
//		for (int i = 0; i < list.size(); i++) {
//			switch (list[i])
//			{
//			case 0:
//				result += num[i + 1];
//				break;
//			case 1:
//				result -= num[i + 1];
//				break;
//			case 2:
//				result *= num[i + 1];
//				break;
//			case 3:
//				result /= num[i + 1];
//				break;
//			default:
//				break;
//			}
//		}
//		mmin = min(mmin, result);
//		mmax = max(mmax, result);
//
//	} while (next_permutation(list.begin(), list.end()));
//	cout << mmax << endl;
//	cout << mmin << endl;
//
//return 0;
//}