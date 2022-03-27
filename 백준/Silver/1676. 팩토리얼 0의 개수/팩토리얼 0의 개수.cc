#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int N,cnt,tmp;

int main() {
  FASTIO;
  cin >> N;
  for(int i=1; i<=N; i++) {
    tmp = i;
    while(tmp%5==0) {
      cnt++;
      tmp/=5;
    }
  }
  cout << cnt;
}

// 2^n * 5^m 일때 0의 개수는
// n<m이면 n개, 그 반대면 m개이다
// 이때 2의 개수가 5의 개수보다 압도적으로 많으므로 5의 개수만 센다