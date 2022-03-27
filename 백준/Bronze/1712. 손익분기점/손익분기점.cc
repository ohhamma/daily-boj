#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int A, B, C;

int main() {
	FASTIO
	cin >> A >> B >> C;
	if (B >= C) {
		cout << -1; return 0;
	}
	cout << A / (C - B) + 1;
}