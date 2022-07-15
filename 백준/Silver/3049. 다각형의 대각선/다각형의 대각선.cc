#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N;

int main() {
  FASTIO;
  cin >> N;
  cout << N*(N-1)*(N-2)*(N-3)/24;
}