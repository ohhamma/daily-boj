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
  for(int i=1; i<=9; i++)
    cout << N << " * " << i << " = " << N*i << '\n';
}