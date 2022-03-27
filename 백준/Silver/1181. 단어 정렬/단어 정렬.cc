#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string words[20202];		// 배열 넉넉하게 잡기
							// 함수 내에서 너무 많은 메모리 사용하지 않기

bool cmp(string s1, string s2) {
	if (s1.length() == s2.length()) {
		return s1 < s2;
	}
	return s1.length() < s2.length();
}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> words[i];
	}
	sort(words, words + N, cmp);

	for (int i = 0; i < N; i++) {
		if (words[i] != words[i + 1])
			cout << words[i] << '\n';
	}
}