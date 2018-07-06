//#include <iostream>
//#include <vector>
//#include <climits>
//#include <cmath>
//#define MIN(X,Y) ((X)<(Y))?(X):(Y)
//
//using namespace std;
//vector<pair<int, int> > house;
//vector<pair<int, int> > chickenHouse;
//int answer_distance = INT_MAX;
//
//void selectChickenHouse(vector<int> set, int m, int n, int index);
//int minDistance(vector<int> set, vector<pair<int, int> > house, vector<pair<int, int> > chickenHouse);
//
//
//int main(void) {
//	int N, M;
//	cin >> N >> M;
//	vector<vector<int> > map(N, vector<int>(N, 0));
//	vector<int> set;
//
//	for (int i = 0; i<N; i++) {
//		for (int j = 0; j<N; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 1) {
//				house.push_back(make_pair(j, i));
//			}
//			else if (map[i][j] == 2) {
//				chickenHouse.push_back(make_pair(j, i));
//			}
//		}
//	}
//	for (int i = 1; i <= M; i++) {
//		selectChickenHouse(set, (int)chickenHouse.size(), i, 0);
//	}
//
//	cout << answer_distance << endl;
//	return 0;
//}
//
//void selectChickenHouse(vector<int> set, int m, int n, int index) {
//
//	if (set.size() == n) {
//		answer_distance = MIN(minDistance(set, house, chickenHouse), answer_distance);
//		return;
//	}
//	if (m == index) {
//		return;
//	}
//	set.push_back(index);
//	selectChickenHouse(set, m, n, index + 1);
//	set.pop_back(); 
//	selectChickenHouse(set, m, n, index + 1);
//}
//
//int minDistance(vector<int> set, vector<pair<int, int> > house, vector<pair<int, int> > chickenHouse) {
//	int sum = 0;
//	for (int i = 0; i < house.size(); i++) {
//
//		int min = INT_MAX;
//		for (int j = 0; j < set.size(); j++) {
//			min = MIN(abs(house[i].first - chickenHouse[set[j]].first) + abs(house[i].second - chickenHouse[set[j]].second),min);
//		}
//		sum += min;
//	}
//
//	return sum;
//}