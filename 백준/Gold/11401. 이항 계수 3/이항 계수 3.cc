#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define MOD 1000000007

ll N,K;
ll up=1,down=1;

ll sol(ll mit, ll jisu) {   // 분할정복으로 거듭제곱 구하기
  if(jisu==0) return 1;
  ll half = sol(mit,jisu/2);
  return jisu%2 ? (half*half%MOD)*mit%MOD : half*half%MOD;
}

int main() {
  FASTIO;
  cin >> N >> K;
  for(int i=N; i>N-K; i--) up=up*i%MOD;
  for(int i=1; i<=K; i++) down=down*i%MOD;
  cout << (up%MOD)*(sol(down,MOD-2)%MOD)%MOD;
}

// 분수형태를 분자*X 으로 바꿔줘야함 (분모가 0이 될수있기때문)
// 페르마의 소정리

// MOD-2 > 1s 이기 때문에 분할정복으로 거듭제곱값을 구한다