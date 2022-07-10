#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define INF 987654321

int n,m,r,t;
int a,b,l,res,ans;
int item[105];
int dist[105];
vector<pii> v[105];

priority_queue<pii,vector<pii>,greater<pii>> pq;

void sol(int start){
  for(int i=1; i<=n; i++) dist[i]=INF;

  pq.push({0,start});
  dist[start] = 0;

  while(!pq.empty()){
    int curr = pq.top().second;
    int currd = pq.top().first;
    pq.pop();

    for(auto i:v[curr]){
      int next = i.first;
      int nextd = i.second;

      if(dist[next]>currd+nextd){
        dist[next]=currd+nextd;
        pq.push({dist[next],next});
      }
    }
  }
}

int main() {
  FASTIO;
  cin >> n >> m >> r;
  for(int i=1; i<=n; i++) cin >> item[i];
  for(int i=0; i<r; i++) {
    cin >> a >> b >> l;
    v[a].push_back({b,l});
    v[b].push_back({a,l});
  }
  for(int i=1; i<=n; i++) {
    res = 0;
    sol(i);
    for(int j=1; j<=n; j++) 
      if(dist[j]<=m) res+=item[j];
    ans=max(ans,res);
  }
  cout << ans;
}