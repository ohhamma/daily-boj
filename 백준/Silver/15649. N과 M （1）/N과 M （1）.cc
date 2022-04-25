#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N,M;
int arr[10];
bool isused[10];

void sol(int lv) {
  if(lv == M) {
    for(int i=0; i<M; i++)
      cout << arr[i] << ' ';
    cout << '\n';
    return;
  }
  for(int i=1; i<=N; i++) {
    if(!isused[i]) {
      arr[lv] = i;
      isused[i] = true;
      sol(lv+1);
      arr[lv] = 0;
      isused[i] = false;
    }
  }
}

int main() {
  FASTIO;
  cin >> N >> M;
  sol(0);
}