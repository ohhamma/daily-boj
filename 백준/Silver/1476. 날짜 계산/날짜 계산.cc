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
  ans = 1;
  while(1) {
    if((ans-E)%15==0&&(ans-S)%28==0&&(ans-M)%19==0) break;
    ans++;
  }
  cout << ans;
}