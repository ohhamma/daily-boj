#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int k,res;
int arr[15];
bool possible[2600005];
ll s;

void sol(int i, int w) {  // 모든 경우의 수 다 해보기
  if(i>k) return;         // i==k의 의미: 추를 모두 다 사용함 (결과값 나옴)

  possible[w]=true;

  sol(i+1,w);              // case1) 추 올리지x, 다음 인덱스
  sol(i+1,w+arr[i]);       // case2) 추 올리고, 다음 인덱스
  sol(i+1,abs(w-arr[i]));  // case3) 추 반대편에 올리고, 다음 인덱스
}

int main() {
  FASTIO;
  cin >> k;
  for(int i=0; i<k; i++) {
    cin >> arr[i];
    s+=arr[i];
  }
  sol(0,0);

  for(int i=1; i<=s; i++)
    if(!possible[i]) res++;
  cout << res;
}