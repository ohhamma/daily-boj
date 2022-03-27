#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef pair<int,int> pii;

int N, M;
vector<int> arr[101];
//bool visited[101];

int bfs(int start) {
  bool visited[101] = {false};
  int bacon = 0;
  queue<pii> q;
  visited[start] = true;
  q.push({0,start});
  while(!q.empty()) {
    pii curr = q.front();
    int level = curr.first;
    int person = curr.second;
    q.pop();
    for(auto i : arr[person])
      if(!visited[i]) {
        bacon += level+1;
        visited[i] = true;
        q.push({level+1,i});
      }
  }
  return bacon;
}

bool cmp (pii a, pii b) {
  if(a.first==b.first) return a.second<b.second;
  else return a.first<b.first;
}

int main() {
  FASTIO;
  cin >> N >> M;
  for(int i=0; i<M; i++) {
    int a,b; cin >> a >> b;
    arr[a].push_back(b);
    arr[b].push_back(a);
  }
  vector<pii> v;
  for(int i=1; i<=N; i++)
    v.push_back({bfs(i),i});
  sort(v.begin(),v.end(),cmp);
  
  cout << v[0].second;
}