#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<vector<ll>> mat;

#define MOD 1000000007

ll n;

mat mulMat(mat &a, mat &b) {    // (1), 이때 레퍼런스(&)를 이용하여 사용하는 메모리를 줄여주자
  mat c(2,vector<ll>(2));
  for(int i=0; i<2; i++)
    for(int j=0; j<2; j++) {
      for(int k=0; k<2; k++)
        c[i][j] += a[i][k]*b[k][j];
      c[i][j] %= MOD;
    }
  return c;
}

int main() {
  FASTIO;
  cin >> n;

  mat a = {{1,1},
           {1,0}};

  // 행렬 곱셈에 대한 항등원
  mat ans = {{1,0},
             {0,1}};

  while(n>0) {    // (2)
    if(n%2==1) ans = mulMat(a,ans); // n이 홀수면, (a*ans)^2
    a = mulMat(a,a);  // 짝수면, a^2
    n/=2;
  }
  cout << ans[0][1]; 
}

// (1) 행렬의 곱셈을 이용한 피보나치수 연산 : O(logN)
// (2) 분할정복을 이용한 거듭제곱

// mulMat함수 대신 연산자 오버로딩(*)으로 행렬 곱셈 가능

// if(n%2==1) 와 같은 표현: if(n&1)