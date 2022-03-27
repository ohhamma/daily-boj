#include <iostream>
#include <string>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

string s;

bool cmp(char c1, char c2) {
	return c1 > c2;
}

int main() {
	FASTIO
	cin >> s;
	sort(s.begin(), s.end(), cmp);
	for (int i = 0; i < s.size(); i++) cout << s[i];
}