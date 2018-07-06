//#include <iostream>
//#include <queue>
//using namespace std;
//const int MAX = 100001;
//int n, m;
//int check[MAX];
//int count = 0;
//int dist = 0;
//int cnt = 0;
//bool finish = false;
//
//int main() {
//	scanf("%d %d", &m, &n);
//	queue<int> q;
//	q.push(m);
//	q.push(-1);
//
//	while (!q.empty()) {
//		int now = q.front();
//		if (now == -1) {
//			dist++;
//			if (finish) {
//				break;
//			}
//			else {
//				q.pop();
//				q.push(-1);
//				continue;
//			}
//		}
//
//		q.pop();
//		for (int next : {now - 1, now + 1, now * 2}) {
//			if (0 <= next && next <= MAX) {
//				if (check[next] == false) {
//					check[next] == true;
//					if (next == n) {
//						cnt++;
//						finish = true;
//					}
//					else {
//						q.push(next);
//					}
//				}
//			}
//		}
//	}
//	cout << dist<< endl;
//	cout <<cnt<< endl;
//	return 0;
//}