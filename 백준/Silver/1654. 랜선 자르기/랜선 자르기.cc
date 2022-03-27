#include <iostream>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

ll K, N;
ll line[10005];
ll ans;

// 이분탐색 (가능한 랜선의 길이: 1 ~ 최대랜선길이)

int main() {
	FASTIO;
	cin >> K >> N;
	ll M = 0;
	for (int i = 0; i < K; i++) {
		cin >> line[i];
		M = max(M, line[i]);
		
	}
	ll l = 1;
	ll r = M;
	while (l <= r) {
		ll mid = (l + r) / 2;
		ll n = 0;
		for (int i = 0; i < K; i++) n += line[i] / mid;
		if (n >= N) {
			ans = max(ans, mid);
			l = mid + 1;
		}
		else r = mid - 1;
	}
	cout << ans << '\n';
}