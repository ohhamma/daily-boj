#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int T,n;
string city;

int main() {
  FASTIO;
  cin >> T;
  while(T--) {
    cin >> n;
    set<string> s;
    for(int i=0; i<n; i++) {
      cin >> city;
      s.insert(city);
    }
    cout << s.size() << '\n';
  }

}