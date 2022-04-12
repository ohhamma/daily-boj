#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
  FASTIO;
  int n1,n2,n12; cin >> n1 >> n2 >> n12;
  int res = floor((n1+1)*(n2+1)/(n12+1)-1);
  cout << res;
}