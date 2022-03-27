#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int T;
int M, N, K;
int cabbage[55][55];
int di[] = {-1,1,0,0};
int dj[] = {0,0,1,-1};

void dfs(int i, int j) {
  cabbage[i][j] = 0;
  for(int k=0; k<4; k++) {
      int ni = i + di[k];
      int nj = j + dj[k];
      if(ni>=0 && ni<N && nj>=0 && nj<M)
          if(cabbage[ni][nj]==1) dfs(ni,nj);
  }
}

int main() {
  FASTIO;
  cin >> T;
  while(T--) {
    cin >> M >> N >> K;
    for(int i=0; i<K; i++) {
      int x, y; cin >> x >> y;
      cabbage[y][x] = 1;
    }
    int cnt = 0;
    for(int i=0; i<N; i++) {
      for(int j=0; j<M; j++) {
        if(cabbage[i][j]==1) {
          cnt++;
          dfs(i,j);
        }
      }
    }
    cout << cnt << '\n';
  }
}