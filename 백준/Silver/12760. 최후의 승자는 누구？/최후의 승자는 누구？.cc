#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,M,res;
int arr[101][101];
int score[101];

bool cmp(int a, int b) { return a>b; }

int main() {
  FASTIO;
  cin >> N >> M;
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++)
      cin >> arr[i][j];
    sort(arr[i],arr[i]+M,cmp);
  }

  for(int i=0; i<M; i++){
    res = 0;
    for(int j=0; j<N; j++) res = max(res,arr[j][i]);
    for(int j=0; j<N; j++)
      if(arr[j][i]==res) score[j]++;
  }
  res = 0;
  for(int i=0; i<N; i++) res = max(res,score[i]);
  for(int i=0; i<N; i++)
    if(score[i]==res) cout << i+1 << ' ';
}