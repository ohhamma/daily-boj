#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,cnt;

int main() {
  FASTIO;
  cin >> N;
  for(int i=1; i<=N; i++){
    if(i<100) cnt++;
    else if(i/100+i%10==2*((i/10)%10)) cnt++;
  }
  cout << cnt;
}