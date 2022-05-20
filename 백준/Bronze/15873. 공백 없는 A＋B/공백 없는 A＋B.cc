#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

string s;

int main() {
  FASTIO;
  cin >> s;
  if(s.length()==2) cout << (s[0]-'0')+(s[1]-'0');
  else if(s.length()==3) {
    if(s[1]=='0') cout << 10+(s[2]-'0');
    else cout << (s[0]-'0')+10;
  }
  else cout << 20;
}