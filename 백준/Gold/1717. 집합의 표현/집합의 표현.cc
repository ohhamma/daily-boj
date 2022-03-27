#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int n, m;
int parent[1000005];

// (같은 집합인지 판정하기 위해) 본인 집합의 root를 찾음
int find(int a) {
	if (parent[a] < 0) return a;				// parent[a]이 음수면 a가 root
	else return parent[a] = find(parent[a]);	// 재귀로 root을 찾아서 return
}

// 집합의 병합
void merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b) return;		// 이미 연결되어있음 (root가 같음)
	// 작큰 ( 작은걸 큰거에 붙여줌)
	if (parent[a] > parent[b]) swap(a, b);	// b가 더 클때 (집합의 크기는 음수로 표현)
	parent[a] += parent[b];		// a에 b를 붙임
	parent[b] = a;				// b의 root는 a가 됨
}

// Union-find (분리집합)
int main() {
	FASTIO
	cin >> n >> m;
	for (int i = 0; i <= n; i++) parent[i] = -1;
	for (int i = 0; i < m; i++) {
		int a, b, c; cin >> a >> b >> c;
		if (a) {
			if (find(b) == find(c)) cout << "YES\n";
			else cout << "NO\n";
		}
		else merge(b, c);
	}
}