#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int A,B;
int a,b,c;

int main() {
  FASTIO;
  cin >> a >> b >> c;
  A = 3*a+2*b+c;
  cin >> a >> b >> c;
  B = 3*a+2*b+c;
  if(A>B) cout << 'A';
  else if(A<B) cout << 'B';
  else cout << 'T';
}