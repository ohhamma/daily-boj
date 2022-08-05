#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int n;
int a[1005],b[1005];

int main() {
  FASTIO;
  cin >> n;
  for(int i=0; i<n; i++) cin >> a[i] >> b[i];
  for(int i=n; i>=0; i--){
    int cnt = 0;
    for(int j=0; j<n; j++)
      if(a[j]<=i&&i<=b[j]) cnt++;
    if(cnt==i) { cout << cnt; return 0; }
  }
  cout << -1;
}