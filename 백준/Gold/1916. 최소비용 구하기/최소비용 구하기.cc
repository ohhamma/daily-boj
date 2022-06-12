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

#define INF 987654321

ll N,M;
ll s,e,c;
ll dist[1005];
vector<pll> v[1005];
bool visited[1005];
priority_queue<pll,vector<pll>,greater<pll>> pq;

int main() {
  FASTIO;
  cin >> N >> M;
  for(int i=0; i<M; i++) {
    cin >> s >> e >> c;
    v[s].push_back({e,c});
  }
  cin >> s >> e;

  for(int i=1; i<=N; i++) dist[i] = INF;
  dist[s] = 0;
  pq.push({0,s});
  while(!pq.empty()) {
    ll curr = pq.top().second;
    ll currd = pq.top().first;
    visited[curr] = true;
    pq.pop();
    if(currd>dist[curr]) continue;   // 이미 갱신되어있으면 스킵
    
    for(auto i:v[curr]) {
      ll next = i.first;
      ll nextd = i.second;
      if(dist[next]>currd+nextd && !visited[next]) {  // 최소거리 갱신
        dist[next] = currd+nextd;
        pq.push({dist[next],next});
      }
    }
  }
  cout << dist[e];
}

// 다익스트라