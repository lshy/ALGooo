//#include <iostream>
//#include <queue>
//#define MIN(X,Y) ((X)<(Y))? (X):(Y)
//#define MAXSIZE 101
//using namespace std;
///*
//3 3
//011
//111
//110
//
//5 5
//01000
//01010
//00010
//11110
//00000
//*/
//int d[MAXSIZE][MAXSIZE];
//int b[MAXSIZE][MAXSIZE];
//
//const int dx[4] = { 0,0,1,-1 };
//const int dy[4] = { 1,-1,0,0 };
//
//bool is_range(int x, int y, int m, int n) {
//	return (0 <= x&&x<m) && (0 <= y&&y<n);
//}
//
//void BFS(int a[MAXSIZE][MAXSIZE], int m, int n, int x, int y) {
//	queue<pair<int, int> > q;
//	q.push(make_pair(x, y));
//
//	while (!q.empty()) {
//		int cx = q.front().first;
//		int cy = q.front().second;
//		q.pop();
//		if (cx == m - 1 && cy == n - 1)
//			break;
//
//		for (int i = 0; i<4; i++) {
//			int nx = cx + dx[i];
//			int ny = cy + dy[i];
//			if (is_range(nx, ny, m, n)) {
//				if (cx == 4 && cy == 0) {
//					int asd = 0;
//				}
//				if (b[ny][nx] == 0) {
//					d[ny][nx] = min(d[ny][nx], d[cy][cx]);
//					q.push(make_pair(ny, nx));
//				}
//				else{
//					d[ny][nx] = min(d[ny][nx], 1 + d[cy][cx]);
//					q.push(make_pair(ny, nx));
//				}
//			}
//		}
//	}
//}
//
//int main(void) {
//	int m, n;
//	cin >> m >> n;
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j<m; j++) {
//			char input;
//			cin >> input;
//			b[i][j] = input - '0';
//			d[i][j] = 10001;
//		}
//	}
//
//
//	d[0][0] = 0;
//	BFS(b, m, n, 0, 0);
//
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j<m; j++) {
//			cout << d[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}