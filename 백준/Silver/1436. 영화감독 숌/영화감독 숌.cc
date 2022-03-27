#include <iostream>
#include <string>
using namespace std;

int Findseries(int N) {
	int i = 666;
	int series = 0;
	string target;
	while (1) {
		target = to_string(i);		// 숫자를 문자열로 바꿔줌
		for (int j = 0; j < target.length() - 2; j++) {
			if (target[j] == '6'
			 && target[j + 1] == '6'
			 && target[j + 2] == '6') {
				series++;
				if (series == N) return i;
				break;
			}
		}
		i++;
	}
}

int main() {
	int N;
	cin >> N;
	cout << Findseries(N);
}

// 숫자를 문자열로 변경시켜주고,
// 문자열 내에 '6'이 연속으로 3번 나오는 경우를 모두 찾는다