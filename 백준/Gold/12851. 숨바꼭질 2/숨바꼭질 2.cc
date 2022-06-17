#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,K,minTime,ans;
bool visited[100005];
queue<pii> q;

void sol() {
  q.push({N,0});
  visited[N] = true;

  while(!q.empty()){
    int curr = q.front().first;
    int time = q.front().second;
    q.pop();
    visited[curr] = true;
    
    if(curr==K) {
      if(minTime==0) minTime = time;
      if(minTime==time) ans++;
    }
    
    if(curr-1>=0 && !visited[curr-1]) q.push({curr-1,time+1});
    if(curr+1<=100000 && !visited[curr+1]) q.push({curr+1,time+1});
    if(curr*2<=100000 && !visited[curr*2]) q.push({curr*2,time+1});
  }
}

int main() {
  FASTIO;
  cin >> N >> K;
  sol();
  cout << minTime << '\n' << ans;
}