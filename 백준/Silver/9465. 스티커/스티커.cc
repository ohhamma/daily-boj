#include <iostream>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define MAX 100001

int T,n;
int arr[2][MAX];
int dp[2][MAX];   // 해당 칸까지 뗄수있는 스터커 점수 최댓값

int main() {
  FASTIO;
  cin >> T;
  while(T--) {
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[0][i];
    for(int i=0; i<n; i++) cin >> arr[1][i];

    dp[0][0] = arr[0][0];
    dp[1][0] = arr[1][0];
    dp[0][1] = dp[1][0]+arr[0][1];
    dp[1][1] = dp[0][0]+arr[1][1];

    for(int i=2; i<n; i++) {
      dp[0][i] = max(dp[1][i-1],dp[1][i-2]) + arr[0][i];
      dp[1][i] = max(dp[0][i-1],dp[0][i-2]) + arr[1][i];
    }
    cout << max(dp[0][n-1],dp[1][n-1]) << '\n';
  }
}