#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int score,social,sum;
int science = 100;

int main() {
  FASTIO;
  for(int i=0; i<4; i++) {
    cin >> score;
    science = min(science,score);
    sum+=score;
  }
  for(int i=0; i<2; i++) {
    cin >> score;
    social = max(social,score);
  }
  cout << sum-science+social;
}