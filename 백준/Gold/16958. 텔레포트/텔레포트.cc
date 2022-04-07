#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

#define MAX 1001

int N,T,M,res,ans;
int s,x,y,A,B;
int fast[MAX][MAX];
piii arr[MAX];

int dist(pii from, pii to) {
  return abs(from.first-to.first)+abs(from.second-to.second);
}

void sol() {
  for(int i=1; i<=N; i++)
    for(int j=1; j<=N; j++) {
      fast[i][j] = dist(arr[i].second,arr[j].second);   // 단순 좌표 이동
      if(arr[i].first && arr[j].first)
        fast[i][j]=min(fast[i][j],T);                   // 텔레포트
    }

  for(int k=1; k<=N; k++)       // 플로이드 와샬 (더 빠른길로 갱신)
    for(int i=1; i<=N; i++)
      for(int j=1; j<=N; j++) {
        if(i==j) continue;
        fast[i][j]=min(fast[i][j],fast[i][k]+fast[k][j]);
      }
}

int main() {
  FASTIO;
  cin >> N >> T;
  for(int i=1; i<=N; i++)
    cin >> arr[i].first >> arr[i].second.first >> arr[i].second.second;
  
  sol();
  cin >> M;
  while(M--) {
    cin >> A >> B;
    cout << fast[A][B] << '\n';
  }
}