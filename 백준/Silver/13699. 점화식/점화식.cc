#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int n;
ll arr[40];

ll sol(int n) {
  if(n==0) return arr[n];
  if(!arr[n])
    for(int i=0; i<n; i++)
      arr[n] += sol(i)*sol(n-1-i);
  return arr[n];
}

int main() {
  FASTIO;
  cin >> n;
  arr[0] = 1;
  cout << sol(n);
}