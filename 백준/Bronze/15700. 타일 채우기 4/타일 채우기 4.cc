#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

ll N,M;

int main() {
  FASTIO;
  cin >> N >> M;
  cout << N*M/2;
}