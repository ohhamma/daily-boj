#include <iostream>
#include <string>
#include <queue>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

queue<int> q;

int main() {
	FASTIO
	int N; cin >> N;
	for (int i=0; i<N; i++) {
		string s; cin >> s;
		if(s=="push") {
			int num; cin >> num;
			q.push(num);
		}
		else if(s=="pop") {
			if (q.empty()) cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if(s=="size") {
			cout << q.size() << '\n';
		}
		else if(s=="empty") {
			if (q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if(s=="front") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}
		else if(s=="back") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		}
	}
}