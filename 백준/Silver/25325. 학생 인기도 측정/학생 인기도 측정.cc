#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<string,int> psi;

int n;
map<string,int> m;

bool cmp(const psi& a, const psi& b){
  if(a.second==b.second) return a.first<b.first;
  else return a.second>b.second;
}

int main() {
  FASTIO;
  cin >> n;
  for(int i=0; i<n; i++){
    string s; cin >> s;
    m.insert({s,0});
  }
  for(int i=0; i<=n; i++){
    string s; getline(cin,s);
    string strBuf = "";
    istringstream ss(s);
    while(getline(ss,strBuf,' '))
      m[strBuf]++;
  }
  vector<psi> v(m.begin(),m.end());
  sort(v.begin(),v.end(),cmp);
  for(int i=0; i<n; i++)
    cout << v[i].first << ' ' << v[i].second << '\n';
}