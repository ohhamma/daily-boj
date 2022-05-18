#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int A,B,C,D,E,res;

int main() {
  FASTIO;
  cin >> A >> B >> C >> D >> E;
  if(A<0) {
    if(B<=0) res = (B-A)*C;
    else res = -A*C+D+B*E;
  }
  else res = (B-A)*E;
  cout << res;
}