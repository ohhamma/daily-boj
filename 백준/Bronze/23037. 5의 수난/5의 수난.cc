#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int n,res,ans;
string s;

int main() {
  FASTIO;
  cin >> s;
  for(char c:s) {
    n = c-'0';
    res = 1;
    for(int i=0; i<5; i++) res*=n;
    ans+=res;
  }
  cout << ans;
}