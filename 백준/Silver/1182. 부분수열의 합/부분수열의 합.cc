#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N,S,cnt;
int arr[21];

void sol(ll s, int lv) {
  if(lv==N) return;
  if(s+arr[lv]==S) cnt++;

  sol(s, lv+1);           // 내비두거나
  sol(s+arr[lv], lv+1);   // 더하거나
}

int main() {
  FASTIO;
  cin >> N >> S;
  for(int i=0; i<N; i++) cin >> arr[i];
  sol(0,0);
  cout << cnt;
}
// 중복 주의