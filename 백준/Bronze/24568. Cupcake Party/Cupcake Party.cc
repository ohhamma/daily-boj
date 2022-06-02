#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int R,S;

int main() {
  FASTIO;
  cin >> R >> S;
  cout << max(0,R*8+S*3-28);
}