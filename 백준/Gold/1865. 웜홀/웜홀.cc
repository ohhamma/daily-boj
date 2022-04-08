#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;

#define INF 987654321

int TC,N,M,W;
int S,E,T;
string ans;
vector<piii> v;
ll dist[501];

void sol() {    // 벨만포드
  dist[1] = 0;
  for(int i=1; i<N; i++) {
    for(auto j:v) {
      int from = j.first.first;
      int dest = j.first.second;
      int cost = j.second;

      if(dist[from]==INF) continue;

      dist[dest]=min(dist[dest],dist[from]+cost);
    }
  }
  
  for(auto i:v) {   // 음의사이클 존재 여부 파악
    int from = i.first.first;
    int dest = i.first.second;
    int cost = i.second;

    if(dist[from]==INF) continue;

    if(dist[dest]>dist[from]+cost) {
      ans = "YES";
      return;
    }
  }
  ans = "NO";
}

int main() {
  FASTIO;
  cin >> TC;
  while(TC--) {
    // 초기화
    for(int i=1; i<=N; i++) dist[i] = INF;
    memset(dist,-1,sizeof(dist));
    v.clear();

    cin >> N >> M >> W;
    for(int i=0; i<M; i++) {
      cin >> S >> E >> T;
      v.push_back({{S,E},T});
      v.push_back({{E,S},T});
    }
    for(int i=0; i<W; i++) {
      cin >> S >> E >> T;
      v.push_back({{S,E},-T});
    }

    sol();

    cout << ans << '\n';
  }
}

// 음의사이클이 존재하는지를 구하는 문제 -> 벨만포드