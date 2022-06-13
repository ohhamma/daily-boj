#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

double a,b;

int main() {
  FASTIO;
  cin >> a >> b;
  if(a*(100-b)/100>=100) cout << 0;
  else cout << 1;
}