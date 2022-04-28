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
  cout << max(A,B)-min(A,B);
}