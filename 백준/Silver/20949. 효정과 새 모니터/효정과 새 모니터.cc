#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<double,int> pdi;

int N;
ll W,H;
double res;
vector<pdi> v;

bool cmp(pdi a, pdi b){
  if(a.first==b.first) return a.second<b.second;
  return a.first>b.first;
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=1; i<=N; i++){
    cin >> W >> H;
    res = sqrt(W*W+H*H);
    v.push_back({res,i});
  }
  sort(v.begin(),v.end(),cmp);
  for(int i=0; i<N; i++) cout << v[i].second << '\n';
}