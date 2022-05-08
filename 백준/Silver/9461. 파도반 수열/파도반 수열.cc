#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int T,N;
ll arr[105];

ll sol(int n) {
  if (n<5) return arr[n];
  if(!arr[n]) arr[n] = sol(n-1)+sol(n-5);
  return arr[n];
}

int main() {
  FASTIO;
  cin >> T;
  arr[1] = 1;
  arr[2] = 1;
  arr[3] = 1;
  arr[4] = 2;
  arr[5] = 2;
  while(T--) {
    cin >> N;
    cout << sol(N) << '\n';
  }
}