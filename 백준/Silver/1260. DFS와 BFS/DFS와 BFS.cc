#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int N, M, V;
vector<int> v[1010];
bool visited[1010];

void dfs(int curr) {
  cout << curr << " ";
  visited[curr] = true;
  if(!v[curr].empty())
    for(auto i : v[curr])
      if(!visited[i])
        dfs(i);
}

void bfs(int start) {
  queue<int> q;
  q.push(start);
  visited[start] = true;
  while(!q.empty()) {
    int curr = q.front();
    cout << curr << " ";
    q.pop();
    for(auto i : v[curr])
      if(!visited[i]) {
        visited[i] = true;
        q.push(i);
      }
  }
}

int main() {
  FASTIO;
  cin >> N >> M >> V;
  for(int i=0; i<M; i++) {
    int a, b; cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for(int i=1; i<=N; i++) sort(v[i].begin(), v[i].end());
  dfs(V);
  cout << '\n';
  for(int i=0; i<1010; i++) visited[i] = false;
  bfs(V);
}