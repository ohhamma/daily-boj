#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int T;
int arr[10];

int main() {
  FASTIO;
  cin >> T;
  while(T--) {
    for(int i=0; i<10; i++) cin >> arr[i];
    sort(arr,arr+10);
    cout << arr[7] << '\n';
  }
}