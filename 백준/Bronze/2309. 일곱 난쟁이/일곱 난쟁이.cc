#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int arr[10];
int total,fakeIdx1,fakeIdx2;
vector<int> v;

void sol() {
  for(int i=1; i<9; i++)
    for(int j=0; j<i; j++)
      if(total-100==arr[i]+arr[j]) {
        fakeIdx1 = i;
        fakeIdx2 = j;
        return;
      }
}

int main() {
  FASTIO;
  for(int i=0; i<9; i++) {
    cin >> arr[i];
    total += arr[i];
  }
  sol();
  for(int i=0; i<9; i++) {
    if(i==fakeIdx1 || i==fakeIdx2) continue;
    v.push_back(arr[i]);
  }
  sort(v.begin(),v.end());
  for(auto i:v) cout << i << '\n';
}