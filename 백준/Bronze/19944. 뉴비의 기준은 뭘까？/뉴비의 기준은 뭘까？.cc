#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N,M;

int main() {
  FASTIO;
  cin >> N >> M;
  if(M==1||M==2) cout << "NEWBIE!";
  else if(M<=N) cout << "OLDBIE!";
  else cout << "TLE!";
}