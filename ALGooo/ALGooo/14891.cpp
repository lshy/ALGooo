#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <cmath>

using namespace std;

/*
10010011
01010011
11100011
01010101
8
1 1
2 1
3 1
4 1
1 -1
2 -1
3 -1
4 -1
*/


void moveTopni(int num, int way);
int makeResult();
void changeCheck(int num, int way);
int makeCompare(int num, int way);

vector<vector<int>> list(4);
vector<int> checkList(4);
vector<pair<bool,int>> changeList(4);
vector<bool> isVist(4);
int main() {
	string num;
	for (int i = 0; i < 4; i++) {
		cin >> num;
		for (int j = 0; j < 8; j++) {
			list[i].push_back(num[j]);
		}
		checkList[i] = 0;
	}
	
	int count = 0;
	cin >> count;
	int number;
	int way;
	for (int i = 0; i < count; i++) {
		cin >> number;
		cin >> way;
		moveTopni(number-1, way);
		for (int j = 0; j < 4; j++) {
			isVist[j] = false;
			if (changeList[j].first) {
				changeList[j].first = false;
				changeCheck(j, changeList[j].second);
			}
		}
	}
	cout << makeResult() << endl;

	return 0;
}

void moveTopni(int num, int way) {
	if (num < 0 || num >3) {
		return;
	}
	if (isVist[num]) {
		return;
	}

	isVist[num] = true;

	changeList[num].first = true;
	changeList[num].second = way;

	
	int right = makeCompare(num, 1);
	int left = makeCompare(num, -1);;
	int other;
	if (num == 0) {
		other = makeCompare(1, -1);
		if (list[num][right] != list[num+1][other]) {
			moveTopni(1, way*-1);
		}
	}
	else if (num == 3) {
		other = makeCompare(2, 1);
		if (list[num][left] != list[num-1][other]) {
			moveTopni(2, way * -1);
		}
	}
	else {
		other = makeCompare(num + 1, -1);
		if (list[num][right] != list[num + 1][other]) {
			moveTopni(num+1, way*-1);
		}
		other = makeCompare(num - 1, 1);
		if (list[num][left] != list[num - 1][other]) {
			moveTopni(num-1, way * -1);
		}
	}

}

void changeCheck(int _num, int way) {
	int num = checkList[_num];
	if (way == -1) {
		if (num == 7)
			num = 0;
		else
			num++;
	}
	else {
		if (num == 0)
			num = 7;
		else
			num--;
	}

	checkList[_num] = num;
}

int makeCompare(int num, int way) {
	int right = checkList[num] + 2;
	int left = checkList[num] - 2;
	if (right > 7) {
		right -= 8;
	}
	if (left < 0) {
		left += 8;
	}
	return way == 1 ? right : left;
}

int makeResult() {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		if(list[i][checkList[i]] == 49)
			sum += pow(2, i);
	}
	return sum;
}