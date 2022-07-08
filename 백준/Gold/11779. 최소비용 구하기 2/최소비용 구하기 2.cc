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
#define MAX 1010

int n,m,s,e,c,tmp;
vector<pii> v[MAX];
vector<int> res;
int dist[MAX];
int route[MAX];   // 경로 넣는 배열 (자신의 부모정점)

priority_queue<pii, vector<pii>, greater<pii>> pq;

int main() {
  FASTIO;
  cin >> n >> m;
  for(int i=0; i<m; i++) {
    cin >> s >> e >> c;
    v[s].push_back({e,c});
  }
  cin >> s >> e;

  for(int i=1; i<=n; i++) dist[i]=INF;
  dist[s] = 0;    // 시작점
  pq.push({0,s});

  while(!pq.empty()) {
    int curr = pq.top().second;
    int currd = pq.top().first;
    pq.pop();

    if(currd > dist[curr]) continue;  // TLE 해결 (가지치기)

    for(auto i:v[curr]) {
      int next = i.first;
      int nextd = i.second;

      if(dist[next]>currd+nextd) {
        dist[next] = currd+nextd;
        route[next] = curr;   // next로 최소비용으로 도달하려면 curr에서 가야함
        pq.push({dist[next],next});
      }
    }
  }
  cout << dist[e] << '\n';
  tmp = e;
  while(tmp) {
    res.push_back(tmp);
    tmp = route[tmp];
  }
  cout << res.size() << '\n';
  for(int i=res.size()-1; i>=0; i--) cout << res[i] << ' ';
}

// 다익스트라
// 방문하는 도시 체크해주기