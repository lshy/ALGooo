//#include <cstdio>
//#include <queue>
//using namespace std;
//int a[1000][1000];
//int d[1000][1000];
//int n, m;
//bool isBreak;
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//struct  point
//{
//	int x;
//	int y;
//	int dist;
//	bool isBreak;
//	point(int _x, int _y,int _dist, bool _isBreak) {
//		x = _x;
//		y = _y;
//		dist = _dist;
//		isBreak = _isBreak;
//	}
//
//};
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j<m; j++) {
//			scanf("%1d", &a[j][i]);
//			d[j][i] = -1;
//		}
//	}
//	isBreak = false;
//
//	queue<point> q;
//	q.push(point(0,0,1,false));
//	d[0][0] = 1;
//	int result = 0;
//	while (!q.empty()) {
//		int x = q.front().x;
//		int y = q.front().y;
//		int dist = q.front().dist;
//		int isBreak = q.front().isBreak;
//		q.pop();
//		for (int k = 0; k<4; k++) {
//			int nx = x + dx[k];
//			int ny = y + dy[k];
//			if (0 <= nx && nx < m && 0 <= ny && ny < n) {
//					if (a[nx][ny] == 0) {
//						d[nx][ny] = d[x][y] + 1;
//						q.push(point(nx, ny,++dist, isBreak));
//					}
//					else if (a[nx][ny] == 1 && !isBreak) {
//						d[nx][ny] = d[x][y] + 1;
//						q.push(point(nx, ny,++dist, !isBreak));
//					}
//				
//			}
//		}
//	}
//	
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j<m; j++) {
//			printf("%1d", d[j][i]);
//			
//		}
//		printf("\n");
//	}
//
//
//	printf("%d\n", d[m - 1][n - 1]);
//	return 0;
//}