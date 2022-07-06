#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

int n,b,p,q,r;
vector<piii> v;

bool cmp(piii a, piii b) {
  if(a.second.first==b.second.first) {
    if(a.second.second==b.second.second) return a.first<b.first;
    return a.second.second<b.second.second;
  }
  return a.second.first<b.second.first;
}

int main() {
  FASTIO;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> b >> p >> q >> r;
    v.push_back({b,{p*q*r,p+q+r}});
  }
  sort(v.begin(),v.end(),cmp);
  for(int i=0; i<3; i++) cout << v[i].first << ' ';
}