#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,x,y,sz;
ll res;
vector<int> v[100005];

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> x >> y;
    v[y].push_back(x);
  }
  for(int i=1; i<=N; i++) {
    if(v[i].size()<=1) continue;
    sort(v[i].begin(),v[i].end());
  }
  for(int i=1; i<=N; i++){
    sz = v[i].size();
    if(sz<=1) continue;
    for(int j=0; j<sz; j++){
      if(j==0) res+=v[i][j+1]-v[i][j];
      else if(j==sz-1) res+=v[i][j]-v[i][j-1];
      else if(sz>2)res+=min(v[i][j]-v[i][j-1],v[i][j+1]-v[i][j]);
    }
  }
  cout << res;
}