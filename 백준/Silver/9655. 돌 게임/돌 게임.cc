#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N;

int main() {
  FASTIO;
  cin >> N;
  if(N%2==1) cout << "SK";
  else cout << "CY";
}