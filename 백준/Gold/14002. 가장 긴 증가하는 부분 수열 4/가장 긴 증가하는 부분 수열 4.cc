#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define MAX 1001

int N;
int arr[MAX];
int dp[MAX];
vector<int> LIS[MAX];
vector<int> ans;

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++)
    cin >> arr[i];
  
  for(int i=0; i<N; i++) {
    dp[i] = 1;
    LIS[i].push_back(arr[i]);
    for(int j=0; j<i; j++)
      if(arr[i]>arr[j])
        if(dp[i]<dp[j]+1) {
          LIS[i].clear();
          LIS[i] = LIS[j];
          LIS[i].push_back(arr[i]);
          dp[i] = dp[j]+1;
        }
    if(ans.size()<LIS[i].size())
      ans = LIS[i];
  }
  cout << ans.size() << '\n';
  for(auto i:ans) cout << i << ' ';
}