#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int K,N,M;

int main() {
  FASTIO;
  cin >> K >> N >> M;
  cout << max(K*N-M,0);
}