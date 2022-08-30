#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define INF 987654321

int x1,x2,x3;
int y1,y2,y3;

int main() {
  FASTIO;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x3 >> y3;
  int ccw = x1 * y2 + x2 * y3 + x3 * y1;
	ccw -= y1 * x2 + y2 * x3 + y3 * x1;
  if(ccw>0) cout << 1;
  else if(ccw==0) cout << 0;
  else cout << -1;
}
// CCW