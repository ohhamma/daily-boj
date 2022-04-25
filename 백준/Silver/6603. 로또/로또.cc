#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int k;
int arr[15];
int res[7];

void sol(int start, int lv) {
  if(lv==6) {
    for(int i=0; i<6; i++) cout << res[i] << ' ';
    cout << '\n';
    return;
  }
  for(int i=start; i<k; i++) {
    res[lv] = arr[i];
    sol(i+1,lv+1);
  }
}

int main() {
  FASTIO;
  cin >> k;
  while(k!=0) {
    for(int i=0; i<k; i++) cin >> arr[i];
    sol(0,0);
    cout << '\n';
    cin >> k;
  }
}