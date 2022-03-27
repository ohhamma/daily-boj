#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int N,M,ch,num,res;
bool broken[10];

bool exist(int i) {
  string s = to_string(i);
  num = s.length();
  for(char c : s)
    if(broken[c-'0'])
      return false;
  return true;
}

int main() {
  FASTIO;
  cin >> N >> M;
  for(int i=0; i<M; i++) {
    cin >> ch;
    broken[ch] = true;
  }
  res = abs(N-100);
  for(int i=0; i<=1000000; i++)
    if(exist(i)) res = min(res,abs(N-i)+num);
  cout << res;
}

// 이동할수 있는 채널: 0 ~ 500000 (브루트포스)
// 숫자버튼 누르는 횟수도 추가해야함
// 최악의 경우의수: 버튼 다 고장남(M=10), N = 500000