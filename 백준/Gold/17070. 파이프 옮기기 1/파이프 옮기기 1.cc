#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N;
int arr[17][17];
int dp[17][17][3];  // 마지막 인덱스: 0-가로, 1-세로, 2-대각선

int main() {
  FASTIO;
  cin >> N;
  for(int i=1; i<=N; i++)
    for(int j=1; j<=N; j++) cin >> arr[i][j];

  dp[1][2][0] = 1;
  for(int i=1; i<=N; i++)
    for(int j=1; j<=N; j++) {
      if(arr[i][j]==1||(dp[i][j][0]+dp[i][j][1]+dp[i][j][2]==0)) continue;
      
      if(j+1<=N&&arr[i][j+1]==0)
        dp[i][j+1][0] = dp[i][j][0]+dp[i][j][2];
      if(i+1<=N&&arr[i+1][j]==0)
        dp[i+1][j][1] = dp[i][j][1]+dp[i][j][2];
      if(i+1<=N&&j+1<=N&&arr[i][j+1]==0&&arr[i+1][j]==0&&arr[i+1][j+1]==0)
        dp[i+1][j+1][2] = dp[i][j][0]+dp[i][j][1]+dp[i][j][2];
    }
  cout << dp[N][N][0]+dp[N][N][1]+dp[N][N][2];
}