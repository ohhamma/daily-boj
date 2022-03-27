#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int N,r,c;
int res;

void Z(int x, int y, int size) {    // (x,y): 사분면 좌측상단의 좌표, size: 사분면 한변의 길이
  if(x==r && y==c) {
    cout << res;
    return;
  }
  if(r>=x && r<x+size && c>=y && c<y+size) {  // 사분면 내 존재할 경우
    // 각 사분면별로 나눠서 탐색
    Z(x,y,size/2);
    Z(x,y+size/2,size/2);
    Z(x+size/2,y,size/2);
    Z(x+size/2,y+size/2,size/2);
  }
  else {  // 존재하지X
    res += size*size;   // 다음 사분면으로 넘어감
  }
}

int main() {
  FASTIO;
  cin >> N >> r >> c;
  Z(0,0,(1<<N));        // 1<<N == 2^n (왼쪽 시프트 연산자)
}

// 실시간으로 탐색, 분할정복