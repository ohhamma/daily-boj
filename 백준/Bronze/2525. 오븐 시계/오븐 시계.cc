#include <iostream>
#include <string>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
  FASTIO;
  int A,B,C; cin >> A >> B >> C;
  A += (B+C)/60;
  B = (B+C)%60;
  cout << A%24 << ' ' << B;
}