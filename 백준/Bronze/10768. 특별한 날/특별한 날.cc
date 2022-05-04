#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int A,B;

int main() {
  FASTIO;
  cin >> A >> B;
  if(A<2) cout << "Before";
  else if (A>2) cout << "After";
  else {
    if(B<18) cout << "Before";
    else if (B>18) cout << "After";
    else cout << "Special";
  }
}