#include <iostream>
#include <string>
using namespace std;

int solve(string s) {
	int num = 0;
	bool m = false;
	string tmp = "";

	for (int i = 0; i <= s.size(); i++) {
		// 연산자가 왔을 때
		if (s[i] == '+' || s[i] == '-' || s[i] == '\0') {
			if (m)
				num -= stoi(tmp);	// '-'가 등장했으면 빼고
			else
				num += stoi(tmp);	// 등장하지 않았으면 더함

			if (s[i] == '-')
				m = true;

			tmp = "";				// 숫자 넣는 문자열 초기화
			continue;
		}

		// 숫자가 왔을 때 tmp에 추가
		tmp += s[i];
	}
	return num;
}

int main() {
	string s;
	cin >> s;

	cout << solve(s);
}