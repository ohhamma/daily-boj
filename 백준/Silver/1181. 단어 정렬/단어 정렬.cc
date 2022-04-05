#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N;
string tmp;
set<string> s;
vector<string> v;

bool cmp(string a, string b) {
  if(a.length()==b.length()) return a<b;
  else return a.length()<b.length();
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) {
    cin >> tmp;
    s.insert(tmp);
  }
  for(auto i:s) v.push_back(i);
  sort(v.begin(),v.end(),cmp);
  for(auto i:v) cout << i << '\n';
}