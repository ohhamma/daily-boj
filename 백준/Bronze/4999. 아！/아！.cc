#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

string s1,s2;

int main() {
  FASTIO;
  cin >> s1 >> s2;
  if(s1.length()>=s2.length()) cout << "go";
  else cout << "no";
}