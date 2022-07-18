#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,C,l,r;
int arr[200005];

int main() {
  FASTIO;
  cin >> N >> C;
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr,arr+N);

  l = 0;
  r = arr[N-1];
  while(l<=r){
    int cnt = 1;  // 첫번째 좌표에는 무조건 공유기 설치
    int tmp = 0;
    int mid = (l+r)/2;
    for(int i=1; i<N; i++){
      if(arr[i]-arr[tmp]>=mid){
        tmp = i;
        cnt++;
      }
    }
    if(cnt>=C) l = mid+1;
    else r = mid-1;
  }
  cout << r;
}