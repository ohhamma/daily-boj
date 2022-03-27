#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define INF 987654321
using namespace std;
typedef pair<int, int> pii;

int N, E, v1, v2;
vector<pii> d[808];
int dist[808];

priority_queue<pii, vector<pii>, greater<pii>> pq;

void daik() {
	while (!pq.empty()) {
		int curr = pq.top().second;
		int currd = pq.top().first;
		pq.pop();

		for (auto i : d[curr]) {
			int next = i.first;
			int nextd = i.second;
			if (dist[next] > currd + nextd) {
				dist[next] = currd + nextd;
				pq.push({ dist[next],next });
			}
		}
	}
}

int main() {
	cin >> N >> E;
	for (int i = 1; i <= E; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		d[a].push_back({ b,c });
		d[b].push_back({ a,c });
	}
	cin >> v1 >> v2;

	// 1에서 각각 v1랑 v2까지의 최단거리 구하기
	for (int i = 1; i <= N; i++) dist[i] = INF;
	dist[1] = 0;
	pq.push({ 0,1 });
	daik();
	int OnetoV1 = dist[v1];
	int OnetoV2 = dist[v2];

	// v1에서 v2까지의 최단거리 구하기
	for (int i = 1; i <= N; i++) dist[i] = INF;
	dist[v1] = 0;
	pq.push({ 0,v1 });
	daik();
	int V1toV2 = dist[v2];

	// N에서 각각 v1이랑 v2까지의 최단거리 구하기
	for (int i = 1; i <= N; i++) dist[i] = INF;
	dist[N] = 0;
	pq.push({ 0,N });
	daik();
	int NtoV1 = dist[v1];
	int NtoV2 = dist[v2];

	if (OnetoV1 == INF || V1toV2 == INF || NtoV2 == INF) {
		if (OnetoV2 == INF || V1toV2 == INF || NtoV1 == INF) cout << -1;
		else cout << OnetoV2 + V1toV2 + NtoV1;
	}
	else {
		if (OnetoV2 == INF || V1toV2 == INF || NtoV2 == INF)
			cout << OnetoV1 + V1toV2 + NtoV2;
		else cout << min(OnetoV1 + V1toV2 + NtoV2, OnetoV2 + V1toV2 + NtoV1);
	}
}