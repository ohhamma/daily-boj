#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int n;
ll arr[100];

ll sol(int n) {
  if(n==0||n==1) return arr[n]=n;
  if(!arr[n]) arr[n] = sol(n-1)+sol(n-2);
  return arr[n];
}

int main() {
  FASTIO;
  cin >> n;
  cout << sol(n);
}