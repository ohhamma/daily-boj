#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;

#define INF 987654321

int N,M;
int A,B,C;
vector<piii> v;
ll dist[501];

int main() {
  FASTIO;
  cin >> N >> M;
  for(int i=0; i<M; i++) {
    cin >> A >> B >> C;
    v.push_back({{A,B},C});
  }

  for(int i=1; i<=N; i++) dist[i] = INF;    // dist 초기화

  // 벨만포드
  dist[1] = 0;  // 첫번째 정점은 계산하고 시작
  for(int i=1; i<N; i++)    // N-1번 탐색
    for(auto j:v) {
      int from = j.first.first;
      int dest = j.first.second;
      int cost = j.second;

      if(dist[from]==INF) continue;  // 계산되지않음

      dist[dest]=min(dist[dest],dist[from]+cost);  // 최솟값 갱신
    }
  
  for(auto i:v) {   // 한번더 탐색 (음의사이클 존재 여부 판단)
    int from = i.first.first;
    int dest = i.first.second;
    int cost = i.second;

    if(dist[from]==INF) continue;

    if(dist[dest]>dist[from]+cost) {  // 음의사이클 발견
      cout << -1;
      return 0;
    }
  }

  for(int i=2; i<=N; i++) {
    if(dist[i]==INF) cout << -1 << '\n';
    else cout << dist[i] << '\n';
  }

}

// 간선의 가중치에 음수 존재 - 벨만포드 사용
// 음의 사이클 존재하면 -1 출력

/*
(벨만포드)
1. 모든 간선 탐색, 간선의 출발점이 '한번이라도 계산된 점'이면
   해당 간선이 잇는 점의 거리를 비교해서 업데이트한다
2. 과정 1 반복

* N-1번 모든 간선 탐색 후, 한번더 모든 간석을 탐색했을때
 -> 최소비용이 변하면 '음의 사이클'

=> 음의 가중치가 존재할때, '음의 사이클'의 존재 여부 파악
*/