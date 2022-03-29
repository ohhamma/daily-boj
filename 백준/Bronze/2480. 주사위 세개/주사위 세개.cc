#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;



int main() {
  FASTIO;
  int A,B,C; cin >> A >> B >> C;
  if(A==B) {
    if(B==C) cout << 10000+A*1000;
    else cout << 1000+A*100;
  }
  else if(B==C) {
    if(C==A) cout << 10000+A*1000;
    else cout << 1000+B*100;
  }
  else if(C==A) {
    if(A==B) cout << 10000+A*1000;
    else cout << 1000+C*100;
  }
  else cout << max(A,max(B,C))*100;
}