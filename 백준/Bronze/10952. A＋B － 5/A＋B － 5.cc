#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
  FASTIO;
  int A,B;
  while(cin>>A>>B) {
    if(A==0&&B==0) break;
    cout<<A+B<<'\n';
  }
}