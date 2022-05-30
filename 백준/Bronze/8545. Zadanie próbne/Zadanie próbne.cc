#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

string s;

int main() {
  FASTIO;
  cin >> s;
  for(int i=s.length()-1; i>=0; i--) cout << s[i];
}