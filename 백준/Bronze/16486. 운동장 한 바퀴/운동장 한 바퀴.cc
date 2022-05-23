#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define PI 3.141592

double d1,d2;

int main() {
  FASTIO;
  cin >> d1 >> d2;
  cout << fixed;
  cout.precision(6);
  cout << 2*d1+2*d2*PI;
}