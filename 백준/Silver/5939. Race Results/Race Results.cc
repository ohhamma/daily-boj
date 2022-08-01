#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef tuple<int,int,int> tii;

int N;
vector<tii> v;

//bool cmp(tii a, tii b){
//  if(get<0>(a)==get<0>(b)){
//    if(get<1>(a)==get<1>(b)) return get<2>(a)<get<2>(b);
//    else return get<1>(a)<get<1>(b);
//  }
//  return get<0>(a)<get<0>(b);
//}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++){
    int h,m,s; cin >> h >> m >> s;
    v.push_back({h,m,s});
  }
  sort(v.begin(),v.end());
  for(int i=0; i<N; i++)
    cout << get<0>(v[i]) << ' ' << get<1>(v[i]) << ' ' << get<2>(v[i]) << '\n';
}