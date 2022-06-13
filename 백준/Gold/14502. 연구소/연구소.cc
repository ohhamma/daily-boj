#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,M,res,ans;
int arr[10][10];
int tmp[10][10];
bool visited[10][10];

int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};

void sol() {      // bfs
  for(int i=0; i<N; i++)
    for(int j=0; j<M; j++)
      tmp[i][j] = arr[i][j];    // map 복사하기

  for(int i=0; i<N; i++)
    for(int j=0; j<M; j++)
      if(tmp[i][j]==2) {
        queue<pii> q;
        q.push({i,j});
        visited[i][j] = true;
        
        while(!q.empty()) {
          int x = q.front().first;
          int y = q.front().second;
          q.pop();

          for(int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if(!(nx>=0 && nx<N && ny>=0 && ny<M)) continue;
            if(!visited[nx][ny] && tmp[nx][ny]==0) {
              q.push({nx,ny});
              visited[nx][ny] = true;
              tmp[nx][ny] = 2;
            }
          }
        }
      }

  memset(visited, false, sizeof(visited));

  res = 0;
  for(int i=0; i<N; i++)
    for(int j=0; j<M; j++)
      if(tmp[i][j]==0) res++;
  ans = max(ans,res);
}

void wall(int lv) {   // dfs
  if(lv==3) {
    sol();
    return;
  }
  for(int i=0; i<N; i++)
    for(int j=0; j<M; j++) {
      if(arr[i][j]==0) {
        arr[i][j] = 1;
        wall(lv+1);
        arr[i][j] = 0;
      }
    }
}

int main() {
  FASTIO;
  cin >> N >> M;
  for(int i=0; i<N; i++)
    for(int j=0; j<M; j++)
      cin >> arr[i][j];

  wall(0);
  cout << ans;
}