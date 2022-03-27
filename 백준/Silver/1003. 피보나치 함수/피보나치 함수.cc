#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int T;
int N;
int one[41];

int main() {
  FASTIO;
  one[1] = 1;
  for(int i=2; i<=40; i++)
    one[i] = one[i-1]+one[i-2];
  cin >> T;
  while(T--) {
    cin >> N;
    if(N==0) cout << 1 << " " << one[N] << '\n';
    else cout << one[N-1] << " " << one[N] << '\n';
  }
}