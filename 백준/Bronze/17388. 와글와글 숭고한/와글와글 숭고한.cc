#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int S,K,H;

int main() {
  FASTIO;
  cin >> S >> K >> H;
  if(S+K+H>=100) cout << "OK";
  else {
    if(min(S,min(K,H))==S) cout << "Soongsil";
    else if(min(S,min(K,H))==K) cout << "Korea";
    else cout << "Hanyang";
  }
}