#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int n;

int main() {
  FASTIO;
  cin >> n;
  if(n%8==1) cout << 1;
  else if(n%8==0 || n%8==2) cout << 2;
  else if(n%8==7 || n%8==3) cout << 3;
  else if(n%8==6 || n%8==4) cout << 4;
  else if(n%8==5) cout << 5;
}