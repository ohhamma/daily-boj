#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N,cnt;
int arr[16];
bool isused1[35];   // col : j
bool isused2[35];   // up-right : i + j
bool isused3[35];   // up-left : i - j + (N-1)

void sol(int level) {
  if(level==N) {
    cnt++;
    return;
  }
  for(int i=0; i<N; i++) {
    if(!isused1[i] && !isused2[level+i] && !isused3[level-i+N-1]) {
      isused1[i] = true;
      isused2[level+i] = true;
      isused3[level-i+N-1] = true;
      sol(level+1);
      isused1[i] = false;
      isused2[level+i] = false;
      isused3[level-i+N-1] = false;
    }
  }
}

int main() {
  FASTIO;
  cin >> N;
  sol(0);
  cout << cnt;
}