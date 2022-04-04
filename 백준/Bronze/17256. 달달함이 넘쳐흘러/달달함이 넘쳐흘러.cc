#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int ax,ay,az;
int cx,cy,cz;

int main() {
  FASTIO;
  cin >> ax >> ay >> az;
  cin >> cx >> cy >> cz;
  cout << cx-az << ' ' << cy/ay << ' ' << cz-ax;
}