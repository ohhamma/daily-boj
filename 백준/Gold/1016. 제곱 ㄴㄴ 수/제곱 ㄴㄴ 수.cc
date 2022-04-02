#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

ll m,M,cnt;
bool check[1000001];   // 제곱ㄴㄴ이면 false

int main() {
  FASTIO;
  cin >> m >> M;
  for(ll i=2; i*i<=M; i++) {
    ll num = m/(i*i);
    if(m%(i*i)) num++;        // 제곱ㄴㄴ이면 num 증가 (num*i*i를 m보다 더 크게 만들기 위해서)
    while(num*i*i<=M) {       // 이떄 num*i*i는 m과 동일할수도, m보다 클수도 있음 (여기서 핵심은 제곱ㄴㄴ가 아니라는것)
      check[num*i*i-m] = true;
      num++;
    }
  }
  for(int i=0; i<=M-m; i++)
    if(!check[i]) cnt++;

  cout << cnt;
}

// 모두 나눠버리면 시간초과가 뜨기 때문에 (범위를 m ~ M으로 제한할것)
// M보다 작은 제곱수들을 나누고, 나머지!=0일 경우 그 배수들도 모두 count
// 중복방지를 위해 check 배열 사용