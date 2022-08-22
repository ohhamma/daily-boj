#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define MOD 1000000009
using namespace std;

int T;
long long arr[1010101];

int main() {
	FASTIO;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	for (int i = 4; i <= 1000000; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
		arr[i] %= MOD;
	}

	cin >> T;
	for (int i = 0; i < T; i++) {
		int n; cin >> n;
		cout << arr[n] << '\n';
	}
}