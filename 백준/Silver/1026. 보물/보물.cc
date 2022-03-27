#include <iostream>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int N;
int A[51];
int B[51];

bool down(int a, int b) {
  return a > b;
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin >> A[i];
  for(int i=0; i<N; i++) cin >> B[i];

  sort(A,A+N);        // 오름차순
  sort(B,B+N,down);   // 내림차순

  int s = 0;
  for(int i=0; i<N; i++)
    s += A[i]*B[i];
  cout << s;
}

// B에 있는 수는 재배열하면 안된다고 했지만
// 사실상 덧셈의 교환법칙에 의해 재배열해도 상관없음