#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,res;
int arr[1010];
pii dp[1010];

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin >> arr[i];

  for(int i=0; i<N; i++)
    for(int j=0; j<i; j++)
      if(arr[i]>arr[j]) dp[i].first=max(dp[i].first,dp[j].first+1);

  for(int i=N-1; i>=0; i--)
    for(int j=N-1; j>i; j--)
      if(arr[i]>arr[j]) dp[i].second=max(dp[i].second,dp[j].second+1);
  
  for(int i=0; i<N; i++)
    res = max(res,dp[i].first+dp[i].second+1);
  cout << res;
}