#include <iostream>
#include <cstring>
using namespace std;

long long fib[100];

long long fibo(int n) {
	if (fib[n] != -1) return fib[n];	// 초기화됐으면 그 값을 반환
	return fib[n] = fibo(n - 1) + fibo(n - 2);	// 초기화되지 않았으면 배열에 값을 대입한 후 반환
}

int main() {
	int n;
	cin >> n;
	memset(fib, -1, sizeof(fib));	// fib 배열을 모두 -1로 초기화
	fib[0] = 0; fib[1] = 1;		// 0번째와 1번째 요소는 각각 0과 1로 초기화
	cout << fibo(n);
}