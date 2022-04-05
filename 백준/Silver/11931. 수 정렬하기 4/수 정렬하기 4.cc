#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N;
int arr[1000001];

bool cmp(int a, int b) {
  return a>b;
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr,arr+N,cmp);
  for(int i=0; i<N; i++) cout << arr[i] << '\n';
}