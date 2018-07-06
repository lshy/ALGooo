////
////  Num1949.cpp
////  AlgorithmStudy
////
////  Created by 이해원 on 2018. 4. 10..
////  Copyright © 2018년 이해원. All rights reserved.
////
////
////Num1949(SW_등산로조성).cpp
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <stack>
//#include <tuple>
//
//#define MAX(X,Y) ((X)>(Y))?(X):(Y)
//
//using namespace std;
//
///*
//1
//5 1
//9 3 2 3 2
//6 3 1 7 5
//3 4 8 9 9
//2 3 7 7 7
//7 6 5 5 8
//*/
//
//const int dx[4] = { 1,-1,0,0 };
//const int dy[4] = { 0,0,1,-1 };
//
//int d[100][100][100];
//
//struct node {
//	int x;
//	int y;
//	int build;
//	int currentH;
//};
//
//bool is_range(int x, int y, int n) {
//	return (0 <= x&&x<n) && (0 <= y&&y<n);
//}
//
//int main(void) {
//	int testcase;
//	cin >> testcase;
//	for (int t = 1; t <= testcase; t++) {
//		int n, k;
//		cin >> n >> k;
//		vector<vector<int> > map(n, vector<int>(n, 0));
//		vector<vector<bool> > is_visit(n, vector<bool>(n, false));
//		int max = 0;
//		for (int i = 0; i<n; i++) {
//			for (int j = 0; j<n; j++) {
//				cin >> map[i][j];
//				if (map[i][j]>max) {
//					max = map[i][j];
//				}
//			}
//		}
//		cout << "map : " << endl;
//		for (int i = 0; i<n; i++) {
//			for (int j = 0; j<n; j++) {
//				cout << map[i][j] << " ";
//			}
//			cout << endl;
//		}
//
//		stack<node> s;
//
//		for (int i = 0; i<n; i++) {
//			for (int j = 0; j<n; j++) {
//				if (map[i][j] == max) {
//					s.push({ j,i,0,map[i][j] });
//					d[i][j][0] = 1;
//					cout << "push : " << i << " " << j << endl;
//				}
//			}
//		}
//		int temp = 0;
//		while (!s.empty()) {
//			int cx = s.top().x;
//			int cy = s.top().y;
//			int cbuild = s.top().build;
//			int ccurrentH = s.top().currentH;
//			bool is_push = false;
//			cout << "y , x, build, currentH : " << cy << " " << cx << " " << cbuild << " " << ccurrentH << " " << s.size() << endl;
//			for (int i = 0; i<4; i++) {
//				int nx = cx + dx[i];
//				int ny = cy + dy[i];
//				cout << "y , x, build, currentH : " << ny << " " << nx << " " << cbuild << " " << ccurrentH << endl;
//				cout << is_range(ny, nx, n) << endl;
//				if (is_range(nx, ny, n) && map[ny][nx]<ccurrentH && !is_visit[ny][nx]) { //현재값을 알고있어야함
//					cout << "y , x, build, currentH : " << ny << " " << nx << " " << cbuild << " " << ccurrentH << " " << map[ny][nx] << endl;
//					d[ny][nx][cbuild] = d[cy][cx][cbuild] + 1;
//					is_push = true;
//					s.push({ nx,ny, cbuild, map[ny][nx] });
//					is_visit[ny][nx] = true;
//					break;
//				}
//				else if (is_range(nx, ny, n) && cbuild == 0 && map[ny][nx] >= ccurrentH && !is_visit[ny][nx]) {
//					temp = map[cy][cx] - 1;
//					cout << "y , x, k : " << cy << " " << cx << " " << temp << endl;
//					if (temp >= 0) {
//						cout << "y , x, k : " << cy << " " << cx << " " << temp << endl;
//						d[ny][nx][cbuild + 1] = d[cy][cx][cbuild] + 1;
//						is_push = true;
//						s.push({ nx,ny, cbuild + 1, temp });
//						is_visit[ny][nx] = true;
//						break;
//					}
//				}
//				if (!is_push && !s.empty()) {
//
//					s.pop();
//					cout << "y , x, build, currentH : " << cy << " " << cx << " " << cbuild << " " << ccurrentH << " " << map[cy][cx] << endl;
//				}
//
//			}
//		}
//	}
//	return 0;
//}
//
///*
//int map[10][10];
//int checkMap[10][10];
//int n;
//int maxLen=0;
//
//struct info {
//int val;
//int x;
//int y;
//int drill;
//};
//int k;
//
//void calc(info curInfo, int len) {
//int cx = curInfo.x;
//int cy = curInfo.y;
//int cVal = curInfo.val;
//int cDrill = curInfo.drill;
//maxLen = MAX(maxLen, len);
//checkMap[cy][cx] = 1;
//
//for(int i=0;i<4;i++) {
//int nx = cx+dx[i];
//int ny = cy+dy[i];
//if(nx>=0 && nx<n && ny>=0 && ny<n && checkMap[ny][nx]==0) {
//info tempInfo;
//if(map[ny][nx]>=cVal && cDrill==1) {
//if(map[ny][nx]-(cVal-1)<=k && (cVal-1)>=0) {
//tempInfo.x=nx;
//tempInfo.y=ny;
//tempInfo.val=cVal-1;
//tempInfo.drill=0;
//calc(tempInfo, len+1);
//}
//} else {
//if(map[ny][nx]<cVal) {
//tempInfo.x = nx;
//tempInfo.y = ny;
//tempInfo.val = map[ny][nx];
//tempInfo.drill = cDrill;
//calc(tempInfo, len+1);
//}
//}
//}
//}
//checkMap[cy][cx]=0;
//}
//
//int main(void) {
//int t;
//cin>>t;
//for(int test = 0;test<t;test++) {
//cin>>n>>k;
//memset(map, 0, sizeof(map));
//memset(checkMap, 0, sizeof(checkMap));
//maxLen=0;
//int maxVal = 0;
//for(int i=0;i<n;i++) {
//for(int j=0;j<n;j++) {
//cin>>map[i][j];
//maxVal = MAX(maxVal, map[i][j]);
//}
//}
//vector<info> topInfo;
//for(int i=0;i<n;i++) {
//for(int j=0;j<n;j++) {
//if(map[i][j]==maxVal) {
//info newTop;
//newTop.val = map[i][j];
//newTop.drill = 1;
//newTop.x=j;
//newTop.y=i;
//topInfo.push_back(newTop);
//}
//}
//}
//while(!topInfo.empty()) {
//info curState = topInfo.back();
//topInfo.pop_back();
//calc(curState,1);
//}
//cout<<"#"<<test+1<<" "<<maxLen<<endl;
//}
//return 0;
//}
//*/