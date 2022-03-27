#include <iostream>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef pair<int, int> pii;

int N, K;
bool visited[101010];

int bfs(int start) {
	queue<pii> q;
	q.push({ start,0 });
	visited[start] = true;
	while (!q.empty()) {
		int now = q.front().first;
		int time = q.front().second;
		q.pop();
		if (now == K) return time;
		else if (now - 1 == K || now + 1 == K || 2 * now == K) return time + 1;
		else {
			if (now - 1 >= 0 && !visited[now - 1]) {
				q.push({ now - 1,time + 1 });
				visited[now - 1] = true;
			}
			if (now + 1 <= 100000 && !visited[now + 1]) {
				q.push({ now + 1,time + 1 });
				visited[now + 1] = true;
			}
			if (2 * now <= 100000 && !visited[2 * now]) {
				q.push({ 2 * now,time + 1 });
				visited[2 * now] = true;
			}
		}
	}
}

int main() {
	FASTIO;
	cin >> N >> K;
	cout << bfs(N);
}