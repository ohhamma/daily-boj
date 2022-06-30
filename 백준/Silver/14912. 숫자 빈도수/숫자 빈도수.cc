#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int n,d,cnt;
char c;
string s;

int main() {
  FASTIO;
  cin >> n >> d;
  c = d + '0';
  for(int i=1; i<=n; i++) {
    s = to_string(i);
    for(char j:s)
      if(j==c) cnt++;
  }
  cout << cnt;
}