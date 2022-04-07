#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 1000000001

int N,L,x,y;
ll cnt;
vector<pii> v;

int main() {
  FASTIO;
  cin >> N >> L;
  for(int i=0; i<N; i++) {
    cin >> x >> y;
    v.push_back({x,y});
  }
  sort(v.begin(),v.end());

  for(int i=0; i<v.size()-1; i++) {
    int start = v[i].first;
    int fin = v[i].second;

    cnt+=ceil(double(fin-start)/L);
    int next = start+ceil(double(fin-start)/L)*L;
    if(next<=v[i+1].first) continue;
    v[i+1].first = next;
  }
  cnt+=ceil(double(v[v.size()-1].second-v[v.size()-1].first)/L);
  cout << cnt;
}

// 웅덩이가 시작하는 곳부터 널빤지를 놓는다
// 나누기 ?