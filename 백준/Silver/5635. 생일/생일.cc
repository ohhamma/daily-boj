#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<string,int> psi;
typedef pair<psi,pii> psii;

int n,dd,mm,yyyy;
string s;
vector<psii> v;

bool cmp(psii a, psii b) {
  if(a.first.second!=b.first.second) return a.first.second<b.first.second;
  else {
    if(a.second.first!=b.second.first) return a.second.first<b.second.first;
    else return a.second.second<b.second.second;
  }
}

int main() {
  FASTIO;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> s >> dd >> mm >> yyyy;
    v.push_back({{s,yyyy},{mm,dd}});
  }
  sort(v.begin(),v.end(),cmp);
  cout << v[n-1].first.first << '\n' << v[0].first.first;
}