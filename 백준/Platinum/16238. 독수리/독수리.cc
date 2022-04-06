#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N,day;
int arr[1001];
ll res;

bool cmp(int a, int b) {
  return a>b;
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr,arr+N,cmp);
  for(int i=0; i<N; i++) {
    if(arr[i]<=day) continue;
    res+=arr[i]-day;
    day++;
  }
  cout << res;
}

// 내림차순으로 정렬해서 양을 먹어도
// 원래 순서대로 양을 먹는 최대값과 동일함