//#include <iostream>
//#include <vector>
//#include <deque>
//#include <cmath>
//
//using namespace std;
//const int dx[4] = { 1,0,-1,0 };
//const int dy[4] = { 0,-1,0,1 };
//const int dk[4] = { 3, 0, 1, 2 };
//const int dz[4] = { 1, 2, 3, 0 };
//const int df[4] = { 2, 3, 0, 1 };
//void makeGenerationCurve(int x, int y, int d, int g, vector<vector<bool>> &map);
//int checkSquar(vector<vector<bool>> &map);
//
//int main(void) {
//	vector<vector<bool> > map(101, vector<bool>(101, false));
//	
//	int N;
//	cin >> N;
//	int answer = 0;
//	for (int i = 0; i<N; i++) {
//		int x, y, d, g;
//		cin >> x >> y >> d >> g;
//		makeGenerationCurve(x, y, d, g, map);
//	}
//	answer = checkSquar(map);
//
//	cout << answer << endl;
//	return 0;
//}
//
//void makeGenerationCurve(int x, int y, int d, int g, vector<vector<bool>> &map) {
//	map[x][y] = true;
//	map[x + dx[d]][y + dy[d]] = true;
//	pair<int, int> start  = make_pair(x + dx[d], y+ dy[d]);
//	deque<int> now;
//	deque<int> next;
//	deque<int> tmp;
//
//	now.push_back(df[d]);
//
//	int i = 0;
//	int a = 0;
//		while (i != g) {
//			while (!now.empty()) {
//				a = now.front();
//				
//				start.first += dx[dk[a]];
//				start.second += dy[dk[a]];
//				if (start.first >= 0 && start.second >= 0)
//					map[start.first][start.second] = true;
//
//				now.pop_front();
//				next.push_back(a);
//				next.push_front(dz[a]);
//			}
//			tmp = now;
//			now = next;
//			next = tmp;
//			i++;
//		}
//}
//
//int checkSquar(vector<vector<bool> >&map) {
//	int count = 0;
//	for (int i = 0; i <= 100; i++) {
//		for (int j = 0; j <= 100; j++) {
//			if (map[i][j]) {
//				if (i + 1 <= 100 && j + 1 <= 100) {
//					if (map[i + 1][j] && map[i][j + 1] && map[i + 1][j + 1])
//						count++;
//				}
//			}
//		}
//	}
//	return count;
//}