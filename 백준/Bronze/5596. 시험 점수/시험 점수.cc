#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int score,S,T;

int main() {
  FASTIO;
  for(int i=0; i<4; i++) {
    cin >> score;
    S += score;
  }
  for(int i=0; i<4; i++) {
    cin >> score;
    T += score;
  }
  cout << max(S,T);
}