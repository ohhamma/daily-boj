#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int W[11];
int K[11];

bool cmp(int a, int b) {
  return a>b;
}

int main() {
  FASTIO;
  for(int i=0; i<10; i++) cin >> W[i];
  for(int i=0; i<10; i++) cin >> K[i];
  sort(W,W+10,cmp);
  sort(K,K+10,cmp);
  cout << W[0]+W[1]+W[2] << ' ' << K[0]+K[1]+K[2];
}