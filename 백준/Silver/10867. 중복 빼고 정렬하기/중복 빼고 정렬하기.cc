#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,x;
vector<int> v;

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) {
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  v.erase(unique(v.begin(),v.end()),v.end());
  for(auto i:v) cout << i << ' ';
}