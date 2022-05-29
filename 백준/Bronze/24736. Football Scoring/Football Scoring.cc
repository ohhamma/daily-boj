#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int T,F,S,P,C;

int main() {
  FASTIO;
  for(int i=0; i<2; i++) {
    cin >> T >> F >> S >> P >> C;
    cout << 6*T+3*F+2*S+P+2*C << ' ';
  }
}