#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

ll A,B,C;

ll pow(int A, int B) {
  if(B==1) return A;
  ll half = pow(A,B/2);
  if(B%2==0) return half*half%C;
  else return (half*half%C)*A%C;
}

int main() {
  FASTIO;
  cin >> A >> B >> C;
  cout << pow(A%C,B)%C;
}