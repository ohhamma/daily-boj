#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,M;
int arr[10];
int ans[10];
bool visited[10];

void sol(int lv) {
  if(lv==M) {
    for(int i=0; i<M; i++) cout << ans[i] << ' ';
    cout << '\n';
    return;
  }
  int check = 0;    // 중복수열 제거
  for(int i=0; i<N; i++) {
    if(!visited[i] && arr[i]!=check) {
      ans[lv] = arr[i];
      check = ans[lv];
      visited[i] = true;
      sol(lv+1);
      visited[i] = false;
    }
  }
}

int main() {
  FASTIO;
  cin >> N >> M;
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr,arr+N);
  sol(0);
}

// (이전 수열의 마지막항) == (새로 추가할 값)
// 일때 중복수열 발생 !

// -> 오름차순이기 때문에 확인가능한 조건