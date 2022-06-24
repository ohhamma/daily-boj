#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int score,res;
int arr[5];
vector<pii> v;

bool cmp(pii a, pii b) {
  return a.second>b.second;
}

int main() {
  FASTIO;
  for(int i=0; i<8; i++) {
    cin >> score;
    v.push_back({i+1,score});
  }
  sort(v.begin(),v.end(),cmp);
  for(int i=0; i<5; i++) {
    res += v[i].second;
    arr[i] = v[i].first;
  }
  cout << res << '\n';
  sort(arr,arr+5);
  for(int i=0; i<5; i++) cout << arr[i] << ' ';
}