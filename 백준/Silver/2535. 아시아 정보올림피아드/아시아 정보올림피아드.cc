#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef tuple<int,int,int> tii;

int N,a,b,c;
tii arr[101];

int check;

bool cmp(tii a, tii b) {
  return get<2>(a)>get<2>(b);
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) {
    cin >> a >> b >> c;
    arr[i] = {a,b,c};
  }
  sort(arr,arr+N,cmp);

  cout << get<0>(arr[0]) << ' ' << get<1>(arr[0]) << '\n';
  cout << get<0>(arr[1]) << ' ' << get<1>(arr[1]) << '\n';

  if(get<0>(arr[0])!=get<0>(arr[1])) {
    cout << get<0>(arr[2]) << ' ' << get<1>(arr[2]);
    return 0;
  }
  check = get<0>(arr[0]);

  for(int i=2; i<N; i++) {
    if(get<0>(arr[i])==check) continue;
    cout << get<0>(arr[i]) << ' ' << get<1>(arr[i]);
    return 0;
  }
}