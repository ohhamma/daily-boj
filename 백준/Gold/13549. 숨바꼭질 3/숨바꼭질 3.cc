#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 100001

int N,K;
bool visited[MAX];
priority_queue<pii,vector<pii>,greater<pii>> pq;
int res = MAX;

int main() {
  FASTIO;
  cin >> N >> K;
  visited[N] = true;
  pq.push({0,N});
  while(!pq.empty()) {
    int time = pq.top().first;
    int curr = pq.top().second;
    pq.pop();
    if(curr==K) {
      cout << time;
      break;
    }
    if(curr<<1<MAX && !visited[curr<<1]) {
      visited[curr<<1] = true;
      pq.push({time,curr<<1});
    }
    if(curr+1<MAX && !visited[curr+1]) {
      visited[curr+1] = true;
      pq.push({time+1,curr+1});
    }
    if(curr-1>=0 && !visited[curr-1]) {
      visited[curr-1] = true;
      pq.push({time+1,curr-1});
    }
  }
}

// BFS - 모든 간선의 가중치가 동일해야한다는 전제조건
// but 순간이동(0초)가 이동(1초)보다 우선순위 높음
// ㄴ priority_queue를 사용하여 우선순위 지정
// ㄴ deque을 사용하여 순간이동은 push_front, 이동은 push_back