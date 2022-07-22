#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,fin;
int S[11],B[11];
ll Smul,Bsum,res;

void sol(int idx, int lv){
  if(lv==fin){
    res = min(res,abs(Smul-Bsum));
    return;
  }
  for(int i=idx; i<N; i++){
    Smul*=S[i];
    Bsum+=B[i];
    sol(i+1,lv+1);
    Smul/=S[i];
    Bsum-=B[i];
  }
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin >> S[i] >> B[i];
  res = 1000000000;
  for(int i=1; i<=N; i++){
    fin = i;
    Smul = 1;
    Bsum = 0;
    sol(0,0);
  }
  cout << res;
}