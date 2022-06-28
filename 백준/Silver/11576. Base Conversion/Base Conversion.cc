#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int A,B,m,mul,res,idx;
int arr[30];
int ans[30];

int main() {
  FASTIO;
  cin >> A >> B >> m;
  for(int i=0; i<m; i++) cin >> arr[i];

  mul = 1;
  for(int i=m-1; i>=0; i--) {
    res += mul*arr[i];
    mul*=A;
  }
  idx = 0;
  while(res>=B) {
    ans[idx++] = res%B;
    res/=B;
  }
  ans[idx] = res;
  while(idx>=0) cout << ans[idx--] << ' ';
}