#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
typedef pair<string, int> psi;

int parent[200005];		// 친구관계수 1e^6 (한 관계당 2명) -> 최대 2e^6

int find(int a) {
	if (parent[a] < 0) return a;
	else return parent[a] = find(parent[a]);
}

int merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b) return (-1) * parent[a];
	if (parent[a] > parent[b]) swap(a, b);
	parent[a] += parent[b];
	parent[b] = a;
	return (-1) * parent[a];
}

int main() {
	FASTIO
	int t; cin >> t;
	while (t--) {
		int F; cin >> F;
		map<string, int> m;
		int cnt = 0;
		for (int i = 0; i <= 2 * F; i++) parent[i] = -1;
		for (int i = 0; i < F; i++) {
			string s1, s2; cin >> s1 >> s2;
			if (i == 0) {
				m.insert(psi(s1, cnt));
				cnt++;
				m.insert(psi(s2, cnt));
				cnt++;
			}
			else {
				if (m.find(s1) == m.end()) {
					m.insert(psi(s1, cnt));
					cnt++;
				}
				if (m.find(s2) == m.end()) {
					m.insert(psi(s2, cnt));
					cnt++;
				}
			}
			cout << merge(m[s1], m[s2]) << '\n';
		}
	}
}