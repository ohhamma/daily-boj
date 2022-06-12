#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

string s;
double ans;

int main() {
  FASTIO;
  cin >> s;
  if(s[0]=='A') ans = 4.0;
  else if(s[0]=='B') ans = 3.0;
  else if(s[0]=='C') ans = 2.0;
  else if(s[0]=='D') ans = 1.0;
  else {
    cout << fixed;
    cout.precision(1);
    cout << ans;
    return 0;
  }
  if(s[1]=='+') ans += 0.3;
  else if(s[1]=='-') ans -= 0.3;
  cout << fixed;
  cout.precision(1);
  cout << ans;
}