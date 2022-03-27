#include <iostream>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define INF 987654321
using namespace std;

int n, k, s;
int dist[404][404];

int main() {
	FASTIO
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			dist[i][j] = INF;
	// 서로 다른 두 사건의 번호가 주어지므로 dist[i][i] = 0은 생략

	// a->b일때 a에서 b로 가는 간선 생성
	for (int i = 0; i < k; i++) {
		int a, b; cin >> a >> b;
		dist[a][b] = 1;
	}

	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (dist[i][k] == 1 && dist[k][j] == 1) dist[i][j] = 1;

	cin >> s;
	for (int i = 0; i < s; i++) {
		int a, b; cin >> a >> b;
		// a->b 일 때
		if (dist[a][b] == 1) cout << -1;
		else {
			// b에서 a로 가는 간선이 있으면 a<-b이므로 1 출력
			if (dist[b][a] == 1) cout << 1;
			else cout << 0;
		}
		cout << '\n';
	}
}