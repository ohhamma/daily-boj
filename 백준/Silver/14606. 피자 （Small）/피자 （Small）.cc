#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N;
ll res,dp[11];

int main() {
  FASTIO;
  dp[1] = 0;
  for(int i=2; i<=10; i++)
    for(int j=1; j<=i/2; j++){
      res = j*(i-j)+dp[j]+dp[i-j];
      dp[i] = max(dp[i],res);
    }
  cin >> N;
  cout << dp[N];
}