#include <iostream>

using namespace std;

int n, m;
int ans[10];

void solve(int level) {
	if (level == m) {
		for (int i = 0; i < m; i++) cout << ans[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!level || (level && i > ans[level - 1])) {
			ans[level] = i;
			solve(level + 1);
		}
	}
}

int main() {
	cin >> n >> m;
	solve(0);
}