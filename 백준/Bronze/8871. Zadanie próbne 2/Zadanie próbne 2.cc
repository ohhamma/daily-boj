#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int n;

int main() {
  FASTIO;
  cin >> n;
  cout << (n+1)*2 << ' ' << (n+1)*3;
}