#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int L,A,B,C,D;

int main() {
  FASTIO;
  cin >> L >> A >> B >> C >> D;
  cout << L - max(ceil((double)A/C), ceil((double)B/D));
}