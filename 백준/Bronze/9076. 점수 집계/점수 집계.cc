#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int T;
int arr[6];

int main() {
  FASTIO;
  cin >> T;
  while(T--) {
    for(int i=0; i<5; i++) cin >> arr[i];
    sort(arr,arr+5);
    if(arr[3]-arr[1]<4) cout << arr[1]+arr[2]+arr[3] << '\n';
    else cout << "KIN\n";
  }
}