#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int B,C,D,sale;
int arr[1010];
int bef,aft;

bool cmp(int a, int b) { return a>b; }

int main() {
  FASTIO;
  cin >> B >> C >> D;
  sale = min(min(B,C),D);
  for(int i=0; i<B; i++) {
    cin >> arr[i];
    bef += arr[i];
  }
  sort(arr,arr+B,cmp);
  for(int i=0; i<sale; i++) aft += arr[i]*0.9;
  for(int i=sale; i<B; i++) aft += arr[i];

  for(int i=0; i<C; i++) {
    cin >> arr[i];
    bef += arr[i];
  }
  sort(arr,arr+C,cmp);
  for(int i=0; i<sale; i++) aft += arr[i]*0.9;
  for(int i=sale; i<C; i++) aft += arr[i];

  for(int i=0; i<D; i++) {
    cin >> arr[i];
    bef += arr[i];
  }
  sort(arr,arr+D,cmp);
  for(int i=0; i<sale; i++) aft += arr[i]*0.9;
  for(int i=sale; i<D; i++) aft += arr[i];

  cout << bef << '\n' << aft;
}