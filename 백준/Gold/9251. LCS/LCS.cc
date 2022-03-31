#include <iostream>
#include <string>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define MAX 1005

string s1,s2;
int dp[MAX][MAX];    // dp[i][j]: i,j 인덱스 이전까지의 LCS

int main() {
  FASTIO;
  cin >> s1 >> s2;
  for(int i=1; i<=s1.length(); i++)
    for(int j=1; j<=s2.length(); j++) {
      if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1]+1;
      else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    }
  cout << dp[s1.length()][s2.length()];
}

// 수열이므로 순서 o, but 연속하지 않아도됨
// dp를 어떻게 사용하지 - 점화식 생각해보기
// a[i-1]==b[j-1]일때 dp[i][j] = dp[좌대각]+1
// 다르면 dp[i][j] = max(위쪽,왼쪽)

/*
LCS
1)최대공통부분문자열(substring) - 연속해야함
2)최대공통부분수열(subsequence) - 연속하지x
*/