#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

ll n,m,day,x,y;
ll arr[100001];
ll res;

bool cmp(ll a, ll b) {
  return a>b;
}

int main() {
  FASTIO;
  cin >> n >> m;
  for(ll i=0; i<n; i++) cin >> arr[i];
  // for(int i=0; i<m; i++) cin >> x >> y;
  sort(arr,arr+n,cmp);
  for(ll i=0; i<n; i++) {
    if(arr[i]<=day) continue;
    res+=arr[i]-day;
    day++;
  }
  cout << res;
}

// 내림차순으로 정렬해서 양을 먹어도
// 원래 순서대로 양을 먹는 최대값과 동일함

// 16238(독수리)와 동일한 문제