#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int T;
string s;

int main() {
  FASTIO;
  cin >> T;
  while(T--) {
    cin >> s;
    cout << s[0] << s[s.length()-1] << '\n';
  }
}