#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define MOD 10007

ll n;
ll dp[1010];

int main() {
  FASTIO;
  dp[1] = 1;
  dp[2] = 2;
  for(int i=3; i<=1000; i++)
    dp[i] = (dp[i-1] + dp[i-2]) % MOD;
  cin >> n;
  cout << dp[n] % MOD;
}