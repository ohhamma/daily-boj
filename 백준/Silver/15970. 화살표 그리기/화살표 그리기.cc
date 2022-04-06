#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,x,y;
vector<int> v[5001];
ll res;


int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) {
    cin >> x >> y;
    v[y].push_back(x);
  }
  for(int i=1; i<=N; i++) {
    if(v[i].empty()) continue;

    sort(v[i].begin(),v[i].end());

    res+=v[i][1]-v[i][0];   // 같은 색깔을 가진 점은 2개 이상
    for(int j=1; j<v[i].size()-1; j++)
      res+=min(v[i][j]-v[i][j-1],v[i][j+1]-v[i][j]);
    res+=v[i][v[i].size()-1]-v[i][v[i].size()-2];
  }

  cout << res;
}