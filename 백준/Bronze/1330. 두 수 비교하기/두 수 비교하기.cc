#include <iostream>
#include <string>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
  FASTIO;
  int A,B; cin >> A >> B;
  if(A>B) cout << '>';
  else if(A<B) cout << '<';
  else cout << "==";
}