#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,M,x1,y1,x2,y2,cnt;
int arr[101][101];

int main() {
  FASTIO;
  cin >> N >> M;
  for(int i=0; i<N; i++){
    cin >> x1 >> y1 >> x2 >> y2;
    for(int y=y1; y<=y2; y++)
      for(int x=x1; x<=x2; x++)
        arr[y][x]++;
  }
  for(int i=1; i<=100; i++)
    for(int j=1; j<=100; j++)
      if(arr[i][j]>M) cnt++;
      
  cout << cnt;
}