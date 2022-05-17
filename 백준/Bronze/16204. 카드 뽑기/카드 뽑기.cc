#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N,K,M;

int main() {
  FASTIO;
  cin >> N >> K >> M;
  cout << min(M,K)+min(N-M,N-K);
}