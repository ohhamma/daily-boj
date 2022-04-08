#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
  FASTIO;
  int N; cin >> N;
  cout << (int)(N*0.78) << ' ' << (int)(N*0.8+N*0.2*0.78);
}