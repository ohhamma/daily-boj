// #include <bits/stdc++.h> : 표준 라이브러리 헤더들을 모두 한번에 Compile
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 987654321		// dist가 절대 가질수 없는 엄청 큰 값으로 설정
using namespace std;
typedef pair<int, int> pii;

int V, E, K;
int dist[20202];		// 거리값 넣는 배열
vector<pii> d[20202];	// 다중 인접 리스트(벡터)
int visited[20202];		// 방문 여부를 알려줌

priority_queue<pii, vector<pii>, greater<pii>> pq;		// 작은값부터 pop
// priority_queue<T, Container, Compare> : 우선순위 큐
//										   우선순위가 가장 큰 값이 Top을 유지
//										   최소값을 찾아주는 데에 O(logN)만큼 걸림

int main() {
	cin >> V >> E;
	cin >> K;
	int u, v, w;
	for (int i = 1; i <= E; i++) {
		cin >> u >> v >> w;
		d[u].push_back({ v,w });	// 다중 인접 리스트에 값 저장
	}

	for (int i = 1; i <= V; i++)
		dist[i] = INF;
	dist[K] = 0;	// 시작위치(현위치) dist = 0
	pq.push({ 0,K });	// K번 정점으로의 최단 경로 = 0

	while (!pq.empty()) {
		// 현위치를 갱신한다
		int curr = pq.top().second;		// 현위치의 정점번호
		int currd = pq.top().first;		// 현위치의 정점번호의 현재 거리값
		visited[curr] = 1;				// 방문했다고 정보 갱신해줌
		pq.pop();

		// auto 키워드를 사용하면 초깃값의 형식에 맞춰 선언하는
		// 인스턴스(변수)의 형식이 '자동'으로 결정된다
		// 타입 추론 (type inference)
		for (auto i : d[curr]) {		// d[curr]에 있는 pair 원소 하나하나를 훑어감
			int next = i.first;			// (v값) 도착정점
			int nextd = i.second;		// (w값) 간선의 가중치
			// 만약에 다음 정점의 현재 거리값이 (새로 갱신될 값보다) 더 크고
			// 아직 방문하지 않았다면
			if (dist[next] > currd + nextd && !visited[next]) {
				dist[next] = currd + nextd;		// 새로 갱신해줄것
				pq.push({ dist[next],next });	// 거리, 정점번호 순으로 push
			}
		}
	}
	for (int i = 1; i <= V; i++) {
		if (dist[i] == INF) cout << "INF\n";
		else cout << dist[i] << '\n';
	}
}