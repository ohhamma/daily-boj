#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int K,N,res;
int arr[51];

int main() {
  FASTIO;
  cin >> K;
  for(int i=1; i<=K; i++){
    cin >> N;
    for(int j=0; j<N; j++) cin >> arr[j];
    sort(arr,arr+N);
    res = 0;
    for(int j=1; j<N; j++)
      res = max(res,arr[j]-arr[j-1]);
    cout << "Class " << i << '\n';
    cout << "Max " << arr[N-1] << ", Min " << arr[0] << ", Largest gap " << res << '\n';
  }
}