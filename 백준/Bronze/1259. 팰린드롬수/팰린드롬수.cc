#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (1) {
		int flag = 0;
		cin >> s;
		if (s == "0") break;			// 입력값이 0일때 루프 탈출
		for (int i = 0; i < s.size() / 2; i++) {	// 반복횟수를 2 정수나누기
			if (s[i] != s[s.size() - 1 - i]) {
				cout << "no\n";
				flag = 1;				// 팰린드롬이 아닐때 flag = 1
				break;
			}
		}
		if (!flag) cout << "yes\n";		// 팰린드롬일때 yes 출력
	}
}