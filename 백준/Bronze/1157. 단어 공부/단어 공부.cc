#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;

	string alpha_list = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int alpha_num[26] = {};		// 배열을 전부 0으로 초기화

	cin >> s;
	int slen = s.length();
	transform(s.begin(), s.end(), s.begin(), ::toupper);	// 소문자를 대문자로

	for (int i = 0; i < slen; i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == alpha_list[j]) {
				alpha_num[j] += 1;
				break;
			}
		}
	}

	int max_num = 0;
	vector<int> max_idx;
	for (int i = 0; i < 26; i++) {
		if (max_num < alpha_num[i])
			max_num = alpha_num[i];
	}

	for (int i = 0; i < 26; i++) {
		if (max_num == alpha_num[i])
			max_idx.emplace_back(i);
	}

	if (max_idx.size() == 1) {
		cout << alpha_list[max_idx[0]];
	}
	else
		cout << "?";

	return 0;
}