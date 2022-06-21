#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int E,S,M;
ll ans;

int main() {
  FASTIO;
  cin >> E >> S >> M;
  if(E==15) E=0;
  if(S==28) S=0;
  if(M==19) M=0;
  ans = 1;
  while(1) {
    if(ans%15==E&&ans%28==S&&ans%19==M) break;
    ans++;
  }
  cout << ans;
}