#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int a, b, c, d, e, f;

int main() {
  FASTIO;
  cin >> a >> b >> c >> d >> e >> f;
  cout << (a+b+c+d+e+f)*5;
}