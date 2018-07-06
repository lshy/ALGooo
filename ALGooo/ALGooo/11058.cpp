//#include <iostream>
//using namespace std;
//long long d[1001];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i <= 6; i++) {
//		d[i] = i;
//	}
//	for (int i = 7; i <= n; i++) {
//		for (int j = 1; i - j - 2 >= 0; j++) {
//			long long cur = d[i - j - 2] * (j + 1);
//			if (cur > d[i]) {
//				d[i] = cur;
//			}
//		}
//	}
//	cout << d[n] << '\n';
//	return 0;
//}