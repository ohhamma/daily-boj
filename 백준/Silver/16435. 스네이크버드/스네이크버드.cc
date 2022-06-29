#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,L;
int arr[10001];

int main() {
  FASTIO;
  cin >> N >> L;
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr,arr+N);
  for(int i=0; i<N; i++) {
    if(arr[i]>L) break;
    L++;
  }
  cout << L;
}