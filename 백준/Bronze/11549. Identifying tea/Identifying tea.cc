#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int T,res;
int arr[5];

int main() {
  FASTIO;
  cin >> T;
  for(int i=0; i<5; i++) cin >> arr[i];
  for(int i=0; i<5; i++)
    if(arr[i]==T) res++;
  cout << res;
}