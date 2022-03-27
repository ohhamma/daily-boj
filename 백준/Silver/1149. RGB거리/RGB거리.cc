#include <iostream>
#include <algorithm>
using namespace std;

int house[1001][3];		// house[i][0]: i번째 집을 빨강색으로 칠할 떄의 최소비용

int main() {
	int N;
	cin >> N;
	int cost[3];
	house[0][0] = 0;
	house[0][1] = 0;
	house[0][2] = 0;
	for (int i = 1; i <= N; i++) {
		cin >> cost[0] >> cost[1] >> cost[2];
		house[i][0] = min(house[i - 1][1], house[i - 1][2]) + cost[0];	// R
		house[i][1] = min(house[i - 1][0], house[i - 1][2]) + cost[1];	// G
		house[i][2] = min(house[i - 1][0], house[i - 1][1]) + cost[2];	// B
	}
	cout << min(min(house[N][0], house[N][1]), house[N][2]);	// 최솟값
}