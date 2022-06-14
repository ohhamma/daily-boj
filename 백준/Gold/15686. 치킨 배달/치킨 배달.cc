#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define INF 987654321

int N,M,tmp,res,ans;
int arr[51][51];
bool selected[15];
vector<pii> C;    // chicken
vector<pii> H;   // house
vector<pii> v;

void chicken() {
  res = 0;
  for(auto house:H) {
    int x = house.first;
    int y = house.second;
    tmp = INF;
    for(int i=0; i<v.size(); i++) {
      int xx = v[i].first;
      int yy = v[i].second;
      tmp = min(tmp,abs(x-xx)+abs(y-yy));
      }
    res += tmp;
  }
  ans = min(ans,res);
}

void sol(int cnt, int idx) {
  if(cnt==M) {
    chicken();
    return;
  }
  for(int i=idx; i<C.size(); i++) {
    if(selected[i]) continue;
    selected[i] = true;
    v.push_back(C[i]);
    sol(cnt+1,i);
    selected[i] = false;
    v.pop_back();
  }
}

int main() {
  FASTIO;
  cin >> N >> M;
  for(int i=0; i<N; i++)
    for(int j=0; j<N; j++) {
      cin >> arr[i][j];
      if(arr[i][j]==2) C.push_back({i,j});
      else if(arr[i][j]==1) H.push_back({i,j});
    }

  ans = INF;
  sol(0,0);
  cout << ans;
}