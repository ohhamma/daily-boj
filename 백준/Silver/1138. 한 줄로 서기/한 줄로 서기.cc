#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,cnt;
int arr[11];  // arr[i]: 키가 i인 사람 왼쪽에 키큰사람 수
int res[11];  // res[i]: i번째 사람의 키
bool solved;
bool visited[11];

void sol(int lv){
  if(lv==N){
    for(int i=0; i<N; i++){
      cnt = 0;
      for(int j=0; j<i; j++)
        if(res[j]>res[i]) cnt++;
      if(cnt!=arr[res[i]]) return;
    }
    for(int i=0; i<N; i++) cout << res[i] << ' ';
    solved = true;
    return;
  }
  for(int i=1; i<=N; i++) {
    if(visited[i]) continue;
    visited[i] = true;
    res[lv] = i;
    sol(lv+1);
    if(solved) return;
    visited[i] = false;
  }
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=1; i<=N; i++) cin >> arr[i];
  sol(0);
}