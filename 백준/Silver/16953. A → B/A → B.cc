#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

ll A,B,res;
queue<pll> q;

void sol() {
  q.push({A,0});
  while(!q.empty()) {
    ll curr = q.front().first;
    ll cnt = q.front().second;
    q.pop();
    if(curr==B) {
      res = cnt+1;
      return;
    }
    if(curr*2<=B) q.push({curr*2,cnt+1});
    if(10*curr+1<=B) q.push({10*curr+1,cnt+1});
  }
  res = -1;
}

int main() {
  FASTIO;
  cin >> A >> B;
  sol();
  cout << res;
}