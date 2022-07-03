#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<string,double> psd;

int N;
psd arr[51];

bool cmp(psd a, psd b) {
  return a.second>b.second;
}

int main() {
  FASTIO;
  cin >> N;
  while(N!=0) {
    for(int i=0; i<N; i++) cin >> arr[i].first >> arr[i].second;
    stable_sort(arr,arr+N,cmp);
    for(int i=0; i<N; i++)
      if(arr[i].second==arr[0].second) cout << arr[i].first << ' ';
    cout << '\n';
    cin >> N;
  }
}