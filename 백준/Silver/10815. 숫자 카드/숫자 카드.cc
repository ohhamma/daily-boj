#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,M,x;
int arr[500001];
set<int> s;

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) {
    cin >> x;
    s.insert(x);
  }
  cin >> M;
  for(int i=0; i<M; i++) {
    cin >> arr[i];
    if(s.find(arr[i])!=s.end()) cout << 1 << ' ';
    else cout << 0 << ' ';
  }
}