#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
  FASTIO;
  int T,A,B; cin>>T;
  while(T--) {
    cin>>A>>B;
    cout<<A+B<<'\n';
  }
}