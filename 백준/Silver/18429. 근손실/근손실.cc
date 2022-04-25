#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N,K,cnt;
int arr[10];
bool isused[10];

void sol(int lv, int curr) {
  if(lv==N) {
    cnt++;
    return;
  }
  for(int i=1; i<=N; i++) {
    if(!isused[i] && curr-K+arr[i]>=500) {
      isused[i] = true;
      sol(lv+1,curr-K+arr[i]);
      isused[i] = false;
    }
  }
}

int main() {
  FASTIO;
  cin >> N >> K;
  for(int i=1; i<=N; i++) cin >> arr[i];
  sol(0,500);
  cout << cnt;
}