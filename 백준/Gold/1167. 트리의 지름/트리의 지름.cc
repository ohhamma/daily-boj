#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 100001

int V,n,a,b;
int dest,ans;
vector<pii> v[MAX];
bool visited[MAX];

void sol(int curr, int len) {
  if(visited[curr]) return;

  if(ans<len) {
    ans = len;
    dest = curr;
  }
  visited[curr]=true;
  for(auto i:v[curr]) {
    int next = i.first;
    int cost = i.second;
    sol(next,len+cost);
  }
}

int main() {
  FASTIO;
  cin >> V;
  for(int i=0; i<V; i++) {
    cin >> n >> a;
    while(a!=-1) {
      cin >> b;
      v[n].push_back({a,b});
      v[a].push_back({n,b});
      cin >> a;
    }
  }
  sol(1,0);

  ans=0;
  memset(visited,0,sizeof(visited));
  sol(dest,0);

  cout << ans;
}