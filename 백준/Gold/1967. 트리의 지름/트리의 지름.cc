#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int n,a,b,c;
int dest;
vector<pii> v[10001];
bool visited[10001];
ll ans;

void sol(int curr, ll len) {
  visited[curr]=true;

  if(ans<len) {
    ans = len;
    dest = curr;
  }

  for(auto i:v[curr]) {
    int nxt = i.first;
    int cst = i.second;
    if(!visited[nxt])
      sol(nxt,len+cst);
  }
  visited[curr]=false;
}

int main() {
  FASTIO;
  cin >> n;
  for(int i=0; i<n-1; i++) {
    cin >> a >> b >> c;
    v[a].push_back({b,c});
    v[b].push_back({a,c});
  }

  sol(1,0);     // first dfs

  ans = 0;
  memset(visited,0,sizeof(visited));
  sol(dest,0);  // second dfs

  cout << ans;
}

// dfs 1번 돌림: 가장 멀리 있는 지점 탐색
// dfs 2번 돌림: 그 지점에서 가장 멀리 있는 지점과의 거리 구하기

// point) 임의의 정점에서 가장 멀리 있는 정점은
//        원의 지름 부분에 해당되는 두 정점 중 하나이다