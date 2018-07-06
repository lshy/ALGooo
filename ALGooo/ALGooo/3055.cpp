//#include <cstdio>
//#include <deque>
//#include <algorithm>
//using namespace std;
//int d[51][51];
//char a[51][51];
//int n, m;
//int resultX, resultY;
//
//deque<pair<int, int>> gosem;
//deque<pair<int, int>> water;
//
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//
//void moveWater() {
//	while (water.front().first != -1) {
//
//		int x = water.front().first;
//		int y = water.front().second;
//		water.pop_front();
//		for (int k = 0; k<4; k++) {
//			int nx = x + dx[k];
//			int ny = y + dy[k];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (a[ny][nx] == '.') {
//					a[ny][nx] = '*';
//					water.push_back(make_pair(nx, ny));
//				}
//			}
//		}
//	}
//	water.pop_front();
//	water.push_back(make_pair(-1, -1));
//}
//
//void moveGosem() {
//	while (gosem.front().first != -1) {
//
//		int x = gosem.front().first;
//		int y = gosem.front().second;
//		gosem.pop_front();
//		for (int k = 0; k<4; k++) {
//			int nx = x + dx[k];
//			int ny = y + dy[k];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (a[ny][nx] == '.' && d[ny][nx] == -1) {
//					d[ny][nx] = d[y][x] + 1;
//					gosem.push_back(make_pair(nx, ny));
//				}
//				else if (a[ny][nx] == 'D') {
//					if (d[ny][nx] == -1) {
//						d[ny][nx] = d[y][x] + 1;
//					}
//					else {
//						d[ny][nx] = min(d[ny][nx], d[y][x] + 1);
//					}
//
//				}
//			}
//		}
//	}
//	gosem.pop_front();
//	gosem.push_back(make_pair(-1, -1));
//}
//
//int main() {
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i<m; i++) {
//		scanf("%s", a[i]);
//
//	}
//
//	for (int i = 0; i<m; i++) {
//		for (int j = 0; j < n; j++) {
//
//			d[i][j] = -1;
//			if (a[i][j] == '*') {
//				water.push_back(make_pair(j, i));
//				water.push_back(make_pair(-1, -1));
//			}
//			else if (a[i][j] == 'S') {
//				gosem.push_back(make_pair(j, i));
//				gosem.push_back(make_pair(-1, -1));
//				d[i][j] = 0;
//			}
//			else if (a[i][j] == 'D') {
//				resultX = j;
//				resultY = i;
//			}
//		}
//
//	}
//
//	while (gosem.size() != 1) {
//		if (water.size() != 0) {
//			moveWater();
//		}
//		moveGosem();
//
//	}
//
//
//
//
//	if (d[resultY][resultX] == -1) {
//		printf("KAKTUS\n");
//	}
//	else {
//		printf("%d\n", d[resultY][resultX]);
//	}
//
//
//
//
//
//	return 0;
//}