#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N,maxH,cnt;
int arr[100001];
int dp[100001];

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin >> arr[i];

  dp[N-1] = cnt = 1;
  maxH = arr[N-1];
  for(int i=N-2; i>=0; i--) {
    if(arr[i]>maxH) {
      dp[i]= ++cnt;
      maxH = arr[i];
    }
    else dp[i]=cnt;
  }
  cout << dp[0];
}