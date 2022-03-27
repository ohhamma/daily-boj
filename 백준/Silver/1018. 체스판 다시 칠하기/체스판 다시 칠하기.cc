#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, M;
string s[55];

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) cin >> s[i];

	int ans = 64;
	for(int a=0; a<=N-8; a++)
		for (int b = 0; b <= M - 8; b++) {
			int sol1 = 0, sol2 = 0;		// sol1: 좌상단이 'B' / sol2: 좌상단이 'W'
			for (int i = a; i < a + 8; i++)
				for (int j = b; j < b + 8; j++) {
					// 좌상단이 'B'일때 i+j가 짝수면 'B'여야하고,
					// 좌상단이 'W'일때 i+j가 짝수면 'W'여야한다.
					if (((i + j) % 2 == 0 && s[i][j] == 'W') ||
						(i + j) % 2 == 1 && s[i][j] == 'B') sol1++;
					if (((i + j) % 2 == 0 && s[i][j] == 'B') ||
						(i + j) % 2 == 1 && s[i][j] == 'W') sol2++;
				}
			ans = min(ans, min(sol1, sol2));
		}
	cout << ans;
}