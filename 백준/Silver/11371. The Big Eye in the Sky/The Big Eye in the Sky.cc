#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

double x,y;

int main() {
  FASTIO;
  cin >> x >> y;
  while(x||y){
    if(x==0) cout << 90 << '\n';
    else cout << round(atan(y/x)*180/3.1415) << '\n';
    cin >> x >> y;
  }
}