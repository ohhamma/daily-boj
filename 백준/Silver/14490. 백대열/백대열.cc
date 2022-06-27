#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int n,m,d;
string s;
bool flag;

int gcd(int a, int b) {
  if(a%b==0) return b;
  return gcd(b,a%b);
}

int main() {
  FASTIO;
  cin >> s;
  for(int i=0; i<s.length(); i++) {
    if(s[i]==':') {
      n = stoi(s.substr(0,i));
      m = stoi(s.substr(i+1,s.length()));
      break;
    }
  }
d = gcd(n,m);
cout << n/d << ':' << m/d;
}