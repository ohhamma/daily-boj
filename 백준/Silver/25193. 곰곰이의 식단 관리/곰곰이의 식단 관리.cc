#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,cnt;
string s;

int main() {
  FASTIO;
  cin >> N >> s;
  for(char c:s)
    if(c=='C') cnt++;
  if(N==cnt) cout << cnt;
  else cout << ceil((double)cnt/(N-cnt+1));
}