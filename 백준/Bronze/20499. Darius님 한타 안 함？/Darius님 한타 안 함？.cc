#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int K,D,A;
char c;

int main() {
  FASTIO;
  cin >> K >> c >> D >> c >> A;
  if(K+A<D||D==0) cout << "hasu";
  else cout << "gosu";
}