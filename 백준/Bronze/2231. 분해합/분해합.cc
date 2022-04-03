#include <iostream>

using namespace std;

int solve(int num) {
	int sum = num;
	while (num) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		if (i == N) cout << 0;
		if (solve(i) == N) {
			cout << i;
			break;
		}
	}
}