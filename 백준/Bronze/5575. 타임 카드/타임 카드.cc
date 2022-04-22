#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int h1,m1,s1;
int h2,m2,s2;
int h,m,s;

int main() {
  FASTIO;
  for(int i=0; i<3; i++) {
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    h = h2-h1;
    m = m2-m1;
    s = s2-s1;
    if(s<0) {
      s+=60;
      m--;
    }
    if(m<0) {
      m+=60;
      h--;
    }
    cout << h << ' ' << m << ' ' << s << '\n';
  }
}