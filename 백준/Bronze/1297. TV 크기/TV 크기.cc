#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int D,H,W;
double x;

int main() {
  FASTIO;
  cin >> D >> H >> W;
  x = sqrt((double)(D*D)/(H*H+W*W));
  cout << floor(H*x) << ' ' << floor(W*x);
}