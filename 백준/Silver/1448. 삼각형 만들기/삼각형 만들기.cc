#include <iostream>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int N;
int straw[1000001];

bool down(int a, int b) {
  return a > b;
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin >> straw[i];
  sort(straw,straw+N,down);   // 내림차순

  for(int i=0; i<N-2; i++) {
    if(straw[i]<straw[i+1]+straw[i+2]) {
      cout << straw[i]+straw[i+1]+straw[i+2];
      return 0;
    }
  }
  cout << -1;
}

// 삼각형을 이루는 조건 : A<B+C (A가 긴 변일때)

// 내림차순 정렬했을때 현재 인덱스 i일때, i+1과 i+2의 배열값이 삼각형을 못 만들면
// 그 뒤에 있는 값들도 삼각형을 절대 만들수가 없음

// 따라서 그 상황에서 삼각형 못 만들면 바로 다음 인덱스로 넘어감