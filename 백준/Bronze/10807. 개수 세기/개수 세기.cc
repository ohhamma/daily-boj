#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N,v,ans;
int arr[101];

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin >> arr[i];
  cin >> v;
  for(int i=0; i<N; i++)
    if(arr[i]==v) ans++;
  cout << ans;
}