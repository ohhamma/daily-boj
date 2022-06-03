#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int a,b,c;

int main() {
  FASTIO;
  cin >> a >> b >> c;
  if(a+b+c==180) {
    if(a==b||b==c||c==a) {
      if(a==60) cout << "Equilateral";
      else cout << "Isosceles";
    }
    else cout << "Scalene";
  }
  else cout << "Error";
}