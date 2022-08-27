#include <iostream>

using namespace std;

int main() {
	int T;
	int H, W, N;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		if (N % H == 0) cout << 100 * H + (N / H);
		else cout << 100 * (N % H) + (N / H + 1);
		cout << '\n';
	}
}