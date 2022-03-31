#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define MAX 1000001

int N,num;
int m = MAX;
int M = -1*MAX;

int main() {
  FASTIO;
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> num;
		m = min(m,num);
		M = max(M,num);
	}
	cout << m << ' ' << M;
}