#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

ll N,T,C,P;

int main() {
  FASTIO;
  cin >> N >> T >> C >> P;
  cout << (N-1)/T*C*P;
}