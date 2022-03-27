#include <iostream>
#include <algorithm>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define INF 987654321
using namespace std;

int N, M, X;
int dist[1010][1010];

bool cmp(int a, int b) {
	return a > b;
}

// 플로이드 워셜
int main() {
	FASTIO
	cin >> N >> M >> X;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			dist[i][j] = INF;
		dist[i][i] = 0;
	}

	for (int i = 0; i < M; i++) {
		int a, b, c; cin >> a >> b >> c;
		dist[a][b] = min(dist[a][b], c);
	}

	for (int k = 1; k <= N; k++)
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	vector<int> ans;
	for (int i = 1; i <= N; i++)
		ans.push_back(dist[i][X]+dist[X][i]);

	sort(ans.begin(), ans.end(), cmp);

	cout << ans[0];
}