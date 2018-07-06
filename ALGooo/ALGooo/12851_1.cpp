//#include <iostream>
//#include <queue>
//#include <tuple>
//#include <vector>
//#define MAX(X,Y) ((X)>(Y))?(X):(Y)
//
//using namespace std;
//int d[1000][1000][2];
//
//const int dx[4] = { 0,0,1,-1 };
//const int dy[4] = { 1,-1,0,0 };
//
//int main(void) {
//	int m, n;
//	cin >> n >> m;
//	vector<vector<int> > map(n, vector<int>(m, 0));
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j<m; j++) {
//			char input;
//			cin >> input;
//			map[i][j] = input - '0';
//		}
//	}
//	d[0][0][0] = 1;
//	int k = 0;
//	queue<tuple<int, int, int> > q;
//	q.push(make_tuple(0, 0, k));
//
//	while (!q.empty()) {
//		int cx, cy, ck;
//		tie(cx, cy, ck) = q.front();
//		q.pop();
//
//		for (int i = 0; i<4; i++) {
//			int nx = cx + dx[i];
//			int ny = cy + dy[i];
//
//			if (nx<0 || nx >= n || ny<0 || ny >= m) continue;
//			if (map[ny][nx] == 0 && d[ny][nx][k] == 0) {
//				d[ny][nx][ck] = d[cy][cx][ck] + 1;
//				q.push(make_tuple(nx, ny, ck));
//			}
//			if (ck == 0 && map[ny][nx] == 1 && d[ny][nx][ck + 1] == 0) {
//				d[ny][nx][ck + 1] = d[cy][cx][ck] + 1;
//				q.push(make_tuple(nx, ny, ck + 1));
//			}
//		}
//	}
//
//	if (d[n - 1][m - 1][0] != 0 && d[n - 1][m - 1][1] != 0) {
//		cout << min(d[n - 1][m - 1][0], d[n - 1][m - 1][1]) << endl;
//	}
//	else if (d[n - 1][m - 1][0] != 0) {
//		cout << d[n - 1][m - 1][0] << endl;
//	}
//	else if (d[n - 1][m - 1][1] != 0) {
//		cout << d[n - 1][m - 1][1] << endl;
//	}
//	else {
//		cout << -1 << endl;
//	}
//	/*
//	cout<<"k=0"<<endl;
//	for(int i=0;i<n;i++) {
//	for(int j=0;j<m;j++) {
//	cout<<d[i][j][0]<<" ";
//	}
//	cout<<endl;
//	}
//	cout<<endl;
//	cout<<"k=1"<<endl;
//	for(int i=0;i<n;i++) {
//	for(int j=0;j<m;j++) {
//	cout<<d[i][j][1]<<" ";
//	}
//	cout<<endl;
//	}*/
//	return 0;
//}