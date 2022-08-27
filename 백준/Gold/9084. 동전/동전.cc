#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int T,N,M;
int arr[25];
int dp[10005];  // dp[i]: i원을 만들수있는 방법의수

int main() {
  FASTIO;
  cin >> T;
  while(T--) {
    cin >> N;
    for(int i=0; i<N; i++) cin >> arr[i];
    cin >> M;

    for(int i=0; i<=10000; i++) dp[i] = 0;
    
    dp[0] = 1;
    for(int i=0; i<N; i++)
      for(int j=arr[i]; j<=M; j++)
        dp[j] += dp[j-arr[i]];

    cout << dp[M] << '\n';
  }
}