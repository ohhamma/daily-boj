#include <iostream>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int N,ans;
int arr[1001];
int dp[1001];

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++)
    cin >> arr[i];
  
  for(int i=0; i<N; i++) {
    dp[i] = 1;
    for(int j=0; j<i; j++)
      if(arr[i]>arr[j])
        dp[i] = max(dp[i],dp[j]+1);
    ans = max(ans,dp[i]);
  }

  cout << ans;
}