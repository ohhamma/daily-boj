#include <iostream>

using namespace std;

int main() {
	int N, M;
	int num[100];
	cin >> N >> M;

	int res = 0;
	for (int i = 0; i < N; i++) cin >> num[i];

	// 삼중 for문의 역할: 배열 num(N개) 중에서 3개의 원소를 선택함 (NC3)
	for (int i = 0; i < N - 2; i++)
		for (int j = i + 1; j < N - 1;j++)
			for (int k = j + 1; k < N; k++)
				if (num[i] + num[j] + num[k] <= M && M - (num[i] + num[j] + num[k]) < M - res)
					res = num[i] + num[j] + num[k];		// 합이 M보다 크지 않고 M과의 차이가 더 작은 값을 합에 넣음

	cout << res;
}