#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
  FASTIO;
	int N; cin >> N;
	for(int i=1; i<=N; i++) {
		for(int j=0; j<i; j++) cout << "*";
		cout << '\n';
	}
}