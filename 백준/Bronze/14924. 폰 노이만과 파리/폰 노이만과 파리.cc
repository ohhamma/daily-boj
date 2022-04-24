#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int S,T,D;

int main() {
  FASTIO;
  cin >> S >> T >> D;
  cout << D/(S*2)*T;
}