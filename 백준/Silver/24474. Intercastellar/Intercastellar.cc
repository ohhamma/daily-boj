#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

ll N,Q,X,tmp,cnt;
ll arr[200001];
vector<ll> num;
vector<ll> sum;

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) {
    cin >> arr[i];
    tmp = arr[i];
    cnt = 1;
    while(tmp%2==0) {
      tmp = tmp>>1;
      cnt = cnt<<1;
    }
    num.push_back(tmp);
    sum.push_back(cnt);
  }
  for(int i=0; i<N-1; i++)
    sum[i+1]+=sum[i];     // 누적합

  cin >> Q;
  while(Q--) {
    cin >> X;
    auto it = lower_bound(sum.begin(),sum.end(),X)-sum.begin();
    cout << num[it] << '\n';
  }
}