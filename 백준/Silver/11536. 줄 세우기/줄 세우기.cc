#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N;
string arr[21];
bool in,de;

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin >> arr[i];
  in = true; de = true;
  for(int i=1; i<N; i++) {
    if(arr[i-1]<arr[i]) de = false;
    if(arr[i-1]>arr[i]) in = false;
    if(!in && !de) break;
  }
  if(in) cout << "INCREASING";
  else if(de) cout << "DECREASING";
  else cout << "NEITHER";
}