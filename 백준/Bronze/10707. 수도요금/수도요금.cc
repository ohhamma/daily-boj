#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int A,B,C,D,P,res;

int main() {
  FASTIO;
  cin >> A >> B >> C >> D >> P;
  res = B;
  if(P>C) res+=(P-C)*D;
  cout << min(A*P,res);
}