#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int N,neg,zero,one;
int paper[2200][2200];

void sol(int x, int y, int size) {
  int tmp = paper[x][y];

  for(int i=x; i<x+size; i++)
    for(int j=y; j<y+size; j++)
      if(tmp!=paper[i][j]) {
        sol(x,y,size/3);
        sol(x+size/3,y,size/3);
        sol(x+2*size/3,y,size/3);
        sol(x,y+size/3,size/3);
        sol(x+size/3,y+size/3,size/3);
        sol(x+2*size/3,y+size/3,size/3);
        sol(x,y+2*size/3,size/3);
        sol(x+size/3,y+2*size/3,size/3);
        sol(x+2*size/3,y+2*size/3,size/3);
        return;
      }
  
  if(tmp==-1) neg++;
  else if(tmp==0) zero++;
  else one++;
  return;
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++)
    for(int j=0; j<N; j++)
      cin >> paper[i][j];

  sol(0,0,N);
  cout << neg << '\n' << zero << '\n' << one;
}