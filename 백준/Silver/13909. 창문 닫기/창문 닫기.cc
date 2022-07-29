#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,cnt;

int main() {
  FASTIO;
  cin >> N;
  for(int i=1; i*i<=N; i++) cnt++;
  cout << cnt;
}

// 열려있는 창문 - 제곱수