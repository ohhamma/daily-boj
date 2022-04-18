#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int date,car,cnt;

int main() {
  FASTIO;
  cin >> date;
  for(int i=0; i<5; i++) {
    cin >> car;
    if(car==date) cnt++;
  }
  cout << cnt;
}