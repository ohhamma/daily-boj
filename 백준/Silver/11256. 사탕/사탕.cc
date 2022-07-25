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

int T,J,N,R,C,cnt,res;
int arr[1001];

bool cmp(int a, int b){
  return a>b;
}

int main() {
  FASTIO;
  cin >> T;
  while(T--){
    cin >> J >> N;
    for(int i=0; i<N; i++){
      cin >> R >> C;
      arr[i] = R*C;
    }
    sort(arr,arr+N,cmp);
    cnt = 0;
    for(int i=0; i<N; i++){
      J -= arr[i];
      cnt++;
      if(J<=0) break;
    }
    cout << cnt << '\n';
  }
}