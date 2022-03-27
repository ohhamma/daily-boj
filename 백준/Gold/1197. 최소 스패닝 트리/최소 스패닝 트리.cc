#include <iostream>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

struct st {
	int s, e, c;		// s: 시작점, e: 끝점, c: 간선의 가중치
};

int V, E;
int parent[10005];
st arr[100005];

int find(int a) {
	if (parent[a] < 0) return a;
	else return parent[a] = find(parent[a]);
}

int merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b) return 0;	// 이미 mst를 이루었을때 0을 반환
	if (parent[a] > parent[b]) swap(a, b);
	parent[a] += parent[b];
	parent[b] = a;
	return 1;				// 병합에 성공했을때 (mst를 아직 이루지 않았을때) 1을 반환
}

bool cmp(st s1, st s2) {
	return s1.c < s2.c;
}

int main() {
	FASTIO
	cin >> V >> E;
	for (int i = 0; i < E; i++) {
		int A, B, C; cin >> A >> B >> C;
		arr[i].s = A; arr[i].e = B; arr[i].c = C;
	}
	int ans = 0;
	sort(arr, arr + E, cmp);			// 가중치가 작은 것부터 나열
	for (int i = 1; i <= V; i++) parent[i] = -1;
	// 따로 V-1번 반복하지 않는 이유는
	// 병합가능의 여부를 통해 mst를 이루었는지를 확인할 수 있기 떄문
	for (int i = 0; i < E; i++)
		if(merge(arr[i].s,arr[i].e))	// 아직 mst를 이루지 않았다면
			ans += arr[i].c;			// 가중치 더해줌

	cout << ans;
}