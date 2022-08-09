#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define MOD 1000000007

ll N,res;

int main() {
  FASTIO;
  cin >> N;
  res = 1;
  while(N){
    res*=(N-1);
    res%=MOD;
    N-=2;
  }
  cout << res;
}