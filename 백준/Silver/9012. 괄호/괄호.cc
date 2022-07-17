#include <iostream>
#include <string>
#include <stack>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	FASTIO
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		string s; cin >> s;
		stack<char> st;
		bool vps = true;		// )( 상태가 입력되는 경우 고려
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(') st.push('(');
			else if (s[j] == ')') {
				if (st.empty()) {
					vps = false;
					break;
				}
				st.pop();
			}
		}
		if (st.empty() && vps) cout << "YES\n";
		else cout << "NO\n";
	}
}