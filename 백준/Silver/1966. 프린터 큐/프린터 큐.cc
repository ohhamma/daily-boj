#include <iostream>
#include <algorithm>
#include <queue>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef pair<int, int> pii;

int T, N, M;

int main() {
	FASTIO;
	cin >> T;
	while (T--) {
		cin >> N >> M;
		int count = 0;
		queue<pii> q;
		priority_queue<int> pq;
		for (int i = 0; i < N; i++) {
			int impt; cin >> impt;
			q.push({ i,impt });
			pq.push(impt);
		}
		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (pq.top() == value) {
				pq.pop();
				count++;
				if (index == M) {
					cout << count << '\n';
					break;
				}
			}
			else q.push({ index,value });
		}
	}
}