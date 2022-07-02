#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int A,B,G,Acnt,Bcnt;
string s;
set<string> s1;
set<string> s2;

int main() {
  FASTIO;
  cin >> A >> B >> G;
  for(int i=0; i<A; i++) {
    cin >> s;
    s1.insert(s);
  }
  for(int i=0; i<B; i++) {
    cin >> s;
    s2.insert(s);
  }
  for(int i=0; i<G; i++) {
    cin >> s;
    if(s1.find(s)!=s1.end()) Acnt++;
    else if(s2.find(s)!=s2.end()) Bcnt++;
  }
  if(Acnt>Bcnt) cout << "A";
  else if(Acnt<Bcnt) cout << "B";
  else cout << "TIE";
}