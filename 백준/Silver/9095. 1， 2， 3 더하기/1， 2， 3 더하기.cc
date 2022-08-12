#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int T, n;
int dp[11];

int main() {
  FASTIO;
  dp[1] = 1;
  dp[2] = dp[1] + 1;
  dp[3] = dp[2] + dp[1] + 1;
  for(int i=4; i<11; i++)
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];

  cin >> T;
  while(T--) {
    cin >> n;
    cout << dp[n] << '\n';;
  }
}