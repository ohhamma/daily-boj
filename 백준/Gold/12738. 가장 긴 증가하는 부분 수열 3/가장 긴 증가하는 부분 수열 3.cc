#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define MAX 1000001

int N;
ll A[MAX];
vector<ll> v;    // v[i]: 길이가 i-1인 배열에서 가장 큰수

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin>>A[i];

  v.push_back(A[0]);
  for(int i=1; i<N; i++) {
    if(v.back()<A[i]) v.push_back(A[i]);
    else {
      auto it = lower_bound(v.begin(),v.end(),A[i]);
      *it = A[i];
    }
  }
  cout << v.size();
}

// 가장긴증가하는부분수열2(#12015)와 거의 동일한 문제